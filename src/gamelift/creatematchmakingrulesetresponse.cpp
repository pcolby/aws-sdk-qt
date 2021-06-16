/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "creatematchmakingrulesetresponse.h"
#include "creatematchmakingrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::CreateMatchmakingRuleSetResponse
 * \brief The CreateMatchmakingRuleSetResponse class provides an interace for GameLift CreateMatchmakingRuleSet responses.
 *
 * \inmodule QtAwsGameLift
 *
 *  <fullname>Amazon GameLift Service</fullname>
 * 
 *  Amazon GameLift is a managed service for developers who need a scalable, dedicated server solution for their multiplayer
 *  games. Use Amazon GameLift for these tasks: (1) set up computing resources and deploy your game servers, (2) run game
 *  sessions and get players into games, (3) automatically scale your resources to meet player demand and manage costs, and
 *  (4) track in-depth metrics on game server performance and player
 * 
 *  usage>
 * 
 *  When setting up hosting resources, you can deploy your custom game server or use the Amazon GameLift Realtime Servers.
 *  Realtime Servers gives you the ability to quickly stand up lightweight, efficient game servers with the core Amazon
 *  GameLift infrastructure already built
 * 
 *  in>
 * 
 *  <b>Get Amazon GameLift Tools and Resources</b>
 * 
 *  </p
 * 
 *  This reference guide describes the low-level service API for Amazon GameLift and provides links to language-specific SDK
 *  reference topics. See also <a
 *  href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html"> Amazon GameLift Tools and
 * 
 *  Resources</a>>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Amazon GameLift service API includes two key sets of
 * 
 *  actions> <ul> <li>
 * 
 *  Manage game sessions and player access -- Integrate this functionality into game client services in order to create new
 *  game sessions, retrieve information on existing game sessions; reserve a player slot in a game session, request
 *  matchmaking,
 * 
 *  etc> </li> <li>
 * 
 *  Configure and manage game server resources -- Manage your Amazon GameLift hosting resources, including builds, scripts,
 *  fleets, queues, and aliases. Set up matchmakers, configure auto-scaling, retrieve game logs, and get hosting and game
 * 
 *  metrics> </li> </ul>
 * 
 *  <b> <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html"> Task-based list of API
 *  actions</a> </b>
 *
 * \sa GameLiftClient::createMatchmakingRuleSet
 */

/*!
 * Constructs a CreateMatchmakingRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMatchmakingRuleSetResponse::CreateMatchmakingRuleSetResponse(
        const CreateMatchmakingRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateMatchmakingRuleSetResponsePrivate(this), parent)
{
    setRequest(new CreateMatchmakingRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMatchmakingRuleSetRequest * CreateMatchmakingRuleSetResponse::request() const
{
    Q_D(const CreateMatchmakingRuleSetResponse);
    return static_cast<const CreateMatchmakingRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameLift CreateMatchmakingRuleSet \a response.
 */
void CreateMatchmakingRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMatchmakingRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameLift::CreateMatchmakingRuleSetResponsePrivate
 * \brief The CreateMatchmakingRuleSetResponsePrivate class provides private implementation for CreateMatchmakingRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a CreateMatchmakingRuleSetResponsePrivate object with public implementation \a q.
 */
CreateMatchmakingRuleSetResponsePrivate::CreateMatchmakingRuleSetResponsePrivate(
    CreateMatchmakingRuleSetResponse * const q) : GameLiftResponsePrivate(q)
{

}

/*!
 * Parses a GameLift CreateMatchmakingRuleSet response element from \a xml.
 */
void CreateMatchmakingRuleSetResponsePrivate::parseCreateMatchmakingRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMatchmakingRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameLift
} // namespace QtAws
