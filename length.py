import yt_dlp

playlist_url = 'https://www.youtube.com/playlist?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA'
total_duration = 0

ydl_opts = {}

with yt_dlp.YoutubeDL(ydl_opts) as ydl:
    info_dict = ydl.extract_info(playlist_url, download=False)
    for i, video in enumerate(info_dict['entries'][:149]):
        print(f"{i+1}. {video['title']} — {video['duration']} seconds")
        total_duration += video['duration']

hours = total_duration // 3600
minutes = (total_duration % 3600) // 60
seconds = total_duration % 60

print(f"\nTotal time for first 44 videos: {hours}:{minutes}:{seconds}")
