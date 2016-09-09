/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gameliftclient.h"
#include "gameliftclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  GameLiftClient
 *
 * @brief  Client for Amazon GameLift
 *
 * <fullname>Amazon GameLift Service</fullname>
 *
 + Welcome to the <i>Amazon GameLift API Reference</i>. Amazon GameLift is a managed Amazon Web Services (AWS) service for developers who need a scalable, server-based solution for multiplayer games. Amazon GameLift provides setup and deployment of game servers, and handles infrastructure scaling and session management.
 *
 + This reference describes the low-level service API for GameLift. You can call this API directly or use the <a href="https://aws.amazon.com/tools/#sdk">AWS SDK</a> for your preferred language. The AWS SDK includes a set of high-level GameLift actions multiplayer game sessions. Alternatively, you can use the <a href="https://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool, which includes commands for GameLift. For administrative actions, you can also use the Amazon GameLift console.
 *
 + <b>More Resources</b>
 *
 +  <ul> <li> <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon GameLift Developer Guide</a>: Learn more about GameLift features and how to use them </li> <li> <a href="https://gamedev.amazon.com/forums/tutorials">Lumberyard and GameLift Tutorials</a>: Get started fast with walkthroughs and sample projects</li> <li> <a href="https://aws.amazon.com/blogs/gamedev/">GameDev Blog</a>: Stay up to date with new features and techniques</li> <li> <a href="https://gamedev.amazon.com/forums/spaces/123/gamelift-discussion.html">GameDev Forums</a>: Connect with the GameDev community</li> </ul>
 *
 + <b>Manage Games and Players Through GameLift</b>
 *
 + Call these actions from your game clients and/or services to create and manage multiplayer game sessions and player sessions.
 *
 +  <ul> <li> <b>Game sessions</b> <ul> <li><a>CreateGameSession</a></li> <li><a>DescribeGameSessions</a></li> <li><a>DescribeGameSessionDetails</a></li> <li><a>UpdateGameSession</a></li> <li><a>SearchGameSessions</a></li> </ul> </li> <li> <b>Player sessions</b> <ul> <li><a>CreatePlayerSession</a></li> <li><a>CreatePlayerSessions</a></li> <li><a>DescribePlayerSessions</a></li> </ul> </li> <li> <b>Other actions:</b> <ul> <li><a>GetGameSessionLogUrl</a></li> </ul> </li> </ul>
 *
 + <b>Set Up and Manage Game Servers</b>
 *
 + Use these administrative actions to configure GameLift to host your game servers. When setting up GameLift, you'll need to (1) configure a build for your game and upload build files, and (2) set up one or more fleets to host game sessions. Once you've created and activated a fleet, you can assign aliases to it, scale capacity, track performance and utilization, etc.
 *
 +  <ul> <li> <b>Manage your builds:</b> <ul> <li><a>ListBuilds</a></li> <li><a>CreateBuild</a></li> <li><a>DescribeBuild</a></li> <li><a>UpdateBuild</a></li> <li><a>DeleteBuild</a></li> <li><a>RequestUploadCredentials</a></li> </ul> </li> <li> <b>Manage your fleets:</b> <ul> <li><a>ListFleets</a></li> <li><a>CreateFleet</a></li> <li>Describe fleets: <ul> <li><a>DescribeFleetAttributes</a></li> <li><a>DescribeFleetCapacity</a></li> <li><a>DescribeFleetPortSettings</a></li> <li><a>DescribeFleetUtilization</a></li> <li><a>DescribeEC2InstanceLimits</a></li> <li><a>DescribeFleetEvents</a></li> <li><a>DescribeRuntimeConfiguration</a></li> </ul> </li> <li>Update fleets: <ul> <li><a>UpdateFleetAttributes</a></li> <li><a>UpdateFleetCapacity</a></li> <li><a>UpdateFleetPortSettings</a></li> <li><a>UpdateRuntimeConfiguration</a></li> </ul> </li> <li><a>DeleteFleet</a></li> </ul> </li> <li> <b>Manage fleet aliases:</b> <ul> <li><a>ListAliases</a></li> <li><a>CreateAlias</a></li> <li><a>DescribeAlias</a></li> <li><a>UpdateAlias</a></li> <li><a>DeleteAlias</a></li> <li><a>ResolveAlias</a></li> </ul> </li> <li> <b>Manage autoscaling:</b> <ul> <li><a>PutScalingPolicy</a></li> <li><a>DescribeScalingPolicies</a></li> <li><a>DeleteScalingPolicy</a></li> </ul> </li> </ul>
 *
 + To view changes to the API, see the GameLift <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/doc-history.html">Document History</a> page.
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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

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

QTAWS_END_NAMESPACE
