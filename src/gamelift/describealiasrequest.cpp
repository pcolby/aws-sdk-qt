/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describealiasrequest.h"
#include "describealiasrequest_p.h"
#include "describealiasresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::DescribeAliasRequest
 * \brief The DescribeAliasRequest class provides an interface for GameLift DescribeAlias requests.
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
 *  The Amazon GameLift service API includes two important function
 * 
 *  sets> <ul> <li>
 * 
 *  <b>Manage game sessions and player access</b> -- Retrieve information on available game sessions; create new game
 *  sessions; send player requests to join a game
 * 
 *  session> </li> <li>
 * 
 *  <b>Configure and manage game server resources</b> -- Manage builds, fleets, queues, and aliases; set autoscaling
 *  policies; retrieve logs and
 * 
 *  metrics> </li> </ul>
 * 
 *  This reference guide describes the low-level service API for Amazon GameLift. You can use the API functionality with
 *  these tools:
 * 
 *  </p <ul> <li>
 * 
 *  The Amazon Web Services software development kit (<a href="http://aws.amazon.com/tools/#sdk">AWS SDK</a>) is available
 *  in <a
 *  href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-supported.html#gamelift-supported-clients">multiple
 *  languages</a> including C++ and C#. Use the SDK to access the API programmatically from an application, such as a game
 * 
 *  client> </li> <li>
 * 
 *  The <a href="http://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool is primarily useful for handling
 *  administrative actions, such as setting up and managing Amazon GameLift settings and resources. You can use the AWS CLI
 *  to manage all of your AWS
 * 
 *  services> </li> <li>
 * 
 *  The <a href="https://console.aws.amazon.com/gamelift/home">AWS Management Console</a> for Amazon GameLift provides a web
 *  interface to manage your Amazon GameLift settings and resources. The console includes a dashboard for tracking key
 *  resources, including builds and fleets, and displays usage and performance metrics for your games as customizable
 * 
 *  graphs> </li> <li>
 * 
 *  Amazon GameLift Local is a tool for testing your game's integration with Amazon GameLift before deploying it on the
 *  service. This tools supports a subset of key API actions, which can be called from either the AWS CLI or
 *  programmatically. See <a
 *  href="http://docs.aws.amazon.com/gamelift/latest/developerguide/integration-testing-local.html">Testing an
 * 
 *  Integration</a>> </li> </ul>
 * 
 *  <b>Learn more</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/"> Developer Guide</a> -- Read about Amazon GameLift
 *  features and how to use them.
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://gamedev.amazon.com/forums/tutorials">Tutorials</a> -- Get started fast with walkthroughs and sample
 * 
 *  projects> </li> <li>
 * 
 *  <a href="http://aws.amazon.com/blogs/gamedev/">GameDev Blog</a> -- Stay up to date with new features and
 * 
 *  techniques> </li> <li>
 * 
 *  <a href="https://gamedev.amazon.com/forums/spaces/123/gamelift-discussion.html">GameDev Forums</a> -- Connect with the
 *  GameDev
 * 
 *  community> </li> <li>
 * 
 *  <a href="http://aws.amazon.com/releasenotes/Amazon-GameLift/">Release notes</a> and <a
 *  href="http://docs.aws.amazon.com/gamelift/latest/developerguide/doc-history.html">document history</a> -- Stay current
 *  with updates to the Amazon GameLift service, SDKs, and documentation.
 * 
 *  </p </li> </ul>
 * 
 *  <b>API SUMMARY</b>
 * 
 *  </p
 * 
 *  This list offers a functional overview of the Amazon GameLift service
 * 
 *  API>
 * 
 *  <b>Managing Games and Players</b>
 * 
 *  </p
 * 
 *  Use these actions to start new game sessions, find existing game sessions, track game session status and other
 *  information, and enable player access to game
 * 
 *  sessions> <ul> <li>
 * 
 *  <b>Discover existing game sessions</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>SearchGameSessions</a> -- Retrieve all available game sessions or search for game sessions that match a set of
 *  criteria.
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <b>Start new game sessions</b>
 * 
 *  </p <ul> <li>
 * 
 *  Start new games with Queues to find the best available hosting resources across multiple regions, minimize player
 *  latency, and balance game session activity for efficiency and cost effectiveness.
 * 
 *  </p <ul> <li>
 * 
 *  <a>StartGameSessionPlacement</a> -- Request a new game session placement and add one or more players to
 * 
 *  it> </li> <li>
 * 
 *  <a>DescribeGameSessionPlacement</a> -- Get details on a placement request, including
 * 
 *  status> </li> <li>
 * 
 *  <a>StopGameSessionPlacement</a> -- Cancel a placement request.
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <a>CreateGameSession</a> -- Start a new game session on a specific fleet. <i>Available in Amazon GameLift Local.</i>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <b>Match players to game sessions with FlexMatch matchmaking</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>StartMatchmaking</a> -- Request matchmaking for one players or a group who want to play together.
 * 
 *  </p </li> <li>
 * 
 *  <a>StartMatchBackfill</a> - Request additional player matches to fill empty slots in an existing game session.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeMatchmaking</a> -- Get details on a matchmaking request, including
 * 
 *  status> </li> <li>
 * 
 *  <a>AcceptMatch</a> -- Register that a player accepts a proposed match, for matches that require player acceptance.
 * 
 *  </p </li> <li>
 * 
 *  <a>StopMatchmaking</a> -- Cancel a matchmaking request.
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <b>Manage game session data</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>DescribeGameSessions</a> -- Retrieve metadata for one or more game sessions, including length of time active and
 *  current player count. <i>Available in Amazon GameLift Local.</i>
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeGameSessionDetails</a> -- Retrieve metadata and the game session protection setting for one or more game
 * 
 *  sessions> </li> <li>
 * 
 *  <a>UpdateGameSession</a> -- Change game session settings, such as maximum player count and join
 * 
 *  policy> </li> <li>
 * 
 *  <a>GetGameSessionLogUrl</a> -- Get the location of saved logs for a game
 * 
 *  session> </li> </ul> </li> <li>
 * 
 *  <b>Manage player sessions</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreatePlayerSession</a> -- Send a request for a player to join a game session. <i>Available in Amazon GameLift
 *  Local.</i>
 * 
 *  </p </li> <li>
 * 
 *  <a>CreatePlayerSessions</a> -- Send a request for multiple players to join a game session. <i>Available in Amazon
 *  GameLift Local.</i>
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribePlayerSessions</a> -- Get details on player activity, including status, playing time, and player data.
 *  <i>Available in Amazon GameLift Local.</i>
 * 
 *  </p </li> </ul> </li> </ul>
 * 
 *  <b>Setting Up and Managing Game Servers</b>
 * 
 *  </p
 * 
 *  When setting up Amazon GameLift resources for your game, you first <a
 *  href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">create a game build</a> and
 *  upload it to Amazon GameLift. You can then use these actions to configure and manage a fleet of resources to run your
 *  game servers, scale capacity to meet player demand, access performance and utilization metrics, and
 * 
 *  more> <ul> <li>
 * 
 *  <b>Manage game builds</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateBuild</a> -- Create a new build using files stored in an Amazon S3 bucket. To create a build and upload files
 *  from a local path, use the AWS CLI command
 * 
 *  <code>upload-build</code>> </li> <li>
 * 
 *  <a>ListBuilds</a> -- Get a list of all builds uploaded to a Amazon GameLift
 * 
 *  region> </li> <li>
 * 
 *  <a>DescribeBuild</a> -- Retrieve information associated with a
 * 
 *  build> </li> <li>
 * 
 *  <a>UpdateBuild</a> -- Change build metadata, including build name and
 * 
 *  version> </li> <li>
 * 
 *  <a>DeleteBuild</a> -- Remove a build from Amazon
 * 
 *  GameLift> </li> </ul> </li> <li>
 * 
 *  <b>Manage fleets</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateFleet</a> -- Configure and activate a new fleet to run a build's game
 * 
 *  servers> </li> <li>
 * 
 *  <a>ListFleets</a> -- Get a list of all fleet IDs in a Amazon GameLift region (all
 * 
 *  statuses)> </li> <li>
 * 
 *  <a>DeleteFleet</a> -- Terminate a fleet that is no longer running game servers or hosting
 * 
 *  players> </li> <li>
 * 
 *  View / update fleet
 * 
 *  configurations> <ul> <li>
 * 
 *  <a>DescribeFleetAttributes</a> / <a>UpdateFleetAttributes</a> -- View or change a fleet's metadata and settings for game
 *  session protection and resource creation
 * 
 *  limits> </li> <li>
 * 
 *  <a>DescribeFleetPortSettings</a> / <a>UpdateFleetPortSettings</a> -- View or change the inbound permissions (IP address
 *  and port setting ranges) allowed for a
 * 
 *  fleet> </li> <li>
 * 
 *  <a>DescribeRuntimeConfiguration</a> / <a>UpdateRuntimeConfiguration</a> -- View or change what server processes (and how
 *  many) to run on each instance in a
 * 
 *  fleet> </li> </ul> </li> </ul> </li> <li>
 * 
 *  <b>Control fleet capacity</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>DescribeEC2InstanceLimits</a> -- Retrieve maximum number of instances allowed for the current AWS account and the
 *  current usage
 * 
 *  level> </li> <li>
 * 
 *  <a>DescribeFleetCapacity</a> / <a>UpdateFleetCapacity</a> -- Retrieve the capacity settings and the current number of
 *  instances in a fleet; adjust fleet capacity settings to scale up or
 * 
 *  down> </li> <li>
 * 
 *  Autoscale -- Manage autoscaling rules and apply them to a
 * 
 *  fleet> <ul> <li>
 * 
 *  <a>PutScalingPolicy</a> -- Create a new autoscaling policy, or update an existing
 * 
 *  one> </li> <li>
 * 
 *  <a>DescribeScalingPolicies</a> -- Retrieve an existing autoscaling
 * 
 *  policy> </li> <li>
 * 
 *  <a>DeleteScalingPolicy</a> -- Delete an autoscaling policy and stop it from affecting a fleet's
 * 
 *  capacity> </li> </ul> </li> </ul> </li> <li>
 * 
 *  <b>Manage VPC peering connections for fleets</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateVpcPeeringAuthorization</a> -- Authorize a peering connection to one of your
 * 
 *  VPCs> </li> <li>
 * 
 *  <a>DescribeVpcPeeringAuthorizations</a> -- Retrieve valid peering connection authorizations.
 * 
 *  </p </li> <li>
 * 
 *  <a>DeleteVpcPeeringAuthorization</a> -- Delete a peering connection
 * 
 *  authorization> </li> <li>
 * 
 *  <a>CreateVpcPeeringConnection</a> -- Establish a peering connection between the VPC for a Amazon GameLift fleet and one
 *  of your
 * 
 *  VPCs> </li> <li>
 * 
 *  <a>DescribeVpcPeeringConnections</a> -- Retrieve information on active or pending VPC peering connections with a Amazon
 *  GameLift
 * 
 *  fleet> </li> <li>
 * 
 *  <a>DeleteVpcPeeringConnection</a> -- Delete a VPC peering connection with a Amazon GameLift
 * 
 *  fleet> </li> </ul> </li> <li>
 * 
 *  <b>Access fleet activity statistics</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>DescribeFleetUtilization</a> -- Get current data on the number of server processes, game sessions, and players
 *  currently active on a
 * 
 *  fleet> </li> <li>
 * 
 *  <a>DescribeFleetEvents</a> -- Get a fleet's logged events for a specified time
 * 
 *  span> </li> <li>
 * 
 *  <a>DescribeGameSessions</a> -- Retrieve metadata associated with one or more game sessions, including length of time
 *  active and current player
 * 
 *  count> </li> </ul> </li> <li>
 * 
 *  <b>Remotely access an instance</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>DescribeInstances</a> -- Get information on each instance in a fleet, including instance ID, IP address, and
 * 
 *  status> </li> <li>
 * 
 *  <a>GetInstanceAccess</a> -- Request access credentials needed to remotely connect to a specified instance in a
 * 
 *  fleet> </li> </ul> </li> <li>
 * 
 *  <b>Manage fleet aliases</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateAlias</a> -- Define a new alias and optionally assign it to a
 * 
 *  fleet> </li> <li>
 * 
 *  <a>ListAliases</a> -- Get all fleet aliases defined in a Amazon GameLift
 * 
 *  region> </li> <li>
 * 
 *  <a>DescribeAlias</a> -- Retrieve information on an existing
 * 
 *  alias> </li> <li>
 * 
 *  <a>UpdateAlias</a> -- Change settings for a alias, such as redirecting it from one fleet to
 * 
 *  another> </li> <li>
 * 
 *  <a>DeleteAlias</a> -- Remove an alias from the
 * 
 *  region> </li> <li>
 * 
 *  <a>ResolveAlias</a> -- Get the fleet ID that a specified alias points
 * 
 *  to> </li> </ul> </li> <li>
 * 
 *  <b>Manage game session queues</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateGameSessionQueue</a> -- Create a queue for processing requests for new game sessions.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeGameSessionQueues</a> -- Retrieve game session queues defined in a Amazon GameLift
 * 
 *  region> </li> <li>
 * 
 *  <a>UpdateGameSessionQueue</a> -- Change the configuration of a game session
 * 
 *  queue> </li> <li>
 * 
 *  <a>DeleteGameSessionQueue</a> -- Remove a game session queue from the
 * 
 *  region> </li> </ul> </li> <li>
 * 
 *  <b>Manage FlexMatch resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateMatchmakingConfiguration</a> -- Create a matchmaking configuration with instructions for building a player
 *  group and placing in a new game session.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeMatchmakingConfigurations</a> -- Retrieve matchmaking configurations defined a Amazon GameLift
 * 
 *  region> </li> <li>
 * 
 *  <a>UpdateMatchmakingConfiguration</a> -- Change settings for matchmaking configuration.
 * 
 *  queue> </li> <li>
 * 
 *  <a>DeleteMatchmakingConfiguration</a> -- Remove a matchmaking configuration from the
 * 
 *  region> </li> <li>
 * 
 *  <a>CreateMatchmakingRuleSet</a> -- Create a set of rules to use when searching for player matches.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeMatchmakingRuleSets</a> -- Retrieve matchmaking rule sets defined in a Amazon GameLift
 * 
 *  region> </li> <li>
 * 
 *  <a>ValidateMatchmakingRuleSet</a> -- Verify syntax for a set of matchmaking rules.
 *
 * \sa GameLiftClient::describeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAliasRequest::DescribeAliasRequest(const DescribeAliasRequest &other)
    : GameLiftRequest(new DescribeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAliasRequest object.
 */
DescribeAliasRequest::DescribeAliasRequest()
    : GameLiftRequest(new DescribeAliasRequestPrivate(GameLiftRequest::DescribeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::DescribeAliasRequestPrivate
 * \brief The DescribeAliasRequestPrivate class provides private implementation for DescribeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a DescribeAliasRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
DescribeAliasRequestPrivate::DescribeAliasRequestPrivate(
    const GameLiftRequest::Action action, DescribeAliasRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAliasRequest
 * class' copy constructor.
 */
DescribeAliasRequestPrivate::DescribeAliasRequestPrivate(
    const DescribeAliasRequestPrivate &other, DescribeAliasRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
