# DarkMesh Static Website

Sito statico completo per il progetto DarkMesh, ospitato su GitHub Pages.

## 📁 Struttura del Sito

```
docs/
├── index.html          # Homepage con panoramica progetto
├── downloads.html      # Download firmware (dinamico via GitHub API)
├── netiquette.html     # Linee guida community
├── roles.html          # Configurazione ruoli mesh
├── radios.html         # Hardware LoRa testato
├── antennas.html       # Recensioni antenne
├── style.css           # Stile comune dark theme
└── images/
    └── dmlogo4.png     # Logo DarkMesh
```

## ✨ Features

### Homepage (index.html)
- Panoramica progetto DarkMesh
- Link a repository GitHub (Firmware & Android)
- Configurazioni canali LoRa
- Sezioni risorse e donazioni

### Download Firmware (downloads.html)
- **Auto-discovery** dispositivi dalle release GitHub
- Selezione: Device → Versione firmware
- Download diretto file `.zip`
- Aggiornamento automatico via GitHub Releases API
- Zero manutenzione

### Pagine Tecniche
- **Netiquette**: linee guida uso responsabile mesh
- **Roles**: configurazione CLIENT_MUTE vs CLIENT_BASE
- **Radios**: specifiche hardware Heltec V3, T-BEAM 1W
- **Antennas**: recensioni antenne 868MHz con valutazioni SWR

## 🎨 Design

- **Dark theme** GitHub-style
- **Responsive** mobile-friendly
- **Minimal** zero JavaScript (eccetto downloads.html)
- **Performance** CSS puro, no framework

## 🚀 Deployment

### GitHub Pages Setup

1. Vai su: `Settings` → `Pages`
2. Source: **Deploy from branch**
3. Branch: `2.5.20-darkmesh_ghost`
4. Folder: `/docs`
5. Save

Sito live su: `https://tommasolencioni.github.io/DarkMesh-Firmware/`

### Local Development

```bash
cd docs/
python3 -m http.server 8000
# Apri http://localhost:8000
```

Oppure apri direttamente `index.html` nel browser (funziona anche offline, eccetto downloads.html).

## 🔄 Aggiornamenti

- **Contenuti statici**: modifica HTML e committa
- **Firmware downloads**: automatico quando crei nuove GitHub Releases
- **Device list**: auto-popolata dalle release esistenti

## 📝 Note

- Logo originale: `darkmesh.neocities.org/images/dmlogo4.png`
- Stile ispirato al sito originale Neocities
- API GitHub: `https://api.github.com/repos/TommasoLencioni/DarkMesh-Firmware/releases`
- Rate limit: 60 req/h (non autenticato) - più che sufficiente per un sito statico
