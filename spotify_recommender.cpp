// Version 1.4 - Added error handling loops for invalid inputs
// Version 1.3 - Added Top Hits section with 10 popular songs
// Version 1.2 - Added Mood and Activity recommendations
// Version 1.1 - Added Genre recommendations with 8 genres
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char continueChoice;
    
    cout << "================================================" << endl;
    cout << "   🎵 SPOTIFY SONG RECOMMENDER" << endl;
    cout << "   Discover your next favorite song!" << endl;
    cout << "================================================" << endl;
    
    do {
        int recommendationType = 0;
        int choice = 0;
        bool validInput = false;
        
        // ==================== STEP 1: SELECT RECOMMENDATION TYPE (WITH LOOP) ====================
        while (!validInput) {
            cout << "\nHow would you like to discover music?" << endl;
            cout << "1 - By Genre" << endl;
            cout << "2 - By Mood / Vibe" << endl;
            cout << "3 - By Activity" << endl;
            cout << "4 - Top Hits / Popular Songs" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> recommendationType;
            
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\n❌ Invalid input! Please enter a number (1-4)." << endl;
            } else if (recommendationType >= 1 && recommendationType <= 4) {
                validInput = true;
            } else {
                cout << "\n❌ Invalid choice! Please enter 1, 2, 3, or 4." << endl;
            }
        }
        
        cout << "\n================================================" << endl;
        
        // ==================== STEP 2: PROCESS RECOMMENDATION TYPE ====================
        bool subValid = false;
        
        switch(recommendationType) {
            case 1: // By Genre
                subValid = false;
                while (!subValid) {
                    cout << "Select a genre:" << endl;
                    cout << "1 - Pop" << endl;
                    cout << "2 - Rock" << endl;
                    cout << "3 - Hip-Hop / Rap" << endl;
                    cout << "4 - EDM / Electronic" << endl;
                    cout << "5 - R&B / Soul" << endl;
                    cout << "6 - K-Pop" << endl;
                    cout << "7 - Jazz" << endl;
                    cout << "8 - Classical" << endl;
                    cout << "Enter your choice (1-8): ";
                    cin >> choice;
                    
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "\n❌ Invalid input! Please enter a number (1-8)." << endl;
                    } else if (choice >= 1 && choice <= 8) {
                        subValid = true;
                    } else {
                        cout << "\n❌ Invalid genre! Please enter 1-8." << endl;
                    }
                }
                
                cout << "\n🎵 RECOMMENDED SONGS:" << endl;
                cout << "----------------------------------------" << endl;
                
                switch(choice) {
                    case 1: // Pop
                        cout << "1. 'Blinding Lights' - The Weeknd" << endl;
                        cout << "   💡 Synth-pop masterpiece with 80s vibes" << endl;
                        cout << "2. 'Levitating' - Dua Lipa" << endl;
                        cout << "   💡 Catchy disco-pop anthem" << endl;
                        cout << "3. 'As It Was' - Harry Styles" << endl;
                        cout << "   💡 Upbeat pop with nostalgic feel" << endl;
                        break;
                    case 2: // Rock
                        cout << "1. 'Bohemian Rhapsody' - Queen" << endl;
                        cout << "   💡 Epic rock opera masterpiece" << endl;
                        cout << "2. 'Smells Like Teen Spirit' - Nirvana" << endl;
                        cout << "   💡 Grunge anthem that defined a generation" << endl;
                        cout << "3. 'Hotel California' - Eagles" << endl;
                        cout << "   💡 Classic rock with haunting guitar solo" << endl;
                        break;
                    case 3: // Hip-Hop/Rap
                        cout << "1. 'Lose Yourself' - Eminem" << endl;
                        cout << "   💡 Motivational rap with iconic beat" << endl;
                        cout << "2. 'Sicko Mode' - Travis Scott" << endl;
                        cout << "   💡 Genre-bending hip-hop hit" << endl;
                        cout << "3. 'God's Plan' - Drake" << endl;
                        cout << "   💡 Catchy rap with uplifting message" << endl;
                        break;
                    case 4: // EDM
                        cout << "1. 'Strobe' - deadmau5" << endl;
                        cout << "   💡 Progressive house masterpiece" << endl;
                        cout << "2. 'Titanium' - David Guetta ft. Sia" << endl;
                        cout << "   💡 Powerful electronic pop anthem" << endl;
                        cout << "3. 'Animals' - Martin Garrix" << endl;
                        cout << "   💡 Big room EDM festival banger" << endl;
                        break;
                    case 5: // R&B/Soul
                        cout << "1. 'Blinding Lights' - The Weeknd" << endl;
                        cout << "   💡 Synth-wave R&B with 80s influence" << endl;
                        cout << "2. 'Adorn' - Miguel" << endl;
                        cout << "   💡 Smooth neo-soul love song" << endl;
                        cout << "3. 'Best Part' - Daniel Caesar ft. H.E.R." << endl;
                        cout << "   💡 Intimate acoustic R&B duet" << endl;
                        break;
                    case 6: // K-Pop
                        cout << "1. 'Dynamite' - BTS" << endl;
                        cout << "   💡 Upbeat disco-pop with global appeal" << endl;
                        cout << "2. 'How You Like That' - BLACKPINK" << endl;
                        cout << "   💡 High-energy K-pop with powerful choreo" << endl;
                        cout << "3. 'Cupid' - FIFTY FIFTY" << endl;
                        cout << "   💡 Retro-inspired K-pop viral hit" << endl;
                        break;
                    case 7: // Jazz
                        cout << "1. 'Take Five' - Dave Brubeck" << endl;
                        cout << "   💡 Iconic jazz piece in 5/4 time signature" << endl;
                        cout << "2. 'So What' - Miles Davis" << endl;
                        cout << "   💡 Modal jazz masterpiece" << endl;
                        cout << "3. 'Summertime' - Ella Fitzgerald" << endl;
                        cout << "   💡 Classic jazz vocals with soulful delivery" << endl;
                        break;
                    case 8: // Classical
                        cout << "1. 'Clair de Lune' - Debussy" << endl;
                        cout << "   💡 Dreamy piano piece with romantic feel" << endl;
                        cout << "2. 'Canon in D' - Pachelbel" << endl;
                        cout << "   💡 Timeless Baroque orchestral piece" << endl;
                        cout << "3. 'The Four Seasons' - Vivaldi" << endl;
                        cout << "   💡 Baroque violin concertos depicting seasons" << endl;
                        break;
                }
                break;
                
            case 2: // By Mood
                subValid = false;
                while (!subValid) {
                    cout << "Select your mood:" << endl;
                    cout << "1 - Happy / Energetic" << endl;
                    cout << "2 - Sad / Melancholic" << endl;
                    cout << "3 - Chill / Relaxed" << endl;
                    cout << "4 - Romantic / Love" << endl;
                    cout << "5 - Angry / Intense" << endl;
                    cout << "Enter your choice (1-5): ";
                    cin >> choice;
                    
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "\n❌ Invalid input! Please enter a number (1-5)." << endl;
                    } else if (choice >= 1 && choice <= 5) {
                        subValid = true;
                    } else {
                        cout << "\n❌ Invalid mood! Please enter 1-5." << endl;
                    }
                }
                
                cout << "\n🎵 RECOMMENDED SONGS:" << endl;
                cout << "----------------------------------------" << endl;
                
                switch(choice) {
                    case 1: // Happy
                        cout << "1. 'Happy' - Pharrell Williams" << endl;
                        cout << "   💡 Feel-good anthem with clapping beat" << endl;
                        cout << "2. 'Uptown Funk' - Mark Ronson ft. Bruno Mars" << endl;
                        cout << "   💡 Funk-pop party starter" << endl;
                        cout << "3. 'Can't Stop The Feeling!' - Justin Timberlake" << endl;
                        cout << "   💡 Pure joy in musical form" << endl;
                        break;
                    case 2: // Sad
                        cout << "1. 'Someone Like You' - Adele" << endl;
                        cout << "   💡 Heartbreaking piano ballad" << endl;
                        cout << "2. 'Fix You' - Coldplay" << endl;
                        cout << "   💡 Emotional anthem of healing" << endl;
                        cout << "3. 'Hurt' - Johnny Cash" << endl;
                        cout << "   💡 Haunting cover of Nine Inch Nails" << endl;
                        break;
                    case 3: // Chill
                        cout << "1. 'The Less I Know The Better' - Tame Impala" << endl;
                        cout << "   💡 Psychedelic chill pop" << endl;
                        cout << "2. 'Electric Feel' - MGMT" << endl;
                        cout << "   💡 Laid-back indie electro" << endl;
                        cout << "3. 'Slow Dancing In The Dark' - Joji" << endl;
                        cout << "   💡 Ambient R&B chill vibes" << endl;
                        break;
                    case 4: // Romantic
                        cout << "1. 'All of Me' - John Legend" << endl;
                        cout << "   💡 Romantic piano love ballad" << endl;
                        cout << "2. 'Perfect' - Ed Sheeran" << endl;
                        cout << "   💡 Acoustic love song" << endl;
                        cout << "3. 'At Last' - Etta James" << endl;
                        cout << "   💡 Classic soulful love anthem" << endl;
                        break;
                    case 5: // Angry
                        cout << "1. 'Killing In The Name' - Rage Against The Machine" << endl;
                        cout << "   💡 Heavy political rock anthem" << endl;
                        cout << "2. 'Break Stuff' - Limp Bizkit" << endl;
                        cout << "   💡 Aggressive nu-metal anger" << endl;
                        cout << "3. 'Bodies' - Drowning Pool" << endl;
                        cout << "   💡 Heavy metal rage anthem" << endl;
                        break;
                }
                break;
                
            case 3: // By Activity
                subValid = false;
                while (!subValid) {
                    cout << "What are you doing?" << endl;
                    cout << "1 - Workout / Gym" << endl;
                    cout << "2 - Studying / Focus" << endl;
                    cout << "3 - Driving / Road Trip" << endl;
                    cout << "4 - Party / Dancing" << endl;
                    cout << "5 - Sleeping / Relaxing" << endl;
                    cout << "Enter your choice (1-5): ";
                    cin >> choice;
                    
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "\n❌ Invalid input! Please enter a number (1-5)." << endl;
                    } else if (choice >= 1 && choice <= 5) {
                        subValid = true;
                    } else {
                        cout << "\n❌ Invalid activity! Please enter 1-5." << endl;
                    }
                }
                
                cout << "\n🎵 RECOMMENDED SONGS:" << endl;
                cout << "----------------------------------------" << endl;
                
                switch(choice) {
                    case 1: // Workout
                        cout << "1. 'Till I Collapse' - Eminem" << endl;
                        cout << "   💡 High-energy motivational rap" << endl;
                        cout << "2. 'Eye of the Tiger' - Survivor" << endl;
                        cout << "   💡 Classic workout anthem" << endl;
                        cout << "3. 'Stronger' - Kanye West" << endl;
                        cout << "   💡 Pump-up electronic rap" << endl;
                        break;
                    case 2: // Studying
                        cout << "1. 'Weightless' - Marconi Union" << endl;
                        cout << "   💡 Scientifically proven calming music" << endl;
                        cout << "2. 'Ambient 1' - Brian Eno" << endl;
                        cout << "   💡 Pioneering ambient focus music" << endl;
                        cout << "3. 'River Flows in You' - Yiruma" << endl;
                        cout << "   💡 Gentle piano for concentration" << endl;
                        break;
                    case 3: // Driving
                        cout << "1. 'Drive' - Incubus" << endl;
                        cout << "   💡 Perfect road trip alt-rock" << endl;
                        cout << "2. 'Fast Car' - Tracy Chapman" << endl;
                        cout << "   💡 Soulful driving acoustic" << endl;
                        cout << "3. 'Life is a Highway' - Tom Cochrane" << endl;
                        cout << "   💡 Ultimate road trip anthem" << endl;
                        break;
                    case 4: // Party
                        cout << "1. 'Get Lucky' - Daft Punk ft. Pharrell" << endl;
                        cout << "   💡 Disco-funk dance anthem" << endl;
                        cout << "2. 'Turn Down for What' - DJ Snake" << endl;
                        cout << "   💡 High-energy EDM party starter" << endl;
                        cout << "3. 'Party Rock Anthem' - LMFAO" << endl;
                        cout << "   💡 Classic party banger" << endl;
                        break;
                    case 5: // Sleeping
                        cout << "1. 'Gymnopédie No.1' - Erik Satie" << endl;
                        cout << "   💡 Gentle piano lullaby" << endl;
                        cout << "2. 'Spiegel im Spiegel' - Arvo Pärt" << endl;
                        cout << "   💡 Minimalist meditation music" << endl;
                        cout << "3. 'Nocturne No.2' - Chopin" << endl;
                        cout << "   💡 Romantic piano night music" << endl;
                        break;
                }
                break;
                
            case 4: // Top Hits
                cout << "\n🎵 TOP GLOBAL HITS THIS MONTH:" << endl;
                cout << "----------------------------------------" << endl;
                cout << "1. 'Flowers' - Miley Cyrus" << endl;
                cout << "   💡 Empowering pop anthem" << endl;
                cout << "2. 'Die For You' - The Weeknd" << endl;
                cout << "   💡 Atmospheric R&B pop hit" << endl;
                cout << "3. 'Unholy' - Sam Smith ft. Kim Petras" << endl;
                cout << "   💡 Dark pop with viral chorus" << endl;
                cout << "4. 'Anti-Hero' - Taylor Swift" << endl;
                cout << "   💡 Introspective pop hit" << endl;
                cout << "5. 'About Damn Time' - Lizzo" << endl;
                cout << "   💡 Funky feel-good pop" << endl;
                cout << "6. 'As It Was' - Harry Styles" << endl;
                cout << "   💡 Upbeat synth-pop" << endl;
                cout << "7. 'Save Your Tears' - The Weeknd" << endl;
                cout << "   💡 80s-inspired pop" << endl;
                cout << "8. 'Peaches' - Justin Bieber" << endl;
                cout << "   💡 Chill R&B pop" << endl;
                cout << "9. 'Montero' - Lil Nas X" << endl;
                cout << "   💡 Genre-bending pop rap" << endl;
                cout << "10. 'Bad Habit' - Steve Lacy" << endl;
                cout << "   💡 Indie funk pop" << endl;
                break;
        }
        
        // ==================== STEP 3: ASK TO CONTINUE (Y/N) ====================
        cout << "\n================================================" << endl;
        cout << "🎧 Thank you for using Spotify Recommender!" << endl;
        cout << "📱 Open Spotify app to play these songs." << endl;
        cout << "================================================" << endl;
        
        bool continueValid = false;
        while (!continueValid) {
            cout << "\nDo you want to discover more songs? (y/n): ";
            cin >> continueChoice;
            
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "❌ Invalid input! Please enter 'y' or 'n'." << endl;
            } else {
                continueChoice = tolower(continueChoice);
                if (continueChoice == 'y' || continueChoice == 'n') {
                    continueValid = true;
                } else {
                    cout << "❌ Please enter 'y' for Yes or 'n' for No." << endl;
                }
            }
        }
        
    } while (continueChoice == 'y');
    
    // ==================== STEP 4: EXIT MESSAGE ====================
    cout << "\n================================================" << endl;
    cout << "   🎵 Thank you for using Spotify Recommender!" << endl;
    cout << "   Happy listening! 🎧" << endl;
    cout << "================================================" << endl;
    
    return 0;
}
