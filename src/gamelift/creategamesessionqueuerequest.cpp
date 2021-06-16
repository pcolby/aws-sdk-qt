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

#include "creategamesessionqueuerequest.h"
#include "creategamesessionqueuerequest_p.h"
#include "creategamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::CreateGameSessionQueueRequest
 * \brief The CreateGameSessionQueueRequest class provides an interface for GameLift CreateGameSessionQueue requests.
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
 * \sa GameLiftClient::createGameSessionQueue
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest(const CreateGameSessionQueueRequest &other)
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGameSessionQueueRequest object.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest()
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(GameLiftRequest::CreateGameSessionQueueAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGameSessionQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGameSessionQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateGameSessionQueueResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::CreateGameSessionQueueRequestPrivate
 * \brief The CreateGameSessionQueueRequestPrivate class provides private implementation for CreateGameSessionQueueRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a CreateGameSessionQueueRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, CreateGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGameSessionQueueRequest
 * class' copy constructor.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const CreateGameSessionQueueRequestPrivate &other, CreateGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
