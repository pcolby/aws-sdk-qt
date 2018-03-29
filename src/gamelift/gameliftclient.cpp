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

#include "gameliftclient.h"
#include "gameliftclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace GameLift {

/**
 * @class  GameLiftClient
 *
 * @brief  Client for Amazon GameLift
 *
 * <fullname>Amazon GameLift Service</fullname>
 *
 * Amazon GameLift is a managed service for developers who need a scalable, dedicated server solution for their multiplayer
 * games. Use Amazon GameLift for these tasks: (1) set up computing resources and deploy your game servers, (2) run game
 * sessions and get players into games, (3) automatically scale your resources to meet player demand and manage costs, and
 * (4) track in-depth metrics on game server performance and player
 *
 * usage>
 *
 * The Amazon GameLift service API includes two important function
 *
 * sets> <ul> <li>
 *
 * <b>Manage game sessions and player access</b> -- Retrieve information on available game sessions; create new game
 * sessions; send player requests to join a game
 *
 * session> </li> <li>
 *
 * <b>Configure and manage game server resources</b> -- Manage builds, fleets, queues, and aliases; set autoscaling
 * policies; retrieve logs and
 *
 * metrics> </li> </ul>
 *
 * This reference guide describes the low-level service API for Amazon GameLift. You can use the API functionality with
 * these tools:
 *
 * </p <ul> <li>
 *
 * The Amazon Web Services software development kit (<a href="http://aws.amazon.com/tools/#sdk">AWS SDK</a>) is available
 * in <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-supported.html#gamelift-supported-clients">multiple
 * languages</a> including C++ and C#. Use the SDK to access the API programmatically from an application, such as a game
 *
 * client> </li> <li>
 *
 * The <a href="http://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool is primarily useful for handling
 * administrative actions, such as setting up and managing Amazon GameLift settings and resources. You can use the AWS CLI
 * to manage all of your AWS
 *
 * services> </li> <li>
 *
 * The <a href="https://console.aws.amazon.com/gamelift/home">AWS Management Console</a> for Amazon GameLift provides a web
 * interface to manage your Amazon GameLift settings and resources. The console includes a dashboard for tracking key
 * resources, including builds and fleets, and displays usage and performance metrics for your games as customizable
 *
 * graphs> </li> <li>
 *
 * Amazon GameLift Local is a tool for testing your game's integration with Amazon GameLift before deploying it on the
 * service. This tools supports a subset of key API actions, which can be called from either the AWS CLI or
 * programmatically. See <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/integration-testing-local.html">Testing an
 *
 * Integration</a>> </li> </ul>
 *
 * <b>Learn more</b>
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/"> Developer Guide</a> -- Read about Amazon GameLift
 * features and how to use them.
 *
 * </p </li> <li>
 *
 * <a href="https://gamedev.amazon.com/forums/tutorials">Tutorials</a> -- Get started fast with walkthroughs and sample
 *
 * projects> </li> <li>
 *
 * <a href="http://aws.amazon.com/blogs/gamedev/">GameDev Blog</a> -- Stay up to date with new features and
 *
 * techniques> </li> <li>
 *
 * <a href="https://gamedev.amazon.com/forums/spaces/123/gamelift-discussion.html">GameDev Forums</a> -- Connect with the
 * GameDev
 *
 * community> </li> <li>
 *
 * <a href="http://aws.amazon.com/releasenotes/Amazon-GameLift/">Release notes</a> and <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/doc-history.html">document history</a> -- Stay current
 * with updates to the Amazon GameLift service, SDKs, and documentation.
 *
 * </p </li> </ul>
 *
 * <b>API SUMMARY</b>
 *
 * </p
 *
 * This list offers a functional overview of the Amazon GameLift service
 *
 * API>
 *
 * <b>Managing Games and Players</b>
 *
 * </p
 *
 * Use these actions to start new game sessions, find existing game sessions, track game session status and other
 * information, and enable player access to game
 *
 * sessions> <ul> <li>
 *
 * <b>Discover existing game sessions</b>
 *
 * </p <ul> <li>
 *
 * <a>SearchGameSessions</a> -- Retrieve all available game sessions or search for game sessions that match a set of
 * criteria.
 *
 * </p </li> </ul> </li> <li>
 *
 * <b>Start new game sessions</b>
 *
 * </p <ul> <li>
 *
 * Start new games with Queues to find the best available hosting resources across multiple regions, minimize player
 * latency, and balance game session activity for efficiency and cost effectiveness.
 *
 * </p <ul> <li>
 *
 * <a>StartGameSessionPlacement</a> -- Request a new game session placement and add one or more players to
 *
 * it> </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a> -- Get details on a placement request, including
 *
 * status> </li> <li>
 *
 * <a>StopGameSessionPlacement</a> -- Cancel a placement request.
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>CreateGameSession</a> -- Start a new game session on a specific fleet. <i>Available in Amazon GameLift Local.</i>
 *
 * </p </li> </ul> </li> <li>
 *
 * <b>Match players to game sessions with FlexMatch matchmaking</b>
 *
 * </p <ul> <li>
 *
 * <a>StartMatchmaking</a> -- Request matchmaking for one players or a group who want to play together.
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a> - Request additional player matches to fill empty slots in an existing game session.
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a> -- Get details on a matchmaking request, including
 *
 * status> </li> <li>
 *
 * <a>AcceptMatch</a> -- Register that a player accepts a proposed match, for matches that require player acceptance.
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a> -- Cancel a matchmaking request.
 *
 * </p </li> </ul> </li> <li>
 *
 * <b>Manage game session data</b>
 *
 * </p <ul> <li>
 *
 * <a>DescribeGameSessions</a> -- Retrieve metadata for one or more game sessions, including length of time active and
 * current player count. <i>Available in Amazon GameLift Local.</i>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a> -- Retrieve metadata and the game session protection setting for one or more game
 *
 * sessions> </li> <li>
 *
 * <a>UpdateGameSession</a> -- Change game session settings, such as maximum player count and join
 *
 * policy> </li> <li>
 *
 * <a>GetGameSessionLogUrl</a> -- Get the location of saved logs for a game
 *
 * session> </li> </ul> </li> <li>
 *
 * <b>Manage player sessions</b>
 *
 * </p <ul> <li>
 *
 * <a>CreatePlayerSession</a> -- Send a request for a player to join a game session. <i>Available in Amazon GameLift
 * Local.</i>
 *
 * </p </li> <li>
 *
 * <a>CreatePlayerSessions</a> -- Send a request for multiple players to join a game session. <i>Available in Amazon
 * GameLift Local.</i>
 *
 * </p </li> <li>
 *
 * <a>DescribePlayerSessions</a> -- Get details on player activity, including status, playing time, and player data.
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p </li> </ul> </li> </ul>
 *
 * <b>Setting Up and Managing Game Servers</b>
 *
 * </p
 *
 * When setting up Amazon GameLift resources for your game, you first <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">create a game build</a> and
 * upload it to Amazon GameLift. You can then use these actions to configure and manage a fleet of resources to run your
 * game servers, scale capacity to meet player demand, access performance and utilization metrics, and
 *
 * more> <ul> <li>
 *
 * <b>Manage game builds</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateBuild</a> -- Create a new build using files stored in an Amazon S3 bucket. To create a build and upload files
 * from a local path, use the AWS CLI command
 *
 * <code>upload-build</code>> </li> <li>
 *
 * <a>ListBuilds</a> -- Get a list of all builds uploaded to a Amazon GameLift
 *
 * region> </li> <li>
 *
 * <a>DescribeBuild</a> -- Retrieve information associated with a
 *
 * build> </li> <li>
 *
 * <a>UpdateBuild</a> -- Change build metadata, including build name and
 *
 * version> </li> <li>
 *
 * <a>DeleteBuild</a> -- Remove a build from Amazon
 *
 * GameLift> </li> </ul> </li> <li>
 *
 * <b>Manage fleets</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateFleet</a> -- Configure and activate a new fleet to run a build's game
 *
 * servers> </li> <li>
 *
 * <a>ListFleets</a> -- Get a list of all fleet IDs in a Amazon GameLift region (all
 *
 * statuses)> </li> <li>
 *
 * <a>DeleteFleet</a> -- Terminate a fleet that is no longer running game servers or hosting
 *
 * players> </li> <li>
 *
 * View / update fleet
 *
 * configurations> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a> / <a>UpdateFleetAttributes</a> -- View or change a fleet's metadata and settings for game
 * session protection and resource creation
 *
 * limits> </li> <li>
 *
 * <a>DescribeFleetPortSettings</a> / <a>UpdateFleetPortSettings</a> -- View or change the inbound permissions (IP address
 * and port setting ranges) allowed for a
 *
 * fleet> </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a> / <a>UpdateRuntimeConfiguration</a> -- View or change what server processes (and how
 * many) to run on each instance in a
 *
 * fleet> </li> </ul> </li> </ul> </li> <li>
 *
 * <b>Control fleet capacity</b>
 *
 * </p <ul> <li>
 *
 * <a>DescribeEC2InstanceLimits</a> -- Retrieve maximum number of instances allowed for the current AWS account and the
 * current usage
 *
 * level> </li> <li>
 *
 * <a>DescribeFleetCapacity</a> / <a>UpdateFleetCapacity</a> -- Retrieve the capacity settings and the current number of
 * instances in a fleet; adjust fleet capacity settings to scale up or
 *
 * down> </li> <li>
 *
 * Autoscale -- Manage autoscaling rules and apply them to a
 *
 * fleet> <ul> <li>
 *
 * <a>PutScalingPolicy</a> -- Create a new autoscaling policy, or update an existing
 *
 * one> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> -- Retrieve an existing autoscaling
 *
 * policy> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> -- Delete an autoscaling policy and stop it from affecting a fleet's
 *
 * capacity> </li> </ul> </li> </ul> </li> <li>
 *
 * <b>Manage VPC peering connections for fleets</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a> -- Authorize a peering connection to one of your
 *
 * VPCs> </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a> -- Retrieve valid peering connection authorizations.
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a> -- Delete a peering connection
 *
 * authorization> </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a> -- Establish a peering connection between the VPC for a Amazon GameLift fleet and one
 * of your
 *
 * VPCs> </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a> -- Retrieve information on active or pending VPC peering connections with a Amazon
 * GameLift
 *
 * fleet> </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a> -- Delete a VPC peering connection with a Amazon GameLift
 *
 * fleet> </li> </ul> </li> <li>
 *
 * <b>Access fleet activity statistics</b>
 *
 * </p <ul> <li>
 *
 * <a>DescribeFleetUtilization</a> -- Get current data on the number of server processes, game sessions, and players
 * currently active on a
 *
 * fleet> </li> <li>
 *
 * <a>DescribeFleetEvents</a> -- Get a fleet's logged events for a specified time
 *
 * span> </li> <li>
 *
 * <a>DescribeGameSessions</a> -- Retrieve metadata associated with one or more game sessions, including length of time
 * active and current player
 *
 * count> </li> </ul> </li> <li>
 *
 * <b>Remotely access an instance</b>
 *
 * </p <ul> <li>
 *
 * <a>DescribeInstances</a> -- Get information on each instance in a fleet, including instance ID, IP address, and
 *
 * status> </li> <li>
 *
 * <a>GetInstanceAccess</a> -- Request access credentials needed to remotely connect to a specified instance in a
 *
 * fleet> </li> </ul> </li> <li>
 *
 * <b>Manage fleet aliases</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateAlias</a> -- Define a new alias and optionally assign it to a
 *
 * fleet> </li> <li>
 *
 * <a>ListAliases</a> -- Get all fleet aliases defined in a Amazon GameLift
 *
 * region> </li> <li>
 *
 * <a>DescribeAlias</a> -- Retrieve information on an existing
 *
 * alias> </li> <li>
 *
 * <a>UpdateAlias</a> -- Change settings for a alias, such as redirecting it from one fleet to
 *
 * another> </li> <li>
 *
 * <a>DeleteAlias</a> -- Remove an alias from the
 *
 * region> </li> <li>
 *
 * <a>ResolveAlias</a> -- Get the fleet ID that a specified alias points
 *
 * to> </li> </ul> </li> <li>
 *
 * <b>Manage game session queues</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateGameSessionQueue</a> -- Create a queue for processing requests for new game sessions.
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionQueues</a> -- Retrieve game session queues defined in a Amazon GameLift
 *
 * region> </li> <li>
 *
 * <a>UpdateGameSessionQueue</a> -- Change the configuration of a game session
 *
 * queue> </li> <li>
 *
 * <a>DeleteGameSessionQueue</a> -- Remove a game session queue from the
 *
 * region> </li> </ul> </li> <li>
 *
 * <b>Manage FlexMatch resources</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a> -- Create a matchmaking configuration with instructions for building a player
 * group and placing in a new game session.
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a> -- Retrieve matchmaking configurations defined a Amazon GameLift
 *
 * region> </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a> -- Change settings for matchmaking configuration.
 *
 * queue> </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a> -- Remove a matchmaking configuration from the
 *
 * region> </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a> -- Create a set of rules to use when searching for player matches.
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a> -- Retrieve matchmaking rule sets defined in a Amazon GameLift
 *
 * region> </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a> -- Verify syntax for a set of matchmaking rules.
 */

/**
 * @brief  Constructs a new GameLiftClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
GameLiftClient::GameLiftClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GameLiftClientPrivate(this), parent)
{
    Q_D(GameLiftClient);
    d->apiVersion = QStringLiteral("2015-10-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("gamelift");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon GameLift");
    d->serviceName = QStringLiteral("gamelift");
}

/**
 * @brief  Constructs a new GameLiftClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
GameLiftClient::GameLiftClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GameLiftClientPrivate(this), parent)
{
    Q_D(GameLiftClient);
    d->apiVersion = QStringLiteral("2015-10-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("gamelift");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon GameLift");
    d->serviceName = QStringLiteral("gamelift");
}

/**
 * Registers a player's acceptance or rejection of a proposed FlexMatch match. A matchmaking configuration may require
 * player acceptance; if so, then matches built with that configuration cannot be completed unless all players accept the
 * proposed match within a specified time limit.
 *
 * </p
 *
 * When FlexMatch builds a match, all the matchmaking tickets involved in the proposed match are placed into status
 * <code>REQUIRES_ACCEPTANCE</code>. This is a trigger for your game to get acceptance from all players in the ticket.
 * Acceptances are only valid for tickets when they are in this status; all other acceptances result in an
 *
 * error>
 *
 * To register acceptance, specify the ticket ID, a response, and one or more players. Once all players have registered
 * acceptance, the matchmaking tickets advance to status <code>PLACING</code>, where a new game session is created for the
 * match.
 *
 * </p
 *
 * If any player rejects the match, or if acceptances are not received before a specified timeout, the proposed match is
 * dropped. The matchmaking tickets are then handled in one of two ways: For tickets where all players accepted the match,
 * the ticket status is returned to <code>SEARCHING</code> to find a new match. For tickets where one or more players
 * failed to accept the match, the ticket status is set to <code>FAILED</code>, and processing is terminated. A new
 * matchmaking request for these players can be submitted as needed.
 *
 * </p
 *
 * Matchmaking-related operations
 *
 * include> <ul> <li>
 *
 * <a>StartMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>AcceptMatch</a>
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptMatchResponse * GameLiftClient::acceptMatch(const AcceptMatchRequest &request)
{
    return qobject_cast<AcceptMatchResponse *>(send(request));
}

/**
 * Creates an alias for a fleet. In most situations, you can use an alias ID in place of a fleet ID. By using a fleet alias
 * instead of a specific fleet ID, you can switch gameplay and players to a new fleet without changing your game client or
 * other game components. For example, for games in production, using an alias allows you to seamlessly redirect your
 * player base to a new game server update.
 *
 * </p
 *
 * Amazon GameLift supports two types of routing strategies for aliases: simple and terminal. A simple alias points to an
 * active fleet. A terminal alias is used to display messaging or link to a URL instead of routing players to an active
 * fleet. For example, you might use a terminal alias when a game version is no longer supported and you want to direct
 * players to an upgrade site.
 *
 * </p
 *
 * To create a fleet alias, specify an alias name, routing strategy, and optional description. Each simple alias can point
 * to only one fleet, but a fleet can have multiple aliases. If successful, a new alias record is returned, including an
 * alias ID, which you can reference when creating a game session. You can reassign an alias to another fleet by calling
 *
 * <code>UpdateAlias</code>>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAliasResponse * GameLiftClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/**
 * Creates a new Amazon GameLift build record for your game server binary files and points to the location of your game
 * server build files in an Amazon Simple Storage Service (Amazon S3) location.
 *
 * </p
 *
 * Game server binaries must be combined into a <code>.zip</code> file for use with Amazon GameLift. See <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading Your Game</a> for
 * more information.
 *
 * </p <b>
 *
 * To create new builds quickly and easily, use the AWS CLI command <b> <a
 * href="http://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a> </b>. This helper
 * command uploads your build and creates a new build record in one step, and automatically handles the necessary
 * permissions. See <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html">
 * Upload Build Files to Amazon GameLift</a> for more
 *
 * help> </b>
 *
 * The <code>CreateBuild</code> operation should be used only when you need to manually upload your build files, as in the
 * following
 *
 * scenarios> <ul> <li>
 *
 * Store a build file in an Amazon S3 bucket under your own AWS account. To use this option, you must first give Amazon
 * GameLift access to that Amazon S3 bucket. See <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
 * Create a Build with Files in Amazon S3</a> for detailed help. To create a new build record using files in your Amazon S3
 * bucket, call <code>CreateBuild</code> and specify a build name, operating system, and the storage location of your game
 *
 * build> </li> <li>
 *
 * Upload a build file directly to Amazon GameLift's Amazon S3 account. To use this option, you first call
 * <code>CreateBuild</code> with a build name and operating system. This action creates a new build record and returns an
 * Amazon S3 storage location (bucket and key only) and temporary access credentials. Use the credentials to manually
 * upload your build file to the storage location (see the Amazon S3 topic <a
 * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading Objects</a>). You can upload files
 * to a location only once.
 *
 * </p </li> </ul>
 *
 * If successful, this operation creates a new build record with a unique build ID and places it in
 * <code>INITIALIZED</code> status. You can use <a>DescribeBuild</a> to check the status of your build. A build must be in
 * <code>READY</code> status before it can be used to create
 *
 * fleets>
 *
 * Build-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>ListBuilds</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeBuild</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBuild</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBuildResponse * GameLiftClient::createBuild(const CreateBuildRequest &request)
{
    return qobject_cast<CreateBuildResponse *>(send(request));
}

/**
 * Creates a new fleet to run your game servers. A fleet is a set of Amazon Elastic Compute Cloud (Amazon EC2) instances,
 * each of which can run multiple server processes to host game sessions. You set up a fleet to use instances with certain
 * hardware specifications (see <a href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a> for more
 * information), and deploy your game build to run on each instance.
 *
 * </p
 *
 * To create a new fleet, you must specify the following: (1) a fleet name, (2) the build ID of a successfully uploaded
 * game build, (3) an EC2 instance type, and (4) a run-time configuration, which describes the server processes to run on
 * each instance in the fleet. If you don't specify a fleet type (on-demand or spot), the new fleet uses on-demand
 * instances by
 *
 * default>
 *
 * You can also configure the new fleet with the following
 *
 * settings> <ul> <li>
 *
 * Fleet
 *
 * descriptio> </li> <li>
 *
 * Access permissions for inbound
 *
 * traffi> </li> <li>
 *
 * Fleet-wide game session
 *
 * protectio> </li> <li>
 *
 * Resource usage
 *
 * limit> </li> </ul> <ul> <li>
 *
 * VPC peering connection (see <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
 * Peering with Amazon GameLift
 *
 * Fleets</a>> </li> </ul>
 *
 * If you use Amazon CloudWatch for metrics, you can add the new fleet to a metric group. By adding multiple fleets to a
 * metric group, you can view aggregated metrics for all the fleets in the group.
 *
 * </p
 *
 * If the <code>CreateFleet</code> call is successful, Amazon GameLift performs the following tasks. You can track the
 * process of a fleet by checking the fleet status or by monitoring fleet creation
 *
 * events> <ul> <li>
 *
 * Creates a fleet record. Status:
 *
 * <code>NEW</code>> </li> <li>
 *
 * Begins writing events to the fleet event log, which can be accessed in the Amazon GameLift
 *
 * console>
 *
 * Sets the fleet's target capacity to 1 (desired instances), which triggers Amazon GameLift to start one new EC2
 *
 * instance> </li> <li>
 *
 * Downloads the game build to the new instance and installs it. Statuses: <code>DOWNLOADING</code>,
 * <code>VALIDATING</code>, <code>BUILDING</code>.
 *
 * </p </li> <li>
 *
 * Starts launching server processes on the instance. If the fleet is configured to run multiple server processes per
 * instance, Amazon GameLift staggers each launch by a few seconds. Status:
 *
 * <code>ACTIVATING</code>> </li> <li>
 *
 * Sets the fleet's status to <code>ACTIVE</code> as soon as one server process is ready to host a game
 *
 * session> </li> </ul>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFleetResponse * GameLiftClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/**
 * Creates a multiplayer game session for players. This action creates a game session record and assigns an available
 * server process in the specified fleet to host the game session. A fleet must have an <code>ACTIVE</code> status before a
 * game session can be created in
 *
 * it>
 *
 * To create a game session, specify either fleet ID or alias ID and indicate a maximum number of players to allow in the
 * game session. You can also provide a name and game-specific properties for this game session. If successful, a
 * <a>GameSession</a> object is returned containing the game session properties and other settings you
 *
 * specified>
 *
 * <b>Idempotency tokens.</b> You can add a token that uniquely identifies game session requests. This is useful for
 * ensuring that game session requests are idempotent. Multiple requests with the same idempotency token are processed only
 * once; subsequent requests return the original result. All response values are the same with the exception of game
 * session status, which may
 *
 * change>
 *
 * <b>Resource creation limits.</b> If you are creating a game session on a fleet with a resource creation limit policy in
 * force, then you must specify a creator ID. Without this ID, Amazon GameLift has no way to evaluate the policy for this
 * new game session
 *
 * request>
 *
 * <b>Player acceptance policy.</b> By default, newly created game sessions are open to new players. You can restrict new
 * player access by using <a>UpdateGameSession</a> to change the game session's player session creation
 *
 * policy>
 *
 * <b>Game session logs.</b> Logs are retained for all active game sessions for 14 days. To access the logs, call
 * <a>GetGameSessionLogUrl</a> to download the log
 *
 * files>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGameSessionResponse * GameLiftClient::createGameSession(const CreateGameSessionRequest &request)
{
    return qobject_cast<CreateGameSessionResponse *>(send(request));
}

/**
 * Establishes a new queue for processing requests to place new game sessions. A queue identifies where new game sessions
 * can be hosted -- by specifying a list of destinations (fleets or aliases) -- and how long requests can wait in the queue
 * before timing out. You can set up a queue to try to place game sessions on fleets in multiple regions. To add placement
 * requests to a queue, call <a>StartGameSessionPlacement</a> and reference the queue
 *
 * name>
 *
 * <b>Destination order.</b> When processing a request for a game session, Amazon GameLift tries each destination in order
 * until it finds one with available resources to host the new game session. A queue's default order is determined by how
 * destinations are listed. The default order is overridden when a game session placement request provides player latency
 * information. Player latency information enables Amazon GameLift to prioritize destinations where players report the
 * lowest average latency, as a result placing the new game session where the majority of players will have the best
 * possible gameplay
 *
 * experience>
 *
 * <b>Player latency policies.</b> For placement requests containing player latency information, use player latency
 * policies to protect individual players from very high latencies. With a latency cap, even when a destination can deliver
 * a low latency for most players, the game is not placed where any individual player is reporting latency higher than a
 * policy's maximum. A queue can have multiple latency policies, which are enforced consecutively starting with the policy
 * with the lowest latency cap. Use multiple policies to gradually relax latency controls; for example, you might set a
 * policy with a low latency cap for the first 60 seconds, a second policy with a higher cap for the next 60 seconds, etc.
 *
 * </p
 *
 * To create a new queue, provide a name, timeout value, a list of destinations and, if desired, a set of latency policies.
 * If successful, a new queue object is
 *
 * returned>
 *
 * Queue-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionQueues</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteGameSessionQueue</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGameSessionQueueResponse * GameLiftClient::createGameSessionQueue(const CreateGameSessionQueueRequest &request)
{
    return qobject_cast<CreateGameSessionQueueResponse *>(send(request));
}

/**
 * Defines a new matchmaking configuration for use with FlexMatch. A matchmaking configuration sets out guidelines for
 * matching players and getting the matches into games. You can set up multiple matchmaking configurations to handle the
 * scenarios needed for your game. Each matchmaking ticket (<a>StartMatchmaking</a> or <a>StartMatchBackfill</a>) specifies
 * a configuration for the match and provides player attributes to support the configuration being used.
 *
 * </p
 *
 * To create a matchmaking configuration, at a minimum you must specify the following: configuration name; a rule set that
 * governs how to evaluate players and find acceptable matches; a game session queue to use when placing a new game session
 * for the match; and the maximum time allowed for a matchmaking
 *
 * attempt>
 *
 * <b>Player acceptance</b> -- In each configuration, you have the option to require that all players accept participation
 * in a proposed match. To enable this feature, set <i>AcceptanceRequired</i> to true and specify a time limit for player
 * acceptance. Players have the option to accept or reject a proposed match, and a match does not move ahead to game
 * session placement unless all matched players accept.
 *
 * </p
 *
 * <b>Matchmaking status notification</b> -- There are two ways to track the progress of matchmaking tickets: (1) polling
 * ticket status with <a>DescribeMatchmaking</a>; or (2) receiving notifications with Amazon Simple Notification Service
 * (SNS). To use notifications, you first need to set up an SNS topic to receive the notifications, and provide the topic
 * ARN in the matchmaking configuration (see <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/match-notification.html"> Setting up Notifications for
 * Matchmaking</a>). Since notifications promise only "best effort" delivery, we recommend calling
 * <code>DescribeMatchmaking</code> if no notifications are received within 30
 *
 * seconds>
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMatchmakingConfigurationResponse * GameLiftClient::createMatchmakingConfiguration(const CreateMatchmakingConfigurationRequest &request)
{
    return qobject_cast<CreateMatchmakingConfigurationResponse *>(send(request));
}

/**
 * Creates a new rule set for FlexMatch matchmaking. A rule set describes the type of match to create, such as the number
 * and size of teams, and sets the parameters for acceptable player matches, such as minimum skill level or character type.
 * Rule sets are used in matchmaking configurations, which define how matchmaking requests are handled. Each
 * <a>MatchmakingConfiguration</a> uses one rule set; you can set up multiple rule sets to handle the scenarios that suit
 * your game (such as for different game modes), and create a separate matchmaking configuration for each rule set. See
 * additional information on rule set content in the <a>MatchmakingRuleSet</a> structure. For help creating rule sets,
 * including useful examples, see the topic <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/match-intro.html"> Adding FlexMatch to Your
 *
 * Game</a>>
 *
 * Once created, matchmaking rule sets cannot be changed or deleted, so we recommend checking the rule set syntax using
 * <a>ValidateMatchmakingRuleSet</a> before creating the rule
 *
 * set>
 *
 * To create a matchmaking rule set, provide the set of rules and a unique name. Rule sets must be defined in the same
 * region as the matchmaking configuration they will be used with. Rule sets cannot be edited or deleted. If you need to
 * change a rule set, create a new one with the necessary edits and then update matchmaking configurations to use the new
 * rule
 *
 * set>
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMatchmakingRuleSetResponse * GameLiftClient::createMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest &request)
{
    return qobject_cast<CreateMatchmakingRuleSetResponse *>(send(request));
}

/**
 * Adds a player to a game session and creates a player session record. Before a player can be added, a game session must
 * have an <code>ACTIVE</code> status, have a creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To
 * add a group of players to a game session, use
 *
 * <a>CreatePlayerSessions</a>>
 *
 * To create a player session, specify a game session ID, player ID, and optionally a string of player data. If successful,
 * the player is added to the game session and a new <a>PlayerSession</a> object is returned. Player sessions cannot be
 * updated.
 *
 * </p
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * Player-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreatePlayerSession</a>
 *
 * </p </li> <li>
 *
 * <a>CreatePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePlayerSessionResponse * GameLiftClient::createPlayerSession(const CreatePlayerSessionRequest &request)
{
    return qobject_cast<CreatePlayerSessionResponse *>(send(request));
}

/**
 * Adds a group of players to a game session. This action is useful with a team matching feature. Before players can be
 * added, a game session must have an <code>ACTIVE</code> status, have a creation policy of <code>ALLOW_ALL</code>, and
 * have an open player slot. To add a single player to a game session, use
 *
 * <a>CreatePlayerSession</a>>
 *
 * To create player sessions, specify a game session ID, a list of player IDs, and optionally a set of player data strings.
 * If successful, the players are added to the game session and a set of new <a>PlayerSession</a> objects is returned.
 * Player sessions cannot be
 *
 * updated>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * Player-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreatePlayerSession</a>
 *
 * </p </li> <li>
 *
 * <a>CreatePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePlayerSessionsResponse * GameLiftClient::createPlayerSessions(const CreatePlayerSessionsRequest &request)
{
    return qobject_cast<CreatePlayerSessionsResponse *>(send(request));
}

/**
 * Requests authorization to create or delete a peer connection between the VPC for your Amazon GameLift fleet and a
 * virtual private cloud (VPC) in your AWS account. VPC peering enables the game servers on your fleet to communicate
 * directly with other AWS resources. Once you've received authorization, call <a>CreateVpcPeeringConnection</a> to
 * establish the peering connection. For more information, see <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC Peering with Amazon GameLift
 *
 * Fleets</a>>
 *
 * You can peer with VPCs that are owned by any AWS account you have access to, including the account that you use to
 * manage your Amazon GameLift fleets. You cannot peer with VPCs that are in different
 *
 * regions>
 *
 * To request authorization to create a connection, call this operation from the AWS account with the VPC that you want to
 * peer to your Amazon GameLift fleet. For example, to enable your game servers to retrieve data from a DynamoDB table, use
 * the account that manages that DynamoDB resource. Identify the following values: (1) The ID of the VPC that you want to
 * peer with, and (2) the ID of the AWS account that you use to manage Amazon GameLift. If successful, VPC peering is
 * authorized for the specified VPC.
 *
 * </p
 *
 * To request authorization to delete a connection, call this operation from the AWS account with the VPC that is peered
 * with your Amazon GameLift fleet. Identify the following values: (1) VPC ID that you want to delete the peering
 * connection for, and (2) ID of the AWS account that you use to manage Amazon GameLift.
 *
 * </p
 *
 * The authorization remains valid for 24 hours unless it is canceled by a call to <a>DeleteVpcPeeringAuthorization</a>.
 * You must create or delete the peering connection while the authorization is valid.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateVpcPeeringAuthorizationResponse * GameLiftClient::createVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest &request)
{
    return qobject_cast<CreateVpcPeeringAuthorizationResponse *>(send(request));
}

/**
 * Establishes a VPC peering connection between a virtual private cloud (VPC) in an AWS account with the VPC for your
 * Amazon GameLift fleet. VPC peering enables the game servers on your fleet to communicate directly with other AWS
 * resources. You can peer with VPCs in any AWS account that you have access to, including the account that you use to
 * manage your Amazon GameLift fleets. You cannot peer with VPCs that are in different regions. For more information, see
 * <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC Peering with Amazon GameLift
 *
 * Fleets</a>>
 *
 * Before calling this operation to establish the peering connection, you first need to call
 * <a>CreateVpcPeeringAuthorization</a> and identify the VPC you want to peer with. Once the authorization for the
 * specified VPC is issued, you have 24 hours to establish the connection. These two operations handle all tasks necessary
 * to peer the two VPCs, including acceptance, updating routing tables, etc.
 *
 * </p
 *
 * To establish the connection, call this operation from the AWS account that is used to manage the Amazon GameLift fleets.
 * Identify the following values: (1) The ID of the fleet you want to be enable a VPC peering connection for; (2) The AWS
 * account with the VPC that you want to peer with; and (3) The ID of the VPC you want to peer with. This operation is
 * asynchronous. If successful, a <a>VpcPeeringConnection</a> request is created. You can use continuous polling to track
 * the request's status using <a>DescribeVpcPeeringConnections</a>, or by monitoring fleet events for success or failure
 * using <a>DescribeFleetEvents</a>.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateVpcPeeringConnectionResponse * GameLiftClient::createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request)
{
    return qobject_cast<CreateVpcPeeringConnectionResponse *>(send(request));
}

/**
 * Deletes an alias. This action removes all record of the alias. Game clients attempting to access a server process using
 * the deleted alias receive an error. To delete an alias, specify the alias ID to be
 *
 * deleted>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAliasResponse * GameLiftClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/**
 * Deletes a build. This action permanently deletes the build record and any uploaded build
 *
 * files>
 *
 * To delete a build, specify its ID. Deleting a build does not affect the status of any active fleets using the build, but
 * you can no longer create new fleets with the deleted
 *
 * build>
 *
 * Build-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>ListBuilds</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeBuild</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBuild</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBuildResponse * GameLiftClient::deleteBuild(const DeleteBuildRequest &request)
{
    return qobject_cast<DeleteBuildResponse *>(send(request));
}

/**
 * Deletes everything related to a fleet. Before deleting a fleet, you must set the fleet's desired capacity to zero. See
 *
 * <a>UpdateFleetCapacity</a>>
 *
 * This action removes the fleet's resources and the fleet record. Once a fleet is deleted, you can no longer use that
 *
 * fleet>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFleetResponse * GameLiftClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/**
 * Deletes a game session queue. This action means that any <a>StartGameSessionPlacement</a> requests that reference this
 * queue will fail. To delete a queue, specify the queue
 *
 * name>
 *
 * Queue-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionQueues</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteGameSessionQueue</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGameSessionQueueResponse * GameLiftClient::deleteGameSessionQueue(const DeleteGameSessionQueueRequest &request)
{
    return qobject_cast<DeleteGameSessionQueueResponse *>(send(request));
}

/**
 * Permanently removes a FlexMatch matchmaking configuration. To delete, specify the configuration name. A matchmaking
 * configuration cannot be deleted if it is being used in any active matchmaking
 *
 * tickets>
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMatchmakingConfigurationResponse * GameLiftClient::deleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest &request)
{
    return qobject_cast<DeleteMatchmakingConfigurationResponse *>(send(request));
}

/**
 * Deletes a fleet scaling policy. This action means that the policy is no longer in force and removes all record of it. To
 * delete a scaling policy, specify both the scaling policy name and the fleet ID it is associated
 *
 * with>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteScalingPolicyResponse * GameLiftClient::deleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    return qobject_cast<DeleteScalingPolicyResponse *>(send(request));
}

/**
 * Cancels a pending VPC peering authorization for the specified VPC. If the authorization has already been used to create
 * a peering connection, call <a>DeleteVpcPeeringConnection</a> to remove the connection.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVpcPeeringAuthorizationResponse * GameLiftClient::deleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest &request)
{
    return qobject_cast<DeleteVpcPeeringAuthorizationResponse *>(send(request));
}

/**
 * Removes a VPC peering connection. To delete the connection, you must have a valid authorization for the VPC peering
 * connection that you want to delete. You can check for an authorization by calling
 * <a>DescribeVpcPeeringAuthorizations</a> or request a new one using <a>CreateVpcPeeringAuthorization</a>.
 *
 * </p
 *
 * Once a valid authorization exists, call this operation from the AWS account that is used to manage the Amazon GameLift
 * fleets. Identify the connection to delete by the connection ID and fleet ID. If successful, the connection is removed.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVpcPeeringConnectionResponse * GameLiftClient::deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request)
{
    return qobject_cast<DeleteVpcPeeringConnectionResponse *>(send(request));
}

/**
 * Retrieves properties for an alias. This operation returns all alias metadata and settings. To get an alias's target
 * fleet ID only, use <code>ResolveAlias</code>.
 *
 * </p
 *
 * To get alias properties, specify the alias ID. If successful, the requested alias record is
 *
 * returned>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAliasResponse * GameLiftClient::describeAlias(const DescribeAliasRequest &request)
{
    return qobject_cast<DescribeAliasResponse *>(send(request));
}

/**
 * Retrieves properties for a build. To request a build record, specify a build ID. If successful, an object containing the
 * build properties is
 *
 * returned>
 *
 * Build-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>ListBuilds</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeBuild</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBuild</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeBuildResponse * GameLiftClient::describeBuild(const DescribeBuildRequest &request)
{
    return qobject_cast<DescribeBuildResponse *>(send(request));
}

/**
 * Retrieves the following information for the specified EC2 instance
 *
 * type> <ul> <li>
 *
 * maximum number of instances allowed per AWS account (service
 *
 * limit> </li> <li>
 *
 * current usage level for the AWS
 *
 * accoun> </li> </ul>
 *
 * Service limits vary depending on region. Available regions for Amazon GameLift can be found in the AWS Management
 * Console for Amazon GameLift (see the drop-down list in the upper right
 *
 * corner)>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEC2InstanceLimitsResponse * GameLiftClient::describeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest &request)
{
    return qobject_cast<DescribeEC2InstanceLimitsResponse *>(send(request));
}

/**
 * Retrieves fleet properties, including metadata, status, and configuration, for one or more fleets. You can request
 * attributes for all fleets, or specify a list of one or more fleet IDs. When requesting multiple fleets, use the
 * pagination parameters to retrieve results as a set of sequential pages. If successful, a <a>FleetAttributes</a> object
 * is returned for each requested fleet ID. When specifying a list of fleet IDs, attribute objects are returned only for
 * fleets that currently exist.
 *
 * </p <note>
 *
 * Some API actions may limit the number of fleet IDs allowed in one request. If a request exceeds this limit, the request
 * fails and the error message includes the maximum
 *
 * allowed> </note>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetAttributesResponse * GameLiftClient::describeFleetAttributes(const DescribeFleetAttributesRequest &request)
{
    return qobject_cast<DescribeFleetAttributesResponse *>(send(request));
}

/**
 * Retrieves the current status of fleet capacity for one or more fleets. This information includes the number of instances
 * that have been requested for the fleet and the number currently active. You can request capacity for all fleets, or
 * specify a list of one or more fleet IDs. When requesting multiple fleets, use the pagination parameters to retrieve
 * results as a set of sequential pages. If successful, a <a>FleetCapacity</a> object is returned for each requested fleet
 * ID. When specifying a list of fleet IDs, attribute objects are returned only for fleets that currently exist.
 *
 * </p <note>
 *
 * Some API actions may limit the number of fleet IDs allowed in one request. If a request exceeds this limit, the request
 * fails and the error message includes the maximum
 *
 * allowed> </note>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetCapacityResponse * GameLiftClient::describeFleetCapacity(const DescribeFleetCapacityRequest &request)
{
    return qobject_cast<DescribeFleetCapacityResponse *>(send(request));
}

/**
 * Retrieves entries from the specified fleet's event log. You can specify a time range to limit the result set. Use the
 * pagination parameters to retrieve results as a set of sequential pages. If successful, a collection of event log entries
 * matching the request are
 *
 * returned>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetEventsResponse * GameLiftClient::describeFleetEvents(const DescribeFleetEventsRequest &request)
{
    return qobject_cast<DescribeFleetEventsResponse *>(send(request));
}

/**
 * Retrieves the inbound connection permissions for a fleet. Connection permissions include a range of IP addresses and
 * port settings that incoming traffic can use to access server processes in the fleet. To get a fleet's inbound connection
 * permissions, specify a fleet ID. If successful, a collection of <a>IpPermission</a> objects is returned for the
 * requested fleet ID. If the requested fleet has been deleted, the result set is
 *
 * empty>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetPortSettingsResponse * GameLiftClient::describeFleetPortSettings(const DescribeFleetPortSettingsRequest &request)
{
    return qobject_cast<DescribeFleetPortSettingsResponse *>(send(request));
}

/**
 * Retrieves utilization statistics for one or more fleets. You can request utilization data for all fleets, or specify a
 * list of one or more fleet IDs. When requesting multiple fleets, use the pagination parameters to retrieve results as a
 * set of sequential pages. If successful, a <a>FleetUtilization</a> object is returned for each requested fleet ID. When
 * specifying a list of fleet IDs, utilization objects are returned only for fleets that currently exist.
 *
 * </p <note>
 *
 * Some API actions may limit the number of fleet IDs allowed in one request. If a request exceeds this limit, the request
 * fails and the error message includes the maximum
 *
 * allowed> </note>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetUtilizationResponse * GameLiftClient::describeFleetUtilization(const DescribeFleetUtilizationRequest &request)
{
    return qobject_cast<DescribeFleetUtilizationResponse *>(send(request));
}

/**
 * Retrieves properties, including the protection policy in force, for one or more game sessions. This action can be used
 * in several ways: (1) provide a <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for a
 * specific game session; (2) provide either a <code>FleetId</code> or an <code>AliasId</code> to request properties for
 * all game sessions running on a fleet.
 *
 * </p
 *
 * To get game session record(s), specify just one of the following: game session ID, fleet ID, or alias ID. You can filter
 * this request by game session status. Use the pagination parameters to retrieve results as a set of sequential pages. If
 * successful, a <a>GameSessionDetail</a> object is returned for each session matching the
 *
 * request>
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeGameSessionDetailsResponse * GameLiftClient::describeGameSessionDetails(const DescribeGameSessionDetailsRequest &request)
{
    return qobject_cast<DescribeGameSessionDetailsResponse *>(send(request));
}

/**
 * Retrieves properties and current status of a game session placement request. To get game session placement details,
 * specify the placement ID. If successful, a <a>GameSessionPlacement</a> object is
 *
 * returned>
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeGameSessionPlacementResponse * GameLiftClient::describeGameSessionPlacement(const DescribeGameSessionPlacementRequest &request)
{
    return qobject_cast<DescribeGameSessionPlacementResponse *>(send(request));
}

/**
 * Retrieves the properties for one or more game session queues. When requesting multiple queues, use the pagination
 * parameters to retrieve results as a set of sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
 * for each requested queue. When specifying a list of queues, objects are returned only for queues that currently exist in
 * the
 *
 * region>
 *
 * Queue-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionQueues</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteGameSessionQueue</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeGameSessionQueuesResponse * GameLiftClient::describeGameSessionQueues(const DescribeGameSessionQueuesRequest &request)
{
    return qobject_cast<DescribeGameSessionQueuesResponse *>(send(request));
}

/**
 * Retrieves a set of one or more game sessions. Request a specific game session or request all game sessions on a fleet.
 * Alternatively, use <a>SearchGameSessions</a> to request a set of active game sessions that are filtered by certain
 * criteria. To retrieve protection policy settings for game sessions, use
 *
 * <a>DescribeGameSessionDetails</a>>
 *
 * To get game sessions, specify one of the following: game session ID, fleet ID, or alias ID. You can filter this request
 * by game session status. Use the pagination parameters to retrieve results as a set of sequential pages. If successful, a
 * <a>GameSession</a> object is returned for each game session matching the
 *
 * request>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeGameSessionsResponse * GameLiftClient::describeGameSessions(const DescribeGameSessionsRequest &request)
{
    return qobject_cast<DescribeGameSessionsResponse *>(send(request));
}

/**
 * Retrieves information about a fleet's instances, including instance IDs. Use this action to get details on all instances
 * in the fleet or get details on one specific
 *
 * instance>
 *
 * To get a specific instance, specify fleet ID and instance ID. To get all instances in a fleet, specify a fleet ID only.
 * Use the pagination parameters to retrieve results as a set of sequential pages. If successful, an <a>Instance</a> object
 * is returned for each
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInstancesResponse * GameLiftClient::describeInstances(const DescribeInstancesRequest &request)
{
    return qobject_cast<DescribeInstancesResponse *>(send(request));
}

/**
 * Retrieves one or more matchmaking tickets. Use this operation to retrieve ticket information, including status and--once
 * a successful match is made--acquire connection information for the resulting new game session.
 *
 * </p
 *
 * You can use this operation to track the progress of matchmaking requests (through polling) as an alternative to using
 * event notifications. See more details on tracking matchmaking requests through polling or notifications in
 * <a>StartMatchmaking</a>.
 *
 * </p
 *
 * To request matchmaking tickets, provide a list of up to 10 ticket IDs. If the request is successful, a ticket object is
 * returned for each requested ID that currently
 *
 * exists>
 *
 * Matchmaking-related operations
 *
 * include> <ul> <li>
 *
 * <a>StartMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>AcceptMatch</a>
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMatchmakingResponse * GameLiftClient::describeMatchmaking(const DescribeMatchmakingRequest &request)
{
    return qobject_cast<DescribeMatchmakingResponse *>(send(request));
}

/**
 * Retrieves the details of FlexMatch matchmaking configurations. with this operation, you have the following options: (1)
 * retrieve all existing configurations, (2) provide the names of one or more configurations to retrieve, or (3) retrieve
 * all configurations that use a specified rule set name. When requesting multiple items, use the pagination parameters to
 * retrieve results as a set of sequential pages. If successful, a configuration is returned for each requested name. When
 * specifying a list of names, only configurations that currently exist are returned.
 *
 * </p
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMatchmakingConfigurationsResponse * GameLiftClient::describeMatchmakingConfigurations(const DescribeMatchmakingConfigurationsRequest &request)
{
    return qobject_cast<DescribeMatchmakingConfigurationsResponse *>(send(request));
}

/**
 * Retrieves the details for FlexMatch matchmaking rule sets. You can request all existing rule sets for the region, or
 * provide a list of one or more rule set names. When requesting multiple items, use the pagination parameters to retrieve
 * results as a set of sequential pages. If successful, a rule set is returned for each requested name.
 *
 * </p
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMatchmakingRuleSetsResponse * GameLiftClient::describeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest &request)
{
    return qobject_cast<DescribeMatchmakingRuleSetsResponse *>(send(request));
}

/**
 * Retrieves properties for one or more player sessions. This action can be used in several ways: (1) provide a
 * <code>PlayerSessionId</code> to request properties for a specific player session; (2) provide a
 * <code>GameSessionId</code> to request properties for all player sessions in the specified game session; (3) provide a
 * <code>PlayerId</code> to request properties for all player sessions of a specified player.
 *
 * </p
 *
 * To get game session record(s), specify only one of the following: a player session ID, a game session ID, or a player
 * ID. You can filter this request by player session status. Use the pagination parameters to retrieve results as a set of
 * sequential pages. If successful, a <a>PlayerSession</a> object is returned for each session matching the
 *
 * request>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * Player-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreatePlayerSession</a>
 *
 * </p </li> <li>
 *
 * <a>CreatePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribePlayerSessions</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePlayerSessionsResponse * GameLiftClient::describePlayerSessions(const DescribePlayerSessionsRequest &request)
{
    return qobject_cast<DescribePlayerSessionsResponse *>(send(request));
}

/**
 * Retrieves the current run-time configuration for the specified fleet. The run-time configuration tells Amazon GameLift
 * how to launch server processes on instances in the
 *
 * fleet>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRuntimeConfigurationResponse * GameLiftClient::describeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest &request)
{
    return qobject_cast<DescribeRuntimeConfigurationResponse *>(send(request));
}

/**
 * Retrieves all scaling policies applied to a
 *
 * fleet>
 *
 * To get a fleet's scaling policies, specify the fleet ID. You can filter this request by policy status, such as to
 * retrieve only active scaling policies. Use the pagination parameters to retrieve results as a set of sequential pages.
 * If successful, set of <a>ScalingPolicy</a> objects is returned for the
 *
 * fleet>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingPoliciesResponse * GameLiftClient::describeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    return qobject_cast<DescribeScalingPoliciesResponse *>(send(request));
}

/**
 * Retrieves valid VPC peering authorizations that are pending for the AWS account. This operation returns all VPC peering
 * authorizations and requests for peering. This includes those initiated and received by this account.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeVpcPeeringAuthorizationsResponse * GameLiftClient::describeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest &request)
{
    return qobject_cast<DescribeVpcPeeringAuthorizationsResponse *>(send(request));
}

/**
 * Retrieves information on VPC peering connections. Use this operation to get peering information for all fleets or for
 * one specific fleet ID.
 *
 * </p
 *
 * To retrieve connection information, call this operation from the AWS account that is used to manage the Amazon GameLift
 * fleets. Specify a fleet ID or leave the parameter empty to retrieve all connection records. If successful, the retrieved
 * information includes both active and pending connections. Active connections identify the IpV4 CIDR block that the VPC
 * uses to connect.
 *
 * </p
 *
 * VPC peering connection operations
 *
 * include> <ul> <li>
 *
 * <a>CreateVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringAuthorizations</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringAuthorization</a>
 *
 * </p </li> <li>
 *
 * <a>CreateVpcPeeringConnection</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeVpcPeeringConnections</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteVpcPeeringConnection</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeVpcPeeringConnectionsResponse * GameLiftClient::describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request)
{
    return qobject_cast<DescribeVpcPeeringConnectionsResponse *>(send(request));
}

/**
 * Retrieves the location of stored game session logs for a specified game session. When a game session is terminated,
 * Amazon GameLift automatically stores the logs in Amazon S3 and retains them for 14 days. Use this URL to download the
 *
 * logs> <note>
 *
 * See the <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS Service
 * Limits</a> page for maximum log file sizes. Log files that exceed this limit are not
 *
 * saved> </note>
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGameSessionLogUrlResponse * GameLiftClient::getGameSessionLogUrl(const GetGameSessionLogUrlRequest &request)
{
    return qobject_cast<GetGameSessionLogUrlResponse *>(send(request));
}

/**
 * Requests remote access to a fleet instance. Remote access is useful for debugging, gathering benchmarking data, or
 * watching activity in real time.
 *
 * </p
 *
 * Access requires credentials that match the operating system of the instance. For a Windows instance, Amazon GameLift
 * returns a user name and password as strings for use with a Windows Remote Desktop client. For a Linux instance, Amazon
 * GameLift returns a user name and RSA private key, also as strings, for use with an SSH client. The private key must be
 * saved in the proper format to a <code>.pem</code> file before using. If you're making this request using the AWS CLI,
 * saving the secret can be handled as part of the GetInstanceAccess request. (See the example later in this topic). For
 * more information on remote access, see <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely Accessing an
 *
 * Instance</a>>
 *
 * To request access to a specific instance, specify the IDs of the instance and the fleet it belongs to. If successful, an
 * <a>InstanceAccess</a> object is returned containing the instance's IP address and a set of
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceAccessResponse * GameLiftClient::getInstanceAccess(const GetInstanceAccessRequest &request)
{
    return qobject_cast<GetInstanceAccessResponse *>(send(request));
}

/**
 * Retrieves all aliases for this AWS account. You can filter the result set by alias name and/or routing strategy type.
 * Use the pagination parameters to retrieve results in sequential
 *
 * pages> <note>
 *
 * Returned aliases are not listed in any particular
 *
 * order> </note>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAliasesResponse * GameLiftClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/**
 * Retrieves build records for all builds associated with the AWS account in use. You can limit results to builds that are
 * in a specific status by using the <code>Status</code> parameter. Use the pagination parameters to retrieve results in a
 * set of sequential pages.
 *
 * </p <note>
 *
 * Build records are not listed in any particular
 *
 * order> </note>
 *
 * Build-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>ListBuilds</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeBuild</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBuild</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBuildsResponse * GameLiftClient::listBuilds(const ListBuildsRequest &request)
{
    return qobject_cast<ListBuildsResponse *>(send(request));
}

/**
 * Retrieves a collection of fleet records for this AWS account. You can filter the result set by build ID. Use the
 * pagination parameters to retrieve results in sequential
 *
 * pages> <note>
 *
 * Fleet records are not listed in any particular
 *
 * order> </note>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFleetsResponse * GameLiftClient::listFleets(const ListFleetsRequest &request)
{
    return qobject_cast<ListFleetsResponse *>(send(request));
}

/**
 * Creates or updates a scaling policy for a fleet. An active scaling policy prompts Amazon GameLift to track a certain
 * metric for a fleet and automatically change the fleet's capacity in specific circumstances. Each scaling policy contains
 * one rule statement. Fleets can have multiple scaling policies in force
 *
 * simultaneously>
 *
 * A scaling policy rule statement has the following
 *
 * structure>
 *
 * If <code>[MetricName]</code> is <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
 * <code>[EvaluationPeriods]</code> minutes, then <code>[ScalingAdjustmentType]</code> to/by
 *
 * <code>[ScalingAdjustment]</code>>
 *
 * For example, this policy: "If the number of idle instances exceeds 20 for more than 15 minutes, then reduce the fleet
 * capacity by 10 instances" could be implemented as the following rule
 *
 * statement>
 *
 * If [IdleInstances] is [GreaterThanOrEqualToThreshold] [20] for [15] minutes, then [ChangeInCapacity] by
 *
 * [-10]>
 *
 * To create or update a scaling policy, specify a unique combination of name and fleet ID, and set the rule values. All
 * parameters for this action are required. If successful, the policy name is returned. Scaling policies cannot be
 * suspended or made inactive. To stop enforcing a scaling policy, call
 *
 * <a>DeleteScalingPolicy</a>>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutScalingPolicyResponse * GameLiftClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/**
 * Retrieves a fresh set of credentials for use when uploading a new set of game build files to Amazon GameLift's Amazon
 * S3. This is done as part of the build creation process; see
 *
 * <a>CreateBuild</a>>
 *
 * To request new credentials, specify the build ID as returned with an initial <code>CreateBuild</code> request. If
 * successful, a new set of credentials are returned, along with the S3 storage location associated with the build
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RequestUploadCredentialsResponse * GameLiftClient::requestUploadCredentials(const RequestUploadCredentialsRequest &request)
{
    return qobject_cast<RequestUploadCredentialsResponse *>(send(request));
}

/**
 * Retrieves the fleet ID that a specified alias is currently pointing
 *
 * to>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResolveAliasResponse * GameLiftClient::resolveAlias(const ResolveAliasRequest &request)
{
    return qobject_cast<ResolveAliasResponse *>(send(request));
}

/**
 * Retrieves all active game sessions that match a set of search criteria and sorts them in a specified order. You can
 * search or sort by the following game session
 *
 * attributes> <ul> <li>
 *
 * <b>gameSessionId</b> -- Unique identifier for the game session. You can use either a <code>GameSessionId</code> or
 * <code>GameSessionArn</code> value.
 *
 * </p </li> <li>
 *
 * <b>gameSessionName</b> -- Name assigned to a game session. This value is set when requesting a new game session with
 * <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>. Game session names do not need to be unique to a
 * game
 *
 * session> </li> <li>
 *
 * <b>gameSessionProperties</b> -- Custom data defined in a game session's <code>GameProperty</code> parameter.
 * <code>GameProperty</code> values are stored as key:value pairs; the filter expression must indicate the key and a string
 * to search the data values for. For example, to search for game sessions with custom data containing the key:value pair
 * "gameMode:brawl", specify the following: gameSessionProperties.gameMode = "brawl". All custom data values are searched
 * as
 *
 * strings> </li> <li>
 *
 * <b>maximumSessions</b> -- Maximum number of player sessions allowed for a game session. This value is set when
 * requesting a new game session with <a>CreateGameSession</a> or updating with
 *
 * <a>UpdateGameSession</a>> </li> <li>
 *
 * <b>creationTimeMillis</b> -- Value indicating when a game session was created. It is expressed in Unix time as
 *
 * milliseconds> </li> <li>
 *
 * <b>playerSessionCount</b> -- Number of players currently connected to a game session. This value changes rapidly as
 * players join the session or drop
 *
 * out> </li> <li>
 *
 * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether a game session has reached its maximum number of
 * players. It is highly recommended that all search requests include this filter attribute to optimize search performance
 * and return only sessions that players can join.
 *
 * </p </li> </ul> <note>
 *
 * Returned values for <code>playerSessionCount</code> and <code>hasAvailablePlayerSessions</code> change quickly as
 * players join sessions and others drop out. Results should be considered a snapshot in time. Be sure to refresh search
 * results often, and handle sessions that fill up before a player can join.
 *
 * </p </note>
 *
 * To search or sort, specify either a fleet ID or an alias ID, and provide a search filter expression, a sort expression,
 * or both. If successful, a collection of <a>GameSession</a> objects matching the request is returned. Use the pagination
 * parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * You can search for game sessions one fleet at a time only. To find game sessions across multiple fleets, you must search
 * each fleet separately and combine the results. This search feature finds only game sessions that are in
 * <code>ACTIVE</code> status. To locate games in statuses other than active, use
 *
 * <a>DescribeGameSessionDetails</a>>
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchGameSessionsResponse * GameLiftClient::searchGameSessions(const SearchGameSessionsRequest &request)
{
    return qobject_cast<SearchGameSessionsResponse *>(send(request));
}

/**
 * Places a request for a new game session in a queue (see <a>CreateGameSessionQueue</a>). When processing a placement
 * request, Amazon GameLift searches for available resources on the queue's destinations, scanning each until it finds
 * resources or the placement request times
 *
 * out>
 *
 * A game session placement request can also request player sessions. When a new game session is successfully created,
 * Amazon GameLift creates a player session for each player included in the
 *
 * request>
 *
 * When placing a game session, by default Amazon GameLift tries each fleet in the order they are listed in the queue
 * configuration. Ideally, a queue's destinations are listed in preference
 *
 * order>
 *
 * Alternatively, when requesting a game session with players, you can also provide latency data for each player in
 * relevant regions. Latency data indicates the performance lag a player experiences when connected to a fleet in the
 * region. Amazon GameLift uses latency data to reorder the list of destinations to place the game session in a region with
 * minimal lag. If latency data is provided for multiple players, Amazon GameLift calculates each region's average lag for
 * all players and reorders to get the best game play across all players.
 *
 * </p
 *
 * To place a new game session request, specify the
 *
 * following> <ul> <li>
 *
 * The queue name and a set of game session properties and
 *
 * setting> </li> <li>
 *
 * A unique ID (such as a UUID) for the placement. You use this ID to track the status of the placement
 *
 * reques> </li> <li>
 *
 * (Optional) A set of IDs and player data for each player you want to join to the new game
 *
 * sessio> </li> <li>
 *
 * Latency data for all players (if you want to optimize game play for the
 *
 * players> </li> </ul>
 *
 * If successful, a new game session placement is
 *
 * created>
 *
 * To track the status of a placement request, call <a>DescribeGameSessionPlacement</a> and check the request's status. If
 * the status is <code>FULFILLED</code>, a new game session has been created and a game session ARN and region are
 * referenced. If the placement request times out, you can resubmit the request or retry it with a different queue.
 *
 * </p
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartGameSessionPlacementResponse * GameLiftClient::startGameSessionPlacement(const StartGameSessionPlacementRequest &request)
{
    return qobject_cast<StartGameSessionPlacementResponse *>(send(request));
}

/**
 * Finds new players to fill open slots in an existing game session. This operation can be used to add players to matched
 * games that start with fewer than the maximum number of players or to replace players when they drop out. By backfilling
 * with the same matchmaker used to create the original match, you ensure that new players meet the match criteria and
 * maintain a consistent experience throughout the game session. You can backfill a match anytime after a game session has
 * been created.
 *
 * </p
 *
 * To request a match backfill, specify a unique ticket ID, the existing game session's ARN, a matchmaking configuration,
 * and a set of data that describes all current players in the game session. If successful, a match backfill ticket is
 * created and returned with status set to QUEUED. The ticket is placed in the matchmaker's ticket pool and processed.
 * Track the status of the ticket to respond as needed. For more detail how to set up backfilling, see <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html"> Backfill Existing Games with
 * FlexMatch</a>.
 *
 * </p
 *
 * The process of finding backfill matches is essentially identical to the initial matchmaking process. The matchmaker
 * searches the pool and groups tickets together to form potential matches, allowing only one backfill ticket per potential
 * match. Once the a match is formed, the matchmaker creates player sessions for the new players. All tickets in the match
 * are updated with the game session's connection information, and the <a>GameSession</a> object is updated to include
 * matchmaker data on the new players. For more detail on how match backfill requests are processed, see <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/match-intro.html"> How Amazon GameLift FlexMatch
 * Works</a>.
 *
 * </p
 *
 * Matchmaking-related operations
 *
 * include> <ul> <li>
 *
 * <a>StartMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>AcceptMatch</a>
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartMatchBackfillResponse * GameLiftClient::startMatchBackfill(const StartMatchBackfillRequest &request)
{
    return qobject_cast<StartMatchBackfillResponse *>(send(request));
}

/**
 * Uses FlexMatch to create a game match for a group of players based on custom matchmaking rules, and starts a new game
 * for the matched players. Each matchmaking request specifies the type of match to build (team configuration, rules for an
 * acceptable match, etc.). The request also specifies the players to find a match for and where to host the new game
 * session for optimal performance. A matchmaking request might start with a single player or a group of players who want
 * to play together. FlexMatch finds additional players as needed to fill the match. Match type, rules, and the queue used
 * to place a new game session are defined in a <code>MatchmakingConfiguration</code>. For complete information on setting
 * up and using FlexMatch, see the topic <a
 * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/match-intro.html"> Adding FlexMatch to Your
 *
 * Game</a>>
 *
 * To start matchmaking, provide a unique ticket ID, specify a matchmaking configuration, and include the players to be
 * matched. You must also include a set of player attributes relevant for the matchmaking configuration. If successful, a
 * matchmaking ticket is returned with status set to <code>QUEUED</code>. Track the status of the ticket to respond as
 * needed and acquire game session connection information for successfully completed
 *
 * matches>
 *
 * <b>Tracking ticket status</b> -- A couple of options are available for tracking the status of matchmaking requests:
 *
 * </p <ul> <li>
 *
 * Polling -- Call <code>DescribeMatchmaking</code>. This operation returns the full ticket object, including current
 * status and (for completed tickets) game session connection info. We recommend polling no more than once every 10
 *
 * seconds> </li> <li>
 *
 * Notifications -- Get event notifications for changes in ticket status using Amazon Simple Notification Service (SNS).
 * Notifications are easy to set up (see <a>CreateMatchmakingConfiguration</a>) and typically deliver match status changes
 * faster and more efficiently than polling. We recommend that you use polling to back up to notifications (since delivery
 * is not guaranteed) and call <code>DescribeMatchmaking</code> only when notifications are not received within 30
 *
 * seconds> </li> </ul>
 *
 * <b>Processing a matchmaking request</b> -- FlexMatch handles a matchmaking request as follows:
 *
 * </p <ol> <li>
 *
 * Your client code submits a <code>StartMatchmaking</code> request for one or more players and tracks the status of the
 * request ticket.
 *
 * </p </li> <li>
 *
 * FlexMatch uses this ticket and others in process to build an acceptable match. When a potential match is identified, all
 * tickets in the proposed match are advanced to the next status.
 *
 * </p </li> <li>
 *
 * If the match requires player acceptance (set in the matchmaking configuration), the tickets move into status
 * <code>REQUIRES_ACCEPTANCE</code>. This status triggers your client code to solicit acceptance from all players in every
 * ticket involved in the match, and then call <a>AcceptMatch</a> for each player. If any player rejects or fails to accept
 * the match before a specified timeout, the proposed match is dropped (see <code>AcceptMatch</code> for more
 *
 * details)> </li> <li>
 *
 * Once a match is proposed and accepted, the matchmaking tickets move into status <code>PLACING</code>. FlexMatch locates
 * resources for a new game session using the game session queue (set in the matchmaking configuration) and creates the
 * game session based on the match data.
 *
 * </p </li> <li>
 *
 * When the match is successfully placed, the matchmaking tickets move into <code>COMPLETED</code> status. Connection
 * information (including game session endpoint and player session) is added to the matchmaking tickets. Matched players
 * can use the connection information to join the game.
 *
 * </p </li> </ol>
 *
 * Matchmaking-related operations
 *
 * include> <ul> <li>
 *
 * <a>StartMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>AcceptMatch</a>
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartMatchmakingResponse * GameLiftClient::startMatchmaking(const StartMatchmakingRequest &request)
{
    return qobject_cast<StartMatchmakingResponse *>(send(request));
}

/**
 * Cancels a game session placement that is in <code>PENDING</code> status. To stop a placement, provide the placement ID
 * values. If successful, the placement is moved to <code>CANCELLED</code>
 *
 * status>
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopGameSessionPlacementResponse * GameLiftClient::stopGameSessionPlacement(const StopGameSessionPlacementRequest &request)
{
    return qobject_cast<StopGameSessionPlacementResponse *>(send(request));
}

/**
 * Cancels a matchmaking ticket that is currently being processed. To stop the matchmaking operation, specify the ticket
 * ID. If successful, work on the ticket is stopped, and the ticket status is changed to
 *
 * <code>CANCELLED</code>>
 *
 * Matchmaking-related operations
 *
 * include> <ul> <li>
 *
 * <a>StartMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>StopMatchmaking</a>
 *
 * </p </li> <li>
 *
 * <a>AcceptMatch</a>
 *
 * </p </li> <li>
 *
 * <a>StartMatchBackfill</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopMatchmakingResponse * GameLiftClient::stopMatchmaking(const StopMatchmakingRequest &request)
{
    return qobject_cast<StopMatchmakingResponse *>(send(request));
}

/**
 * Updates properties for an alias. To update properties, specify the alias ID to be updated and provide the information to
 * be changed. To reassign an alias to another fleet, provide an updated routing strategy. If successful, the updated alias
 * record is
 *
 * returned>
 *
 * Alias-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ResolveAlias</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAliasResponse * GameLiftClient::updateAlias(const UpdateAliasRequest &request)
{
    return qobject_cast<UpdateAliasResponse *>(send(request));
}

/**
 * Updates metadata in a build record, including the build name and version. To update the metadata, specify the build ID
 * to update and provide the new values. If successful, a build object containing the updated metadata is
 *
 * returned>
 *
 * Build-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>ListBuilds</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeBuild</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateBuild</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBuild</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateBuildResponse * GameLiftClient::updateBuild(const UpdateBuildRequest &request)
{
    return qobject_cast<UpdateBuildResponse *>(send(request));
}

/**
 * Updates fleet properties, including name and description, for a fleet. To update metadata, specify the fleet ID and the
 * property values that you want to change. If successful, the fleet ID for the updated fleet is
 *
 * returned>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFleetAttributesResponse * GameLiftClient::updateFleetAttributes(const UpdateFleetAttributesRequest &request)
{
    return qobject_cast<UpdateFleetAttributesResponse *>(send(request));
}

/**
 * Updates capacity settings for a fleet. Use this action to specify the number of EC2 instances (hosts) that you want this
 * fleet to contain. Before calling this action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the maximum
 * capacity based on the fleet's EC2 instance
 *
 * type>
 *
 * If you're using autoscaling (see <a>PutScalingPolicy</a>), you may want to specify a minimum and/or maximum capacity. If
 * you don't provide these, autoscaling can set capacity anywhere between zero and the <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">service
 *
 * limits</a>>
 *
 * To update fleet capacity, specify the fleet ID and the number of instances you want the fleet to host. If successful,
 * Amazon GameLift starts or terminates instances so that the fleet's active instance count matches the desired instance
 * count. You can view a fleet's current capacity information by calling <a>DescribeFleetCapacity</a>. If the desired
 * instance count is higher than the instance type's limit, the "Limit Exceeded" exception
 *
 * occurs>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFleetCapacityResponse * GameLiftClient::updateFleetCapacity(const UpdateFleetCapacityRequest &request)
{
    return qobject_cast<UpdateFleetCapacityResponse *>(send(request));
}

/**
 * Updates port settings for a fleet. To update settings, specify the fleet ID to be updated and list the permissions you
 * want to update. List the permissions you want to add in <code>InboundPermissionAuthorizations</code>, and permissions
 * you want to remove in <code>InboundPermissionRevocations</code>. Permissions to be removed must match existing fleet
 * permissions. If successful, the fleet ID for the updated fleet is
 *
 * returned>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFleetPortSettingsResponse * GameLiftClient::updateFleetPortSettings(const UpdateFleetPortSettingsRequest &request)
{
    return qobject_cast<UpdateFleetPortSettingsResponse *>(send(request));
}

/**
 * Updates game session properties. This includes the session name, maximum player count, protection policy, which controls
 * whether or not an active game session can be terminated during a scale-down event, and the player session creation
 * policy, which controls whether or not new players can join the session. To update a game session, specify the game
 * session ID and the values you want to change. If successful, an updated <a>GameSession</a> object is returned.
 *
 * </p
 *
 * Game-session-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionDetails</a>
 *
 * </p </li> <li>
 *
 * <a>SearchGameSessions</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSession</a>
 *
 * </p </li> <li>
 *
 * <a>GetGameSessionLogUrl</a>
 *
 * </p </li> <li>
 *
 * Game session
 *
 * placement> <ul> <li>
 *
 * <a>StartGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionPlacement</a>
 *
 * </p </li> <li>
 *
 * <a>StopGameSessionPlacement</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGameSessionResponse * GameLiftClient::updateGameSession(const UpdateGameSessionRequest &request)
{
    return qobject_cast<UpdateGameSessionResponse *>(send(request));
}

/**
 * Updates settings for a game session queue, which determines how new game session requests in the queue are processed. To
 * update settings, specify the queue name to be updated and provide the new settings. When updating destinations, provide
 * a complete list of destinations.
 *
 * </p
 *
 * Queue-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeGameSessionQueues</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateGameSessionQueue</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteGameSessionQueue</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGameSessionQueueResponse * GameLiftClient::updateGameSessionQueue(const UpdateGameSessionQueueRequest &request)
{
    return qobject_cast<UpdateGameSessionQueueResponse *>(send(request));
}

/**
 * Updates settings for a FlexMatch matchmaking configuration. To update settings, specify the configuration name to be
 * updated and provide the new settings.
 *
 * </p
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateMatchmakingConfigurationResponse * GameLiftClient::updateMatchmakingConfiguration(const UpdateMatchmakingConfigurationRequest &request)
{
    return qobject_cast<UpdateMatchmakingConfigurationResponse *>(send(request));
}

/**
 * Updates the current run-time configuration for the specified fleet, which tells Amazon GameLift how to launch server
 * processes on instances in the fleet. You can update a fleet's run-time configuration at any time after the fleet is
 * created; it does not need to be in an <code>ACTIVE</code>
 *
 * status>
 *
 * To update run-time configuration, specify the fleet ID and provide a <code>RuntimeConfiguration</code> object with the
 * updated collection of server process
 *
 * configurations>
 *
 * Each instance in a Amazon GameLift fleet checks regularly for an updated run-time configuration and changes how it
 * launches server processes to comply with the latest version. Existing server processes are not affected by the update;
 * they continue to run until they end, while Amazon GameLift simply adds new server processes to fit the current run-time
 * configuration. As a result, the run-time configuration changes are applied gradually as existing processes shut down and
 * new processes are launched in Amazon GameLift's normal process recycling
 *
 * activity>
 *
 * Fleet-related operations
 *
 * include> <ul> <li>
 *
 * <a>CreateFleet</a>
 *
 * </p </li> <li>
 *
 * <a>ListFleets</a>
 *
 * </p </li> <li>
 *
 * Describe
 *
 * fleets> <ul> <li>
 *
 * <a>DescribeFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetUtilization</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeRuntimeConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeFleetEvents</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Update
 *
 * fleets> <ul> <li>
 *
 * <a>UpdateFleetAttributes</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetPortSettings</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateRuntimeConfiguration</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * Manage fleet
 *
 * capacity> <ul> <li>
 *
 * <a>DescribeFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateFleetCapacity</a>
 *
 * </p </li> <li>
 *
 * <a>PutScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeScalingPolicies</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DeleteScalingPolicy</a> (automatic
 *
 * scaling> </li> <li>
 *
 * <a>DescribeEC2InstanceLimits</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <a>DeleteFleet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRuntimeConfigurationResponse * GameLiftClient::updateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest &request)
{
    return qobject_cast<UpdateRuntimeConfigurationResponse *>(send(request));
}

/**
 * Validates the syntax of a matchmaking rule or rule set. This operation checks that the rule set uses syntactically
 * correct JSON and that it conforms to allowed property expressions. To validate syntax, provide a rule set
 *
 * string>
 *
 * Operations related to match configurations and rule sets
 *
 * include> <ul> <li>
 *
 * <a>CreateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteMatchmakingConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a>CreateMatchmakingRuleSet</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeMatchmakingRuleSets</a>
 *
 * </p </li> <li>
 *
 * <a>ValidateMatchmakingRuleSet</a>
 *
 * @param  request Request to send to Amazon GameLift.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ValidateMatchmakingRuleSetResponse * GameLiftClient::validateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest &request)
{
    return qobject_cast<ValidateMatchmakingRuleSetResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  GameLiftClientPrivate
 *
 * @brief  Private implementation for GameLiftClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GameLiftClientPrivate object.
 *
 * @param  q  Pointer to this object's public GameLiftClient instance.
 */
GameLiftClientPrivate::GameLiftClientPrivate(GameLiftClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace GameLift
} // namespace AWS
