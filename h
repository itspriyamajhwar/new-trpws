
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Our Volunteers</title>
    <style>
        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
            font-family: Arial, sans-serif;
        }

        body {
            background-color: #f5f5f5;
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            padding: 20px;
        }

        .volunteer-section {
            text-align: center;
            max-width: 1200px;
            width: 100%;
        }

        .volunteer-section h2 {
            font-size: 2em;
            color: #333;
            margin-bottom: 10px;
        }

        .volunteer-section p {
            font-size: 1em;
            color: #777;
            margin-bottom: 30px;
        }

        .volunteer-container {
            display: flex;
            gap: 20px;
            flex-wrap: wrap;
            justify-content: center;
        }

        .volunteer-card {
            background-color: #fff;
            border-radius: 15px;
            padding: 20px;
            text-align: center;
            width: 100%;
            max-width: 300px;
            box-shadow: 0px 0px 15px rgba(0, 0, 0, 0.1);
            position: relative;
        }

        .volunteer-card h3 {
            font-size: 1.2em;
            font-weight: bold;
            margin-top: 15px;
            color: #333;
        }

        .volunteer-card p {
            font-size: 0.9em;
            color: #666;
            margin: 10px 0;
        }

        .volunteer-card .country {
            position: absolute;
            top: 15px;
            left: 15px;
            background-color: #ffffffb0;
            padding: 5px 10px;
            border-radius: 15px;
            font-size: 0.8em;
            font-weight: bold;
            color: #333;
        }

        .volunteer-card .country.germany { background-color: #ffa500; }
        .volunteer-card .country.barbados { background-color: #8a2be2; }
        .volunteer-card .country.porto-rico { background-color: #1e90ff; }

        .project-card img {
            width: 100px;
            height: 100px;
            border-radius: 50%;
            margin-top: 10px;
        }

        /* Responsive Styles */
        @media (max-width: 768px) {
            .project-container {
                flex-direction: column;
                align-items: center;
            }
        }
    

