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

#include "gameliftclient.h"
#include "gameliftclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptmatchrequest.h"
#include "acceptmatchresponse.h"
#include "claimgameserverrequest.h"
#include "claimgameserverresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "createbuildrequest.h"
#include "createbuildresponse.h"
#include "createfleetrequest.h"
#include "createfleetresponse.h"
#include "createfleetlocationsrequest.h"
#include "createfleetlocationsresponse.h"
#include "creategameservergrouprequest.h"
#include "creategameservergroupresponse.h"
#include "creategamesessionrequest.h"
#include "creategamesessionresponse.h"
#include "creategamesessionqueuerequest.h"
#include "creategamesessionqueueresponse.h"
#include "creatematchmakingconfigurationrequest.h"
#include "creatematchmakingconfigurationresponse.h"
#include "creatematchmakingrulesetrequest.h"
#include "creatematchmakingrulesetresponse.h"
#include "createplayersessionrequest.h"
#include "createplayersessionresponse.h"
#include "createplayersessionsrequest.h"
#include "createplayersessionsresponse.h"
#include "createscriptrequest.h"
#include "createscriptresponse.h"
#include "createvpcpeeringauthorizationrequest.h"
#include "createvpcpeeringauthorizationresponse.h"
#include "createvpcpeeringconnectionrequest.h"
#include "createvpcpeeringconnectionresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deletebuildrequest.h"
#include "deletebuildresponse.h"
#include "deletefleetrequest.h"
#include "deletefleetresponse.h"
#include "deletefleetlocationsrequest.h"
#include "deletefleetlocationsresponse.h"
#include "deletegameservergrouprequest.h"
#include "deletegameservergroupresponse.h"
#include "deletegamesessionqueuerequest.h"
#include "deletegamesessionqueueresponse.h"
#include "deletematchmakingconfigurationrequest.h"
#include "deletematchmakingconfigurationresponse.h"
#include "deletematchmakingrulesetrequest.h"
#include "deletematchmakingrulesetresponse.h"
#include "deletescalingpolicyrequest.h"
#include "deletescalingpolicyresponse.h"
#include "deletescriptrequest.h"
#include "deletescriptresponse.h"
#include "deletevpcpeeringauthorizationrequest.h"
#include "deletevpcpeeringauthorizationresponse.h"
#include "deletevpcpeeringconnectionrequest.h"
#include "deletevpcpeeringconnectionresponse.h"
#include "deregistergameserverrequest.h"
#include "deregistergameserverresponse.h"
#include "describealiasrequest.h"
#include "describealiasresponse.h"
#include "describebuildrequest.h"
#include "describebuildresponse.h"
#include "describeec2instancelimitsrequest.h"
#include "describeec2instancelimitsresponse.h"
#include "describefleetattributesrequest.h"
#include "describefleetattributesresponse.h"
#include "describefleetcapacityrequest.h"
#include "describefleetcapacityresponse.h"
#include "describefleeteventsrequest.h"
#include "describefleeteventsresponse.h"
#include "describefleetlocationattributesrequest.h"
#include "describefleetlocationattributesresponse.h"
#include "describefleetlocationcapacityrequest.h"
#include "describefleetlocationcapacityresponse.h"
#include "describefleetlocationutilizationrequest.h"
#include "describefleetlocationutilizationresponse.h"
#include "describefleetportsettingsrequest.h"
#include "describefleetportsettingsresponse.h"
#include "describefleetutilizationrequest.h"
#include "describefleetutilizationresponse.h"
#include "describegameserverrequest.h"
#include "describegameserverresponse.h"
#include "describegameservergrouprequest.h"
#include "describegameservergroupresponse.h"
#include "describegameserverinstancesrequest.h"
#include "describegameserverinstancesresponse.h"
#include "describegamesessiondetailsrequest.h"
#include "describegamesessiondetailsresponse.h"
#include "describegamesessionplacementrequest.h"
#include "describegamesessionplacementresponse.h"
#include "describegamesessionqueuesrequest.h"
#include "describegamesessionqueuesresponse.h"
#include "describegamesessionsrequest.h"
#include "describegamesessionsresponse.h"
#include "describeinstancesrequest.h"
#include "describeinstancesresponse.h"
#include "describematchmakingrequest.h"
#include "describematchmakingresponse.h"
#include "describematchmakingconfigurationsrequest.h"
#include "describematchmakingconfigurationsresponse.h"
#include "describematchmakingrulesetsrequest.h"
#include "describematchmakingrulesetsresponse.h"
#include "describeplayersessionsrequest.h"
#include "describeplayersessionsresponse.h"
#include "describeruntimeconfigurationrequest.h"
#include "describeruntimeconfigurationresponse.h"
#include "describescalingpoliciesrequest.h"
#include "describescalingpoliciesresponse.h"
#include "describescriptrequest.h"
#include "describescriptresponse.h"
#include "describevpcpeeringauthorizationsrequest.h"
#include "describevpcpeeringauthorizationsresponse.h"
#include "describevpcpeeringconnectionsrequest.h"
#include "describevpcpeeringconnectionsresponse.h"
#include "getgamesessionlogurlrequest.h"
#include "getgamesessionlogurlresponse.h"
#include "getinstanceaccessrequest.h"
#include "getinstanceaccessresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listbuildsrequest.h"
#include "listbuildsresponse.h"
#include "listfleetsrequest.h"
#include "listfleetsresponse.h"
#include "listgameservergroupsrequest.h"
#include "listgameservergroupsresponse.h"
#include "listgameserversrequest.h"
#include "listgameserversresponse.h"
#include "listscriptsrequest.h"
#include "listscriptsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putscalingpolicyrequest.h"
#include "putscalingpolicyresponse.h"
#include "registergameserverrequest.h"
#include "registergameserverresponse.h"
#include "requestuploadcredentialsrequest.h"
#include "requestuploadcredentialsresponse.h"
#include "resolvealiasrequest.h"
#include "resolvealiasresponse.h"
#include "resumegameservergrouprequest.h"
#include "resumegameservergroupresponse.h"
#include "searchgamesessionsrequest.h"
#include "searchgamesessionsresponse.h"
#include "startfleetactionsrequest.h"
#include "startfleetactionsresponse.h"
#include "startgamesessionplacementrequest.h"
#include "startgamesessionplacementresponse.h"
#include "startmatchbackfillrequest.h"
#include "startmatchbackfillresponse.h"
#include "startmatchmakingrequest.h"
#include "startmatchmakingresponse.h"
#include "stopfleetactionsrequest.h"
#include "stopfleetactionsresponse.h"
#include "stopgamesessionplacementrequest.h"
#include "stopgamesessionplacementresponse.h"
#include "stopmatchmakingrequest.h"
#include "stopmatchmakingresponse.h"
#include "suspendgameservergrouprequest.h"
#include "suspendgameservergroupresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealiasrequest.h"
#include "updatealiasresponse.h"
#include "updatebuildrequest.h"
#include "updatebuildresponse.h"
#include "updatefleetattributesrequest.h"
#include "updatefleetattributesresponse.h"
#include "updatefleetcapacityrequest.h"
#include "updatefleetcapacityresponse.h"
#include "updatefleetportsettingsrequest.h"
#include "updatefleetportsettingsresponse.h"
#include "updategameserverrequest.h"
#include "updategameserverresponse.h"
#include "updategameservergrouprequest.h"
#include "updategameservergroupresponse.h"
#include "updategamesessionrequest.h"
#include "updategamesessionresponse.h"
#include "updategamesessionqueuerequest.h"
#include "updategamesessionqueueresponse.h"
#include "updatematchmakingconfigurationrequest.h"
#include "updatematchmakingconfigurationresponse.h"
#include "updateruntimeconfigurationrequest.h"
#include "updateruntimeconfigurationresponse.h"
#include "updatescriptrequest.h"
#include "updatescriptresponse.h"
#include "validatematchmakingrulesetrequest.h"
#include "validatematchmakingrulesetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GameLift
 * \brief Contains classess for accessing Amazon GameLift.
 *
 * \inmodule QtAwsGameLift
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::GameLiftClient
 * \brief The GameLiftClient class provides access to the Amazon GameLift service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGameLift
 *
 *  <fullname>GameLift Service</fullname>
 * 
 *  Amazon Web Services provides solutions for hosting session-based multiplayer game servers in the cloud, including tools
 *  for deploying, operating, and scaling game servers. Built on Amazon Web Services global computing infrastructure,
 *  GameLift helps you deliver high-performance, high-reliability, low-cost game servers while dynamically scaling your
 *  resource usage to meet player demand.
 * 
 *  </p
 * 
 *  <b>About GameLift solutions</b>
 * 
 *  </p
 * 
 *  Get more information on these GameLift solutions in the <a
 *  href="https://docs.aws.amazon.com/gamelift/latest/developerguide/">GameLift Developer
 * 
 *  Guide</a>> <ul> <li>
 * 
 *  GameLift managed hosting -- GameLift offers a fully managed service to set up and maintain computing machines for
 *  hosting, manage game session and player session life cycle, and handle security, storage, and performance tracking. You
 *  can use automatic scaling tools to balance player demand and hosting costs, configure your game session management to
 *  minimize player latency, and add FlexMatch for
 * 
 *  matchmaking> </li> <li>
 * 
 *  Managed hosting with Realtime Servers -- With GameLift Realtime Servers, you can quickly configure and set up
 *  ready-to-go game servers for your game. Realtime Servers provides a game server framework with core GameLift
 *  infrastructure already built in. Then use the full range of GameLift managed hosting features, including FlexMatch, for
 *  your
 * 
 *  game> </li> <li>
 * 
 *  GameLift FleetIQ -- Use GameLift FleetIQ as a standalone service while hosting your games using EC2 instances and Auto
 *  Scaling groups. GameLift FleetIQ provides optimizations for game hosting, including boosting the viability of low-cost
 *  Spot Instances gaming. For a complete solution, pair the GameLift FleetIQ and FlexMatch standalone
 * 
 *  services> </li> <li>
 * 
 *  GameLift FlexMatch -- Add matchmaking to your game hosting solution. FlexMatch is a customizable matchmaking service for
 *  multiplayer games. Use FlexMatch as integrated with GameLift managed hosting or incorporate FlexMatch as a standalone
 *  service into your own hosting
 * 
 *  solution> </li> </ul>
 * 
 *  <b>About this API Reference</b>
 * 
 *  </p
 * 
 *  This reference guide describes the low-level service API for Amazon Web Services. With each topic in this guide, you can
 *  find links to language-specific SDK guides and the Amazon Web Services CLI reference. Useful
 * 
 *  links> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html">GameLift API operations
 *  listed by tasks</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html"> GameLift tools and
 *  resources</a>
 */

/*!
 * \brief Constructs a GameLiftClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GameLiftClient::GameLiftClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GameLiftClientPrivate(this), parent)
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

/*!
 * \overload GameLiftClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GameLiftClient::GameLiftClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GameLiftClientPrivate(this), parent)
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

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * AcceptMatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * dropped. The matchmaking tickets are then handled in one of two ways: For tickets where one or more players rejected the
 * match or failed to respond, the ticket status is set to <code>CANCELLED</code>, and processing is terminated. For
 * tickets where players have accepted or not yet responded, the ticket status is returned to <code>SEARCHING</code> to
 * find a new match. A new matchmaking request for these players can be submitted as needed.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html"> Add FlexMatch to a game
 * client</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html"> FlexMatch events</a>
 *
 * (reference>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>StartMatchmaking</a> | <a>DescribeMatchmaking</a> | <a>StopMatchmaking</a> | <a>AcceptMatch</a> |
 * <a>StartMatchBackfill</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
AcceptMatchResponse * GameLiftClient::acceptMatch(const AcceptMatchRequest &request)
{
    return qobject_cast<AcceptMatchResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ClaimGameServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Locates an available game server and temporarily reserves it to host gameplay and players. This operation is called from
 * a game client or client service (such as a matchmaker) to request hosting resources for a new game session. In response,
 * GameLift FleetIQ locates an available game server, places it in <code>CLAIMED</code> status for 60 seconds, and returns
 * connection information that players can use to connect to the game server.
 *
 * </p
 *
 * To claim a game server, identify a game server group. You can also specify a game server ID, although this approach
 * bypasses GameLift FleetIQ placement optimization. Optionally, include game data to pass to the game server at the start
 * of a game session, such as a game map or player information.
 *
 * </p
 *
 * When a game server is successfully claimed, connection information is returned. A claimed game server's utilization
 * status remains <code>AVAILABLE</code> while the claim status is set to <code>CLAIMED</code> for up to 60 seconds. This
 * time period gives the game server time to update its status to <code>UTILIZED</code> (using <a>UpdateGameServer</a>)
 * once players join. If the game server's status is not updated within 60 seconds, the game server reverts to unclaimed
 * status and is available to be claimed by another request. The claim time period is a fixed value and is not
 *
 * configurable>
 *
 * If you try to claim a specific game server, this request will fail in the following
 *
 * cases> <ul> <li>
 *
 * If the game server utilization status is
 *
 * <code>UTILIZED</code>> </li> <li>
 *
 * If the game server claim status is
 *
 * <code>CLAIMED</code>> </li> </ul> <note>
 *
 * When claiming a specific game server, this request will succeed even if the game server is running on an instance in
 * <code>DRAINING</code> status. To avoid this, first check the instance status by calling
 *
 * <a>DescribeGameServerInstances</a>> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
ClaimGameServerResponse * GameLiftClient::claimGameServer(const ClaimGameServerRequest &request)
{
    return qobject_cast<ClaimGameServerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alias for a fleet. In most situations, you can use an alias ID in place of a fleet ID. An alias provides a
 * level of abstraction for a fleet that is useful when redirecting player traffic from one fleet to another, such as when
 * updating your game build.
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
 * alias ID and an ARN. You can reassign an alias to another fleet by calling
 *
 * <code>UpdateAlias</code>>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateAliasResponse * GameLiftClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon GameLift build resource for your game server binary files. Game server binaries must be combined
 * into a zip file for use with Amazon GameLift.
 *
 * </p <b>
 *
 * When setting up a new game build for GameLift, we recommend using the Amazon Web Services CLI command <b> <a
 * href="https://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a> </b>. This helper
 * command combines two tasks: (1) it uploads your build files from a file directory to a GameLift Amazon S3 location, and
 * (2) it creates a new build resource.
 *
 * </p </b>
 *
 * The <code>CreateBuild</code> operation can used in the following
 *
 * scenarios> <ul> <li>
 *
 * To create a new game build with build files that are in an Amazon S3 location under an Amazon Web Services account that
 * you control. To use this option, you must first give Amazon GameLift access to the Amazon S3 bucket. With permissions in
 * place, call <code>CreateBuild</code> and specify a build name, operating system, and the Amazon S3 storage location of
 * your game
 *
 * build> </li> <li>
 *
 * To directly upload your build files to a GameLift Amazon S3 location. To use this option, first call
 * <code>CreateBuild</code> and specify a build name and operating system. This operation creates a new build resource and
 * also returns an Amazon S3 location with temporary access credentials. Use the credentials to manually upload your build
 * files to the specified Amazon S3 location. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading Objects</a> in the <i>Amazon S3
 * Developer Guide</i>. Build files can be uploaded to the GameLift Amazon S3 location once only; that can't be updated.
 *
 * </p </li> </ul>
 *
 * If successful, this operation creates a new build resource with a unique build ID and places it in
 * <code>INITIALIZED</code> status. A build must be in <code>READY</code> status before you can create fleets with
 *
 * it>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading Your Game</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
 * Create a Build with Files in Amazon S3</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateBuildResponse * GameLiftClient::createBuild(const CreateBuildRequest &request)
{
    return qobject_cast<CreateBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a fleet of Amazon Elastic Compute Cloud (Amazon Elastic Compute Cloud) instances to host your custom game server
 * or Realtime Servers. Use this operation to configure the computing resources for your fleet and provide instructions for
 * running game servers on each
 *
 * instance>
 *
 * Most GameLift fleets can deploy instances to multiple locations, including the home Region (where the fleet is created)
 * and an optional set of remote locations. Fleets that are created in the following Amazon Web Services Regions support
 * multiple locations: us-east-1 (N. Virginia), us-west-2 (Oregon), eu-central-1 (Frankfurt), eu-west-1 (Ireland),
 * ap-southeast-2 (Sydney), ap-northeast-1 (Tokyo), and ap-northeast-2 (Seoul). Fleets that are created in other GameLift
 * Regions can deploy instances in the fleet's home Region only. All fleet instances use the same configuration regardless
 * of location; however, you can adjust capacity settings and turn auto-scaling on/off for each
 *
 * location>
 *
 * To create a fleet, choose the hardware for your instances, specify a game server build or Realtime script to deploy, and
 * provide a runtime configuration to direct GameLift how to start and run game servers on each instance in the fleet. Set
 * permissions for inbound traffic to your game servers, and enable optional features as needed. When creating a
 * multi-location fleet, provide a list of additional remote
 *
 * locations>
 *
 * If you need to debug your fleet, fetch logs, view performance metrics or other actions on the fleet, create the
 * development fleet with port 22/3389 open. As a best practice, we recommend opening ports for remote access only when you
 * need them and closing them when you're finished.
 *
 * </p
 *
 * If successful, this operation creates a new Fleet resource and places it in <code>NEW</code> status, which prompts
 * GameLift to initiate the <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creation-workflow.html">fleet creation
 * workflow</a>. You can track fleet creation by checking fleet status using <a>DescribeFleetAttributes</a> and
 * <a>DescribeFleetLocationAttributes</a>/, or by monitoring fleet creation events using <a>DescribeFleetEvents</a>. As
 * soon as the fleet status changes to <code>ACTIVE</code>, you can enable automatic scaling for the fleet with
 * <a>PutScalingPolicy</a> and set capacity for the home Region with <a>UpdateFleetCapacity</a>. When the status of each
 * remote location reaches <code>ACTIVE</code>, you can set capacity by location using
 *
 * <a>UpdateFleetCapacity</a>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up fleets</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
 * fleet creation issues</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Multi-location fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleet</a> | <a>UpdateFleetCapacity</a> | <a>PutScalingPolicy</a> | <a>DescribeEC2InstanceLimits</a> |
 * <a>DescribeFleetAttributes</a> | <a>DescribeFleetLocationAttributes</a> | <a>UpdateFleetAttributes</a> |
 * <a>StopFleetActions</a> | <a>DeleteFleet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateFleetResponse * GameLiftClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateFleetLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds remote locations to a fleet and begins populating the new locations with EC2 instances. The new instances conform
 * to the fleet's instance type, auto-scaling, and other configuration settings.
 *
 * </p <note>
 *
 * This operation cannot be used with fleets that don't support remote locations. Fleets can have multiple locations only
 * if they reside in Amazon Web Services Regions that support this feature (see <a>CreateFleet</a> for the complete list)
 * and were created after the feature was released in March
 *
 * 2021> </note>
 *
 * To add fleet locations, specify the fleet to be updated and provide a list of one or more locations.
 *
 * </p
 *
 * If successful, this operation returns the list of added locations with their status set to <code>NEW</code>. GameLift
 * initiates the process of starting an instance in each added location. You can track the status of each new location by
 * monitoring location creation events using <a>DescribeFleetEvents</a>. Alternatively, you can poll location status by
 * calling <a>DescribeFleetLocationAttributes</a>. After a location status becomes <code>ACTIVE</code>, you can adjust the
 * location's capacity as needed with
 *
 * <a>UpdateFleetCapacity</a>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up fleets</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Multi-location fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetLocationCapacity</a> |
 * <a>DescribeFleetLocationUtilization</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetUtilization</a> | <a>UpdateFleetCapacity</a> | <a>StopFleetActions</a> | <a>DeleteFleetLocations</a> |
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateFleetLocationsResponse * GameLiftClient::createFleetLocations(const CreateFleetLocationsRequest &request)
{
    return qobject_cast<CreateFleetLocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Creates a GameLift FleetIQ game server group for managing game hosting on a collection of Amazon Elastic Compute Cloud
 * instances for game hosting. This operation creates the game server group, creates an Auto Scaling group in your Amazon
 * Web Services account, and establishes a link between the two groups. You can view the status of your game server groups
 * in the GameLift console. Game server group metrics and events are emitted to Amazon
 *
 * CloudWatch>
 *
 * Before creating a new game server group, you must have the following:
 *
 * </p <ul> <li>
 *
 * An Amazon Elastic Compute Cloud launch template that specifies how to launch Amazon Elastic Compute Cloud instances with
 * your game server build. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html"> Launching an Instance from a
 * Launch Template</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
 *
 * </p </li> <li>
 *
 * An IAM role that extends limited access to your Amazon Web Services account to allow GameLift FleetIQ to create and
 * interact with the Auto Scaling group. For more information, see <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-iam-permissions-roles.html">Create IAM roles for
 * cross-service interaction</a> in the <i>GameLift FleetIQ Developer
 *
 * Guide</i>> </li> </ul>
 *
 * To create a new game server group, specify a unique group name, IAM role and Amazon Elastic Compute Cloud launch
 * template, and provide a list of instance types that can be used in the group. You must also set initial maximum and
 * minimum limits on the group's instance count. You can optionally set an Auto Scaling policy with target tracking based
 * on a GameLift FleetIQ
 *
 * metric>
 *
 * Once the game server group and corresponding Auto Scaling group are created, you have full access to change the Auto
 * Scaling group's configuration as needed. Several properties that are set when creating a game server group, including
 * maximum/minimum size and auto-scaling policy settings, must be updated directly in the Auto Scaling group. Keep in mind
 * that some Auto Scaling group properties are periodically updated by GameLift FleetIQ as part of its balancing activities
 * to optimize for availability and
 *
 * cost>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
CreateGameServerGroupResponse * GameLiftClient::createGameServerGroup(const CreateGameServerGroupRequest &request)
{
    return qobject_cast<CreateGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateGameSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a multiplayer game session for players in a specific fleet location. This operation prompts an available server
 * process to start a game session and retrieves connection information for the new game session. As an alternative,
 * consider using the GameLift game session placement feature with
 *
 * </p
 *
 * with <a>StartGameSessionPlacement</a>, which uses FleetIQ algorithms and queues to optimize the placement
 *
 * process>
 *
 * When creating a game session, you specify exactly where you want to place it and provide a set of game session
 * configuration settings. The fleet must be in <code>ACTIVE</code> status before a game session can be created in it.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To create a game session on an instance in a fleet's home Region, provide a fleet or alias ID along with your game
 * session configuration.
 *
 * </p </li> <li>
 *
 * To create a game session on an instance in a fleet's remote location, provide a fleet or alias ID and a location name,
 * along with your game session configuration.
 *
 * </p </li> </ul>
 *
 * If successful, a workflow is initiated to start a new game session. A <code>GameSession</code> object is returned
 * containing the game session configuration and status. When the status is <code>ACTIVE</code>, game session connection
 * information is provided and player sessions can be created for the game session. By default, newly created game sessions
 * are open to new players. You can restrict new player access by using <a>UpdateGameSession</a> to change the game
 * session's player session creation
 *
 * policy>
 *
 * Game session logs are retained for all active game sessions for 14 days. To access the logs, call
 * <a>GetGameSessionLogUrl</a> to download the log
 *
 * files>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
 * a game session</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateGameSessionResponse * GameLiftClient::createGameSession(const CreateGameSessionRequest &request)
{
    return qobject_cast<CreateGameSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateGameSessionQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a placement queue that processes requests for new game sessions. A queue uses FleetIQ algorithms to determine
 * the best placement locations and find an available game server there, then prompts the game server process to start a
 * new game session.
 *
 * </p
 *
 * A game session queue is configured with a set of destinations (GameLift fleets or aliases), which determine the
 * locations where the queue can place new game sessions. These destinations can span multiple fleet types (Spot and
 * On-Demand), instance types, and Amazon Web Services Regions. If the queue includes multi-location fleets, the queue is
 * able to place game sessions in all of a fleet's remote locations. You can opt to filter out individual locations if
 *
 * needed>
 *
 * The queue configuration also determines how FleetIQ selects the best available placement for a new game session. Before
 * searching for an available game server, FleetIQ first prioritizes the queue's destinations and locations, with the best
 * placement locations on top. You can set up the queue to use the FleetIQ default prioritization or provide an alternate
 * set of
 *
 * priorities>
 *
 * To create a new queue, provide a name, timeout value, and a list of destinations. Optionally, specify a sort
 * configuration and/or a filter, and define a set of latency cap policies. You can also include the ARN for an Amazon
 * Simple Notification Service (SNS) topic to receive notifications of game session placement activity. Notifications using
 * SNS or CloudWatch events is the preferred way to track placement
 *
 * activity>
 *
 * If successful, a new <code>GameSessionQueue</code> object is returned with an assigned queue ARN. New game session
 * requests, which are submitted to queue with <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
 * or <a href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartMatchmaking.html">StartMatchmaking</a>,
 * reference a queue's name or ARN.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-design.html"> Design a game session queue</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-creating.html"> Create a game session
 * queue</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateGameSessionQueue.html">CreateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionQueues.html">DescribeGameSessionQueues</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSessionQueue.html">UpdateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteGameSessionQueue.html">DeleteGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateGameSessionQueueResponse * GameLiftClient::createGameSessionQueue(const CreateGameSessionQueueRequest &request)
{
    return qobject_cast<CreateGameSessionQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateMatchmakingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines a new matchmaking configuration for use with FlexMatch. Whether your are using FlexMatch with GameLift hosting
 * or as a standalone matchmaking service, the matchmaking configuration sets out rules for matching players and forming
 * teams. If you're also using GameLift hosting, it defines how to start game sessions for each match. Your matchmaking
 * system can use multiple configurations to handle different game scenarios. All matchmaking requests
 * (<a>StartMatchmaking</a> or <a>StartMatchBackfill</a>) identify the matchmaking configuration to use and provide player
 * attributes consistent with that configuration.
 *
 * </p
 *
 * To create a matchmaking configuration, you must provide the following: configuration name and FlexMatch mode (with or
 * without GameLift hosting); a rule set that specifies how to evaluate players and find acceptable matches; whether player
 * acceptance is required; and the maximum time allowed for a matchmaking attempt. When using FlexMatch with GameLift
 * hosting, you also need to identify the game session queue to use when starting a game session for the
 *
 * match>
 *
 * In addition, you must set up an Amazon Simple Notification Service topic to receive matchmaking notifications. Provide
 * the topic ARN in the matchmaking configuration. An alternative method, continuously polling ticket status with
 * <a>DescribeMatchmaking</a>, is only suitable for games in development with low matchmaking
 *
 * usage>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html"> Design a FlexMatch
 * matchmaker</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html"> Set up FlexMatch event
 * notification</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateMatchmakingConfigurationResponse * GameLiftClient::createMatchmakingConfiguration(const CreateMatchmakingConfigurationRequest &request)
{
    return qobject_cast<CreateMatchmakingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateMatchmakingRuleSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new rule set for FlexMatch matchmaking. A rule set describes the type of match to create, such as the number
 * and size of teams. It also sets the parameters for acceptable player matches, such as minimum skill level or character
 * type. A rule set is used by a <a>MatchmakingConfiguration</a>.
 *
 * </p
 *
 * To create a matchmaking rule set, provide unique rule set name and the rule set body in JSON format. Rule sets must be
 * defined in the same Region as the matchmaking configuration they are used
 *
 * with>
 *
 * Since matchmaking rule sets cannot be edited, it is a good idea to check the rule set syntax using
 * <a>ValidateMatchmakingRuleSet</a> before creating a new rule
 *
 * set>
 *
 * <b>Learn more</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build a rule set</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">Design a matchmaker</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-intro.html">Matchmaking with FlexMatch</a>
 *
 * </p </li> </ul>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateMatchmakingRuleSetResponse * GameLiftClient::createMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest &request)
{
    return qobject_cast<CreateMatchmakingRuleSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreatePlayerSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reserves an open player slot in a game session for a player. New player sessions can be created in any game session with
 * an open slot that is in <code>ACTIVE</code> status and has a player creation policy of <code>ACCEPT_ALL</code>. You can
 * add a group of players to a game session with <a>CreatePlayerSessions</a>.
 *
 * </p
 *
 * To create a player session, specify a game session ID, player ID, and optionally a set of player data.
 *
 * </p
 *
 * If successful, a slot is reserved in the game session for the player and a new <a>PlayerSession</a> object is returned
 * with a player session ID. The player references the player session ID when sending a connection request to the game
 * session, and the game server can use it to validate the player reservation with the GameLift service. Player sessions
 * cannot be updated.
 *
 * </p
 *
 * The maximum number of players per game session is 200. It is not adjustable.
 *
 * </p
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreatePlayerSession</a> | <a>CreatePlayerSessions</a> | <a>DescribePlayerSessions</a> |
 * <a>StartGameSessionPlacement</a> | <a>DescribeGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreatePlayerSessionResponse * GameLiftClient::createPlayerSession(const CreatePlayerSessionRequest &request)
{
    return qobject_cast<CreatePlayerSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreatePlayerSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reserves open slots in a game session for a group of players. New player sessions can be created in any game session
 * with an open slot that is in <code>ACTIVE</code> status and has a player creation policy of <code>ACCEPT_ALL</code>. To
 * add a single player to a game session, use <a>CreatePlayerSession</a>.
 *
 * </p
 *
 * To create player sessions, specify a game session ID and a list of player IDs. Optionally, provide a set of player data
 * for each player ID.
 *
 * </p
 *
 * If successful, a slot is reserved in the game session for each player, and new <a>PlayerSession</a> objects are returned
 * with player session IDs. Each player references their player session ID when sending a connection request to the game
 * session, and the game server can use it to validate the player reservation with the GameLift service. Player sessions
 * cannot be
 *
 * updated>
 *
 * The maximum number of players per game session is 200. It is not adjustable.
 *
 * </p
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreatePlayerSession</a> | <a>CreatePlayerSessions</a> | <a>DescribePlayerSessions</a> |
 * <a>StartGameSessionPlacement</a> | <a>DescribeGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreatePlayerSessionsResponse * GameLiftClient::createPlayerSessions(const CreatePlayerSessionsRequest &request)
{
    return qobject_cast<CreatePlayerSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new script record for your Realtime Servers script. Realtime scripts are JavaScript that provide configuration
 * settings and optional custom game logic for your game. The script is deployed when you create a Realtime Servers fleet
 * to host your game sessions. Script logic is executed during an active game session.
 *
 * </p
 *
 * To create a new script record, specify a script name and provide the script file(s). The script files and all
 * dependencies must be zipped into a single file. You can pull the zip file from either of these locations:
 *
 * </p <ul> <li>
 *
 * A locally available directory. Use the <i>ZipFile</i> parameter for this
 *
 * option> </li> <li>
 *
 * An Amazon Simple Storage Service (Amazon S3) bucket under your Amazon Web Services account. Use the
 * <i>StorageLocation</i> parameter for this option. You'll need to have an Identity Access Management (IAM) role that
 * allows the Amazon GameLift service to access your S3 bucket.
 *
 * </p </li> </ul>
 *
 * If the call is successful, a new script record is created with a unique script ID. If the script file is provided as a
 * local file, the file is uploaded to an Amazon GameLift-owned S3 bucket and the script record's storage location reflects
 * this location. If the script file is provided as an S3 bucket, Amazon GameLift accesses the file at this storage
 * location as needed for
 *
 * deployment>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon GameLift Realtime
 * Servers</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set Up a Role for Amazon
 * GameLift Access</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateScript</a> | <a>ListScripts</a> | <a>DescribeScript</a> | <a>UpdateScript</a> | <a>DeleteScript</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateScriptResponse * GameLiftClient::createScript(const CreateScriptRequest &request)
{
    return qobject_cast<CreateScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateVpcPeeringAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests authorization to create or delete a peer connection between the VPC for your Amazon GameLift fleet and a
 * virtual private cloud (VPC) in your Amazon Web Services account. VPC peering enables the game servers on your fleet to
 * communicate directly with other Amazon Web Services resources. Once you've received authorization, call
 * <a>CreateVpcPeeringConnection</a> to establish the peering connection. For more information, see <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC Peering with Amazon GameLift
 *
 * Fleets</a>>
 *
 * You can peer with VPCs that are owned by any Amazon Web Services account you have access to, including the account that
 * you use to manage your Amazon GameLift fleets. You cannot peer with VPCs that are in different
 *
 * Regions>
 *
 * To request authorization to create a connection, call this operation from the Amazon Web Services account with the VPC
 * that you want to peer to your Amazon GameLift fleet. For example, to enable your game servers to retrieve data from a
 * DynamoDB table, use the account that manages that DynamoDB resource. Identify the following values: (1) The ID of the
 * VPC that you want to peer with, and (2) the ID of the Amazon Web Services account that you use to manage Amazon
 * GameLift. If successful, VPC peering is authorized for the specified VPC.
 *
 * </p
 *
 * To request authorization to delete a connection, call this operation from the Amazon Web Services account with the VPC
 * that is peered with your Amazon GameLift fleet. Identify the following values: (1) VPC ID that you want to delete the
 * peering connection for, and (2) ID of the Amazon Web Services account that you use to manage Amazon GameLift.
 *
 * </p
 *
 * The authorization remains valid for 24 hours unless it is canceled by a call to <a>DeleteVpcPeeringAuthorization</a>.
 * You must create or delete the peering connection while the authorization is valid.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateVpcPeeringAuthorizationResponse * GameLiftClient::createVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest &request)
{
    return qobject_cast<CreateVpcPeeringAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * CreateVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Establishes a VPC peering connection between a virtual private cloud (VPC) in an Amazon Web Services account with the
 * VPC for your Amazon GameLift fleet. VPC peering enables the game servers on your fleet to communicate directly with
 * other Amazon Web Services resources. You can peer with VPCs in any Amazon Web Services account that you have access to,
 * including the account that you use to manage your Amazon GameLift fleets. You cannot peer with VPCs that are in
 * different Regions. For more information, see <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC Peering with Amazon GameLift
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
 * To establish the connection, call this operation from the Amazon Web Services account that is used to manage the Amazon
 * GameLift fleets. Identify the following values: (1) The ID of the fleet you want to be enable a VPC peering connection
 * for; (2) The Amazon Web Services account with the VPC that you want to peer with; and (3) The ID of the VPC you want to
 * peer with. This operation is asynchronous. If successful, a <a>VpcPeeringConnection</a> request is created. You can use
 * continuous polling to track the request's status using <a>DescribeVpcPeeringConnections</a>, or by monitoring fleet
 * events for success or failure using <a>DescribeFleetEvents</a>.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
CreateVpcPeeringConnectionResponse * GameLiftClient::createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request)
{
    return qobject_cast<CreateVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an alias. This operation removes all record of the alias. Game clients attempting to access a server process
 * using the deleted alias receive an error. To delete an alias, specify the alias ID to be
 *
 * deleted>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteAliasResponse * GameLiftClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a build. This operation permanently deletes the build resource and any uploaded build files. Deleting a build
 * does not affect the status of any active fleets using the build, but you can no longer create new fleets with the
 * deleted
 *
 * build>
 *
 * To delete a build, specify the build ID.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html"> Upload a Custom Server
 * Build</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteBuildResponse * GameLiftClient::deleteBuild(const DeleteBuildRequest &request)
{
    return qobject_cast<DeleteBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all resources and information related a fleet. Any current fleet instances, including those in remote locations,
 * are shut down. You don't need to call <code>DeleteFleetLocations</code>
 *
 * separately> <note>
 *
 * If the fleet being deleted has a VPC peering connection, you first need to get a valid authorization (good for 24 hours)
 * by calling <a>CreateVpcPeeringAuthorization</a>. You do not need to explicitly delete the VPC peering connection--this
 * is done as part of the delete fleet
 *
 * process> </note>
 *
 * To delete a fleet, specify the fleet ID to be terminated. During the deletion process the fleet status is changed to
 * <code>DELETING</code>. When completed, the status switches to <code>TERMINATED</code> and the fleet event
 * <code>FLEET_DELETED</code> is
 *
 * sent>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift Fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>UpdateFleetAttributes</a> | <a>UpdateFleetCapacity</a> | <a>UpdateFleetPortSettings</a>
 * | <a>UpdateRuntimeConfiguration</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a>PutScalingPolicy</a> |
 * <a>DeleteFleet</a> | <a>DeleteFleetLocations</a> | <a>DeleteScalingPolicy</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteFleetResponse * GameLiftClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteFleetLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes locations from a multi-location fleet. When deleting a location, all game server process and all instances that
 * are still active in the location are shut down.
 *
 * </p
 *
 * To delete fleet locations, identify the fleet ID and provide a list of the locations to be deleted.
 *
 * </p
 *
 * If successful, GameLift sets the location status to <code>DELETING</code>, and begins to shut down existing server
 * processes and terminate instances in each location being deleted. When completed, the location status changes to
 *
 * <code>TERMINATED</code>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetLocationCapacity</a> |
 * <a>DescribeFleetLocationUtilization</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetUtilization</a> | <a>UpdateFleetCapacity</a> | <a>StopFleetActions</a> | <a>DeleteFleetLocations</a> |
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteFleetLocationsResponse * GameLiftClient::deleteFleetLocations(const DeleteFleetLocationsRequest &request)
{
    return qobject_cast<DeleteFleetLocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Terminates a game server group and permanently deletes the game server group record. You have several options for how
 * these resources are impacted when deleting the game server group. Depending on the type of delete operation selected,
 * this operation might affect these
 *
 * resources> <ul> <li>
 *
 * The game server
 *
 * grou> </li> <li>
 *
 * The corresponding Auto Scaling
 *
 * grou> </li> <li>
 *
 * All game servers that are currently running in the
 *
 * grou> </li> </ul>
 *
 * To delete a game server group, identify the game server group to delete and specify the type of delete operation to
 * initiate. Game server groups can only be deleted if they are in <code>ACTIVE</code> or <code>ERROR</code>
 *
 * status>
 *
 * If the delete request is successful, a series of operations are kicked off. The game server group status is changed to
 * <code>DELETE_SCHEDULED</code>, which prevents new game servers from being registered and stops automatic scaling
 * activity. Once all game servers in the game server group are deregistered, GameLift FleetIQ can begin deleting
 * resources. If any of the delete operations fail, the game server group is placed in <code>ERROR</code>
 *
 * status>
 *
 * GameLift FleetIQ emits delete events to Amazon
 *
 * CloudWatch>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
DeleteGameServerGroupResponse * GameLiftClient::deleteGameServerGroup(const DeleteGameServerGroupRequest &request)
{
    return qobject_cast<DeleteGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteGameSessionQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a game session queue. Once a queue is successfully deleted, unfulfilled <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
 * requests that reference the queue will fail. To delete a queue, specify the queue
 *
 * name>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html"> Using Multi-Region Queues</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateGameSessionQueue.html">CreateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionQueues.html">DescribeGameSessionQueues</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSessionQueue.html">UpdateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteGameSessionQueue.html">DeleteGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteGameSessionQueueResponse * GameLiftClient::deleteGameSessionQueue(const DeleteGameSessionQueueRequest &request)
{
    return qobject_cast<DeleteGameSessionQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteMatchmakingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently removes a FlexMatch matchmaking configuration. To delete, specify the configuration name. A matchmaking
 * configuration cannot be deleted if it is being used in any active matchmaking
 *
 * tickets>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteMatchmakingConfigurationResponse * GameLiftClient::deleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest &request)
{
    return qobject_cast<DeleteMatchmakingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteMatchmakingRuleSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing matchmaking rule set. To delete the rule set, provide the rule set name. Rule sets cannot be deleted
 * if they are currently being used by a matchmaking configuration.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build a rule set</a>
 *
 * </p </li> </ul>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteMatchmakingRuleSetResponse * GameLiftClient::deleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest &request)
{
    return qobject_cast<DeleteMatchmakingRuleSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a fleet scaling policy. Once deleted, the policy is no longer in force and GameLift removes all record of it. To
 * delete a scaling policy, specify both the scaling policy name and the fleet ID it is associated
 *
 * with>
 *
 * To temporarily suspend scaling policies, call <a>StopFleetActions</a>. This operation suspends all policies for the
 *
 * fleet>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>DescribeFleetCapacity</a> | <a>UpdateFleetCapacity</a> | <a>DescribeEC2InstanceLimits</a> | <a>PutScalingPolicy</a> |
 * <a>DescribeScalingPolicies</a> | <a>DeleteScalingPolicy</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteScalingPolicyResponse * GameLiftClient::deleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    return qobject_cast<DeleteScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Realtime script. This operation permanently deletes the script record. If script files were uploaded, they are
 * also deleted (files stored in an S3 bucket are not deleted).
 *
 * </p
 *
 * To delete a script, specify the script ID. Before deleting a script, be sure to terminate all fleets that are deployed
 * with the script being deleted. Fleet instances periodically check for script updates, and if the script record no longer
 * exists, the instance will go into an error state and be unable to host game
 *
 * sessions>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon GameLift Realtime
 * Servers</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateScript</a> | <a>ListScripts</a> | <a>DescribeScript</a> | <a>UpdateScript</a> | <a>DeleteScript</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteScriptResponse * GameLiftClient::deleteScript(const DeleteScriptRequest &request)
{
    return qobject_cast<DeleteScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteVpcPeeringAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a pending VPC peering authorization for the specified VPC. If you need to delete an existing VPC peering
 * connection, call <a>DeleteVpcPeeringConnection</a>.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteVpcPeeringAuthorizationResponse * GameLiftClient::deleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest &request)
{
    return qobject_cast<DeleteVpcPeeringAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeleteVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a VPC peering connection. To delete the connection, you must have a valid authorization for the VPC peering
 * connection that you want to delete. You can check for an authorization by calling
 * <a>DescribeVpcPeeringAuthorizations</a> or request a new one using <a>CreateVpcPeeringAuthorization</a>.
 *
 * </p
 *
 * Once a valid authorization exists, call this operation from the Amazon Web Services account that is used to manage the
 * Amazon GameLift fleets. Identify the connection to delete by the connection ID and fleet ID. If successful, the
 * connection is removed.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DeleteVpcPeeringConnectionResponse * GameLiftClient::deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request)
{
    return qobject_cast<DeleteVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DeregisterGameServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Removes the game server from a game server group. As a result of this operation, the deregistered game server can no
 * longer be claimed and will not be returned in a list of active game servers.
 *
 * </p
 *
 * To deregister a game server, specify the game server group and game server ID. If successful, this operation emits a
 * CloudWatch event with termination timestamp and
 *
 * reason>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
DeregisterGameServerResponse * GameLiftClient::deregisterGameServer(const DeregisterGameServerRequest &request)
{
    return qobject_cast<DeregisterGameServerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves properties for an alias. This operation returns all alias metadata and settings. To get an alias's target
 * fleet ID only, use <code>ResolveAlias</code>.
 *
 * </p
 *
 * To get alias properties, specify the alias ID. If successful, the requested alias record is
 *
 * returned>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeAliasResponse * GameLiftClient::describeAlias(const DescribeAliasRequest &request)
{
    return qobject_cast<DescribeAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves properties for a custom game build. To request a build resource, specify a build ID. If successful, an object
 * containing the build properties is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html"> Upload a Custom Server
 * Build</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeBuildResponse * GameLiftClient::describeBuild(const DescribeBuildRequest &request)
{
    return qobject_cast<DescribeBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeEC2InstanceLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the instance limits and current utilization for an Amazon Web Services Region or location. Instance limits
 * control the number of instances, per instance type, per location, that your Amazon Web Services account can use. Learn
 * more at <a href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>. The information returned
 * includes the maximum number of instances allowed and your account's current usage across all fleets. This information
 * can affect your ability to scale your GameLift fleets. You can request a limit increase for your account by using the
 * <b>Service limits</b> page in the GameLift
 *
 * console>
 *
 * Instance limits differ based on whether the instances are deployed in a fleet's home Region or in a remote location. For
 * remote locations, limits also differ based on the combination of home Region and remote location. All requests must
 * specify an Amazon Web Services Region (either explicitly or as your default settings). To get the limit for a remote
 * location, you must also specify the location. For example, the following requests all return different results:
 *
 * </p <ul> <li>
 *
 * Request specifies the Region <code>ap-northeast-1</code> with no location. The result is limits and usage data on all
 * instance types that are deployed in <code>us-east-2</code>, by all of the fleets that reside in
 * <code>ap-northeast-1</code>.
 *
 * </p </li> <li>
 *
 * Request specifies the Region <code>us-east-1</code> with location <code>ca-central-1</code>. The result is limits and
 * usage data on all instance types that are deployed in <code>ca-central-1</code>, by all of the fleets that reside in
 * <code>us-east-2</code>. These limits do not affect fleets in any other Regions that deploy instances to
 *
 * <code>ca-central-1</code>> </li> <li>
 *
 * Request specifies the Region <code>eu-west-1</code> with location <code>ca-central-1</code>. The result is limits and
 * usage data on all instance types that are deployed in <code>ca-central-1</code>, by all of the fleets that reside in
 *
 * <code>eu-west-1</code>> </li> </ul>
 *
 * This operation can be used in the following
 *
 * ways> <ul> <li>
 *
 * To get limit and usage data for all instance types that are deployed in an Amazon Web Services Region by fleets that
 * reside in the same Region: Specify the Region only. Optionally, specify a single instance type to retrieve information
 *
 * for> </li> <li>
 *
 * To get limit and usage data for all instance types that are deployed to a remote location by fleets that reside in
 * different Amazon Web Services Region: Provide both the Amazon Web Services Region and the remote location. Optionally,
 * specify a single instance type to retrieve information
 *
 * for> </li> </ul>
 *
 * If successful, an <code>EC2InstanceLimits</code> object is returned with limits and usage data for each requested
 * instance
 *
 * type>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleet</a> | <a>UpdateFleetCapacity</a> | <a>PutScalingPolicy</a> | <a>DescribeEC2InstanceLimits</a> |
 * <a>DescribeFleetAttributes</a> | <a>DescribeFleetLocationAttributes</a> | <a>UpdateFleetAttributes</a> |
 * <a>StopFleetActions</a> | <a>DeleteFleet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeEC2InstanceLimitsResponse * GameLiftClient::describeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest &request)
{
    return qobject_cast<DescribeEC2InstanceLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves core fleet-wide properties, including the computing hardware and deployment configuration for all instances in
 * the
 *
 * fleet>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To get attributes for one or more specific fleets, provide a list of fleet IDs or fleet ARNs.
 *
 * </p </li> <li>
 *
 * To get attributes for all fleets, do not provide a fleet identifier.
 *
 * </p </li> </ul>
 *
 * When requesting attributes for multiple fleets, use the pagination parameters to retrieve results as a set of sequential
 * pages.
 *
 * </p
 *
 * If successful, a <code>FleetAttributes</code> object is returned for each fleet requested, unless the fleet identifier
 * is not found.
 *
 * </p <note>
 *
 * Some API operations limit the number of fleet IDs that allowed in one request. If a request exceeds this limit, the
 * request fails and the error message contains the maximum allowed
 *
 * number> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetAttributesResponse * GameLiftClient::describeFleetAttributes(const DescribeFleetAttributesRequest &request)
{
    return qobject_cast<DescribeFleetAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource capacity settings for one or more fleets. The data returned includes the current fleet capacity
 * (number of EC2 instances), and settings that can control how capacity scaling. For fleets with remote locations, this
 * operation retrieves data for the fleet's home Region only. See <a>DescribeFleetLocationCapacity</a> to get capacity
 * settings for a fleet's remote
 *
 * locations>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To get capacity data for one or more specific fleets, provide a list of fleet IDs or fleet ARNs.
 *
 * </p </li> <li>
 *
 * To get capacity data for all fleets, do not provide a fleet identifier.
 *
 * </p </li> </ul>
 *
 * When requesting multiple fleets, use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <a>FleetCapacity</a> object is returned for each requested fleet ID. Each FleetCapacity object includes
 * a <code>Location</code> property, which is set to the fleet's home Region. When a list of fleet IDs is provided,
 * attribute objects are returned only for fleets that currently
 *
 * exist> <note>
 *
 * Some API operations may limit the number of fleet IDs that are allowed in one request. If a request exceeds this limit,
 * the request fails and the error message includes the maximum
 *
 * allowed> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
 * metrics for fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetCapacityResponse * GameLiftClient::describeFleetCapacity(const DescribeFleetCapacityRequest &request)
{
    return qobject_cast<DescribeFleetCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves entries from a fleet's event log. Fleet events are initiated by changes in status, such as during fleet
 * creation and termination, changes in capacity, etc. If a fleet has multiple locations, events are also initiated by
 * changes to status and capacity in remote locations.
 *
 * </p
 *
 * You can specify a time range to limit the result set. Use the pagination parameters to retrieve results as a set of
 * sequential pages.
 *
 * </p
 *
 * If successful, a collection of event log entries matching the request are
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetEventsResponse * GameLiftClient::describeFleetEvents(const DescribeFleetEventsRequest &request)
{
    return qobject_cast<DescribeFleetEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetLocationAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information on a fleet's remote locations, including life-cycle status and any suspended fleet activity.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To get data for specific locations, provide a fleet identifier and a list of locations. Location data is returned in the
 * order that it is requested.
 *
 * </p </li> <li>
 *
 * To get data for all locations, provide a fleet identifier only. Location data is returned in no particular order.
 *
 * </p </li> </ul>
 *
 * When requesting attributes for multiple locations, use the pagination parameters to retrieve results as a set of
 * sequential pages.
 *
 * </p
 *
 * If successful, a <code>LocationAttributes</code> object is returned for each requested location. If the fleet does not
 * have a requested location, no information is returned. This operation does not return the home Region. To get
 * information on a fleet's home Region, call
 *
 * <code>DescribeFleetAttributes</code>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetLocationCapacity</a> |
 * <a>DescribeFleetLocationUtilization</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetUtilization</a> | <a>UpdateFleetCapacity</a> | <a>StopFleetActions</a> | <a>DeleteFleetLocations</a> |
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetLocationAttributesResponse * GameLiftClient::describeFleetLocationAttributes(const DescribeFleetLocationAttributesRequest &request)
{
    return qobject_cast<DescribeFleetLocationAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetLocationCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource capacity settings for a fleet location. The data returned includes the current capacity (number
 * of EC2 instances) and some scaling settings for the requested fleet location. Use this operation to retrieve capacity
 * information for a fleet's remote location or home Region (you can also retrieve home Region capacity by calling
 *
 * <code>DescribeFleetCapacity</code>)>
 *
 * To retrieve capacity data, identify a fleet and location.
 *
 * </p
 *
 * If successful, a <code>FleetCapacity</code> object is returned for the requested fleet location.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
 * metrics for fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetLocationCapacity</a> |
 * <a>DescribeFleetLocationUtilization</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetUtilization</a> | <a>UpdateFleetCapacity</a> | <a>StopFleetActions</a> | <a>DeleteFleetLocations</a> |
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetLocationCapacityResponse * GameLiftClient::describeFleetLocationCapacity(const DescribeFleetLocationCapacityRequest &request)
{
    return qobject_cast<DescribeFleetLocationCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetLocationUtilizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves current usage data for a fleet location. Utilization data provides a snapshot of current game hosting activity
 * at the requested location. Use this operation to retrieve utilization information for a fleet's remote location or home
 * Region (you can also retrieve home Region utilization by calling
 *
 * <code>DescribeFleetUtilization</code>)>
 *
 * To retrieve utilization data, identify a fleet and location.
 *
 * </p
 *
 * If successful, a <code>FleetUtilization</code> object is returned for the requested fleet location.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
 * metrics for fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetLocationCapacity</a> |
 * <a>DescribeFleetLocationUtilization</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetUtilization</a> | <a>UpdateFleetCapacity</a> | <a>StopFleetActions</a> | <a>DeleteFleetLocations</a> |
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetLocationUtilizationResponse * GameLiftClient::describeFleetLocationUtilization(const DescribeFleetLocationUtilizationRequest &request)
{
    return qobject_cast<DescribeFleetLocationUtilizationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetPortSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a fleet's inbound connection permissions. Connection permissions specify the range of IP addresses and port
 * settings that incoming traffic can use to access server processes in the fleet. Game sessions that are running on
 * instances in the fleet must use connections that fall in this
 *
 * range>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To retrieve the inbound connection permissions for a fleet, identify the fleet's unique identifier.
 *
 * </p </li> <li>
 *
 * To check the status of recent updates to a fleet remote location, specify the fleet ID and a location. Port setting
 * updates can take time to propagate across all locations.
 *
 * </p </li> </ul>
 *
 * If successful, a set of <a>IpPermission</a> objects is returned for the requested fleet ID. When a location is
 * specified, a pending status is included. If the requested fleet has been deleted, the result set is
 *
 * empty>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetPortSettingsResponse * GameLiftClient::describeFleetPortSettings(const DescribeFleetPortSettingsRequest &request)
{
    return qobject_cast<DescribeFleetPortSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeFleetUtilizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves utilization statistics for one or more fleets. Utilization data provides a snapshot of how the fleet's hosting
 * resources are currently being used. For fleets with remote locations, this operation retrieves data for the fleet's home
 * Region only. See <a>DescribeFleetLocationUtilization</a> to get utilization statistics for a fleet's remote
 *
 * locations>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To get utilization data for one or more specific fleets, provide a list of fleet IDs or fleet ARNs.
 *
 * </p </li> <li>
 *
 * To get utilization data for all fleets, do not provide a fleet identifier.
 *
 * </p </li> </ul>
 *
 * When requesting multiple fleets, use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <a>FleetUtilization</a> object is returned for each requested fleet ID, unless the fleet identifier is
 * not found. Each fleet utilization object includes a <code>Location</code> property, which is set to the fleet's home
 * Region.
 *
 * </p <note>
 *
 * Some API operations may limit the number of fleet IDs allowed in one request. If a request exceeds this limit, the
 * request fails and the error message includes the maximum
 *
 * allowed> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift Fleets</a>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
 * Metrics for Fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeFleetUtilizationResponse * GameLiftClient::describeFleetUtilization(const DescribeFleetUtilizationRequest &request)
{
    return qobject_cast<DescribeFleetUtilizationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Retrieves information for a registered game server. Information includes game server status, health check info, and the
 * instance that the game server is running on.
 *
 * </p
 *
 * To retrieve game server information, specify the game server ID. If successful, the requested game server object is
 * returned.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
DescribeGameServerResponse * GameLiftClient::describeGameServer(const DescribeGameServerRequest &request)
{
    return qobject_cast<DescribeGameServerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Retrieves information on a game server group. This operation returns only properties related to GameLift FleetIQ. To
 * view or update properties for the corresponding Auto Scaling group, such as launch template, auto scaling policies, and
 * maximum/minimum group size, access the Auto Scaling group
 *
 * directly>
 *
 * To get attributes for a game server group, provide a group name or ARN value. If successful, a <a>GameServerGroup</a>
 * object is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
DescribeGameServerGroupResponse * GameLiftClient::describeGameServerGroup(const DescribeGameServerGroupRequest &request)
{
    return qobject_cast<DescribeGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameServerInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Retrieves status information about the Amazon EC2 instances associated with a GameLift FleetIQ game server group. Use
 * this operation to detect when instances are active or not available to host new game servers. If you are looking for
 * instance configuration information, call <a>DescribeGameServerGroup</a> or access the corresponding Auto Scaling group
 *
 * properties>
 *
 * To request status for all instances in the game server group, provide a game server group ID only. To request status for
 * specific instances, provide the game server group ID and one or more instance IDs. Use the pagination parameters to
 * retrieve results in sequential segments. If successful, a collection of <code>GameServerInstance</code> objects is
 * returned.
 *
 * </p
 *
 * This operation is not designed to be called with every game server claim request; this practice can cause you to exceed
 * your API limit, which results in errors. Instead, as a best practice, cache the results and refresh your cache no more
 * than once every 10
 *
 * seconds>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
DescribeGameServerInstancesResponse * GameLiftClient::describeGameServerInstances(const DescribeGameServerInstancesRequest &request)
{
    return qobject_cast<DescribeGameServerInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameSessionDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves additional game session properties, including the game session protection policy in force, a set of one or
 * more game sessions in a specific fleet location. You can optionally filter the results by current game session status.
 * Alternatively, use <a>SearchGameSessions</a> to request a set of active game sessions that are filtered by certain
 * criteria. To retrieve all game session properties, use <a>DescribeGameSessions</a>.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To retrieve details for all game sessions that are currently running on all locations in a fleet, provide a fleet or
 * alias ID, with an optional status filter. This approach returns details from the fleet's home Region and all remote
 *
 * locations> </li> <li>
 *
 * To retrieve details for all game sessions that are currently running on a specific fleet location, provide a fleet or
 * alias ID and a location name, with optional status filter. The location can be the fleet's home Region or any remote
 *
 * location> </li> <li>
 *
 * To retrieve details for a specific game session, provide the game session ID. This approach looks for the game session
 * ID in all fleets that reside in the Amazon Web Services Region defined in the
 *
 * request> </li> </ul>
 *
 * Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <code>GameSessionDetail</code> object is returned for each game session that matches the
 *
 * request>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-find">Find
 * a game session</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeGameSessionDetailsResponse * GameLiftClient::describeGameSessionDetails(const DescribeGameSessionDetailsRequest &request)
{
    return qobject_cast<DescribeGameSessionDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameSessionPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information, including current status, about a game session placement request.
 *
 * </p
 *
 * To get game session placement details, specify the placement
 *
 * ID>
 *
 * This operation is not designed to be continually called to track game session status. This practice can cause you to
 * exceed your API limit, which results in errors. Instead, you must configure configure an Amazon Simple Notification
 * Service (SNS) topic to receive notifications from FlexMatch or queues. Continuously polling with
 * <code>DescribeGameSessionPlacement</code> should only be used for games in development with low game session usage.
 *
 * </p
 *
 * If successful, a <a>GameSessionPlacement</a> object is
 *
 * returned>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeGameSessionPlacementResponse * GameLiftClient::describeGameSessionPlacement(const DescribeGameSessionPlacementRequest &request)
{
    return qobject_cast<DescribeGameSessionPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameSessionQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the properties for one or more game session queues. When requesting multiple queues, use the pagination
 * parameters to retrieve results as a set of sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
 * for each requested queue. When specifying a list of queues, objects are returned only for queues that currently exist in
 * the
 *
 * Region>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-console.html"> View Your Queues</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateGameSessionQueue.html">CreateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionQueues.html">DescribeGameSessionQueues</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSessionQueue.html">UpdateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteGameSessionQueue.html">DeleteGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeGameSessionQueuesResponse * GameLiftClient::describeGameSessionQueues(const DescribeGameSessionQueuesRequest &request)
{
    return qobject_cast<DescribeGameSessionQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeGameSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a set of one or more game sessions in a specific fleet location. You can optionally filter the results by
 * current game session status. Alternatively, use <a>SearchGameSessions</a> to request a set of active game sessions that
 * are filtered by certain criteria. To retrieve the protection policy for game sessions, use
 *
 * <a>DescribeGameSessionDetails</a>>
 *
 * This operation is not designed to be continually called to track game session status. This practice can cause you to
 * exceed your API limit, which results in errors. Instead, you must configure configure an Amazon Simple Notification
 * Service (SNS) topic to receive notifications from FlexMatch or queues. Continuously polling with
 * <code>DescribeGameSessions</code> should only be used for games in development with low game session usage.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To retrieve all game sessions that are currently running on all locations in a fleet, provide a fleet or alias ID, with
 * an optional status filter. This approach returns all game sessions in the fleet's home Region and all remote
 *
 * locations> </li> <li>
 *
 * To retrieve all game sessions that are currently running on a specific fleet location, provide a fleet or alias ID and a
 * location name, with optional status filter. The location can be the fleet's home Region or any remote
 *
 * location> </li> <li>
 *
 * To retrieve a specific game session, provide the game session ID. This approach looks for the game session ID in all
 * fleets that reside in the Amazon Web Services Region defined in the
 *
 * request> </li> </ul>
 *
 * Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <code>GameSession</code> object is returned for each game session that matches the
 *
 * request>
 *
 * This operation is not designed to be continually called to track matchmaking ticket status. This practice can cause you
 * to exceed your API limit, which results in errors. Instead, as a best practice, set up an Amazon Simple Notification
 * Service to receive notifications, and provide the topic ARN in the matchmaking configuration. Continuously poling ticket
 * status with <a>DescribeGameSessions</a> should only be used for games in development with low matchmaking
 *
 * usage>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-find">Find
 * a game session</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeGameSessionsResponse * GameLiftClient::describeGameSessions(const DescribeGameSessionsRequest &request)
{
    return qobject_cast<DescribeGameSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a fleet's instances, including instance IDs, connection data, and status.
 *
 * </p
 *
 * This operation can be used in the following
 *
 * ways> <ul> <li>
 *
 * To get information on all instances that are deployed to a fleet's home Region, provide the fleet
 *
 * ID> </li> <li>
 *
 * To get information on all instances that are deployed to a fleet's remote location, provide the fleet ID and location
 *
 * name> </li> <li>
 *
 * To get information on a specific instance in a fleet, provide the fleet ID and instance
 *
 * ID> </li> </ul>
 *
 * Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, an <code>Instance</code> object is returned for each requested instance. Instances are not returned in
 * any particular order.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely Access Fleet
 * Instances</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug Fleet Issues</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>DescribeInstances</a> | <a>GetInstanceAccess</a> | <a>DescribeEC2InstanceLimits</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeInstancesResponse * GameLiftClient::describeInstances(const DescribeInstancesRequest &request)
{
    return qobject_cast<DescribeInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeMatchmakingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves one or more matchmaking tickets. Use this operation to retrieve ticket information, including--after a
 * successful match is made--connection information for the resulting new game session.
 *
 * </p
 *
 * To request matchmaking tickets, provide a list of up to 10 ticket IDs. If the request is successful, a ticket object is
 * returned for each requested ID that currently
 *
 * exists>
 *
 * This operation is not designed to be continually called to track matchmaking ticket status. This practice can cause you
 * to exceed your API limit, which results in errors. Instead, as a best practice, set up an Amazon Simple Notification
 * Service to receive notifications, and provide the topic ARN in the matchmaking configuration. Continuously polling
 * ticket status with <a>DescribeMatchmaking</a> should only be used for games in development with low matchmaking
 *
 * usage>
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html"> Add FlexMatch to a game
 * client</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html"> Set Up FlexMatch event
 * notification</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>StartMatchmaking</a> | <a>DescribeMatchmaking</a> | <a>StopMatchmaking</a> | <a>AcceptMatch</a> |
 * <a>StartMatchBackfill</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeMatchmakingResponse * GameLiftClient::describeMatchmaking(const DescribeMatchmakingRequest &request)
{
    return qobject_cast<DescribeMatchmakingResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeMatchmakingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of FlexMatch matchmaking configurations.
 *
 * </p
 *
 * This operation offers the following options: (1) retrieve all matchmaking configurations, (2) retrieve configurations
 * for a specified list, or (3) retrieve all configurations that use a specified rule set name. When requesting multiple
 * items, use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a configuration is returned for each requested name. When specifying a list of names, only configurations
 * that currently exist are returned.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/matchmaker-build.html"> Setting up FlexMatch
 * matchmakers</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeMatchmakingConfigurationsResponse * GameLiftClient::describeMatchmakingConfigurations(const DescribeMatchmakingConfigurationsRequest &request)
{
    return qobject_cast<DescribeMatchmakingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeMatchmakingRuleSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details for FlexMatch matchmaking rule sets. You can request all existing rule sets for the Region, or
 * provide a list of one or more rule set names. When requesting multiple items, use the pagination parameters to retrieve
 * results as a set of sequential pages. If successful, a rule set is returned for each requested name.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build a rule set</a>
 *
 * </p </li> </ul>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeMatchmakingRuleSetsResponse * GameLiftClient::describeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest &request)
{
    return qobject_cast<DescribeMatchmakingRuleSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribePlayerSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves properties for one or more player sessions.
 *
 * </p
 *
 * This action can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To retrieve a specific player session, provide the player session ID
 *
 * only> </li> <li>
 *
 * To retrieve all player sessions in a game session, provide the game session ID
 *
 * only> </li> <li>
 *
 * To retrieve all player sessions for a specific player, provide a player ID
 *
 * only> </li> </ul>
 *
 * To request player sessions, specify either a player session ID, game session ID, or player ID. You can filter this
 * request by player session status. Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <code>PlayerSession</code> object is returned for each session that matches the
 *
 * request>
 *
 * <i>Available in Amazon GameLift Local.</i>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreatePlayerSession</a> | <a>CreatePlayerSessions</a> | <a>DescribePlayerSessions</a> |
 * <a>StartGameSessionPlacement</a> | <a>DescribeGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribePlayerSessionsResponse * GameLiftClient::describePlayerSessions(const DescribePlayerSessionsRequest &request)
{
    return qobject_cast<DescribePlayerSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeRuntimeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a fleet's runtime configuration settings. The runtime configuration tells GameLift which server processes to
 * run (and how) on each instance in the
 *
 * fleet>
 *
 * To get the runtime configuration that is currently in forces for a fleet, provide the fleet ID.
 *
 * </p
 *
 * If successful, a <a>RuntimeConfiguration</a> object is returned for the requested fleet. If the requested fleet has been
 * deleted, the result set is
 *
 * empty>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">Running multiple processes
 * on a fleet</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>ListFleets</a> | <a>DescribeEC2InstanceLimits</a> | <a>DescribeFleetAttributes</a> | <a>DescribeFleetCapacity</a> |
 * <a>DescribeFleetEvents</a> | <a>DescribeFleetLocationAttributes</a> | <a>DescribeFleetPortSettings</a> |
 * <a>DescribeFleetUtilization</a> | <a>DescribeRuntimeConfiguration</a> | <a>DescribeScalingPolicies</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeRuntimeConfigurationResponse * GameLiftClient::describeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest &request)
{
    return qobject_cast<DescribeRuntimeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeScalingPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * A fleet may have all of its scaling policies suspended (<a>StopFleetActions</a>). This operation does not affect the
 * status of the scaling policies, which remains ACTIVE. To see whether a fleet's scaling policies are in force or
 * suspended, call <a>DescribeFleetAttributes</a> and check the stopped
 *
 * actions>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>DescribeFleetCapacity</a> | <a>UpdateFleetCapacity</a> | <a>DescribeEC2InstanceLimits</a> | <a>PutScalingPolicy</a> |
 * <a>DescribeScalingPolicies</a> | <a>DeleteScalingPolicy</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeScalingPoliciesResponse * GameLiftClient::describeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    return qobject_cast<DescribeScalingPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves properties for a Realtime script.
 *
 * </p
 *
 * To request a script record, specify the script ID. If successful, an object containing the script properties is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon GameLift Realtime
 * Servers</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateScript</a> | <a>ListScripts</a> | <a>DescribeScript</a> | <a>UpdateScript</a> | <a>DeleteScript</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeScriptResponse * GameLiftClient::describeScript(const DescribeScriptRequest &request)
{
    return qobject_cast<DescribeScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeVpcPeeringAuthorizationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves valid VPC peering authorizations that are pending for the Amazon Web Services account. This operation returns
 * all VPC peering authorizations and requests for peering. This includes those initiated and received by this account.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeVpcPeeringAuthorizationsResponse * GameLiftClient::describeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest &request)
{
    return qobject_cast<DescribeVpcPeeringAuthorizationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * DescribeVpcPeeringConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information on VPC peering connections. Use this operation to get peering information for all fleets or for
 * one specific fleet ID.
 *
 * </p
 *
 * To retrieve connection information, call this operation from the Amazon Web Services account that is used to manage the
 * Amazon GameLift fleets. Specify a fleet ID or leave the parameter empty to retrieve all connection records. If
 * successful, the retrieved information includes both active and pending connections. Active connections identify the IpV4
 * CIDR block that the VPC uses to connect.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateVpcPeeringAuthorization</a> | <a>DescribeVpcPeeringAuthorizations</a> | <a>DeleteVpcPeeringAuthorization</a> |
 * <a>CreateVpcPeeringConnection</a> | <a>DescribeVpcPeeringConnections</a> | <a>DeleteVpcPeeringConnection</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
DescribeVpcPeeringConnectionsResponse * GameLiftClient::describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request)
{
    return qobject_cast<DescribeVpcPeeringConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * GetGameSessionLogUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the location of stored game session logs for a specified game session. When a game session is terminated,
 * GameLift automatically stores the logs in Amazon S3 and retains them for 14 days. Use this URL to download the
 *
 * logs> <note>
 *
 * See the <a href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">Amazon Web
 * Services Service Limits</a> page for maximum log file sizes. Log files that exceed this limit are not
 *
 * saved> </note>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
GetGameSessionLogUrlResponse * GameLiftClient::getGameSessionLogUrl(const GetGameSessionLogUrlRequest &request)
{
    return qobject_cast<GetGameSessionLogUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * GetInstanceAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests remote access to a fleet instance. Remote access is useful for debugging, gathering benchmarking data, or
 * observing activity in real time.
 *
 * </p
 *
 * To remotely access an instance, you need credentials that match the operating system of the instance. For a Windows
 * instance, GameLift returns a user name and password as strings for use with a Windows Remote Desktop client. For a Linux
 * instance, GameLift returns a user name and RSA private key, also as strings, for use with an SSH client. The private key
 * must be saved in the proper format to a <code>.pem</code> file before using. If you're making this request using the
 * CLI, saving the secret can be handled as part of the <code>GetInstanceAccess</code> request, as shown in one of the
 * examples for this operation.
 *
 * </p
 *
 * To request access to a specific instance, specify the IDs of both the instance and the fleet it belongs to. You can
 * retrieve a fleet's instance IDs by calling <a>DescribeInstances</a>. If successful, an <a>InstanceAccess</a> object is
 * returned that contains the instance's IP address and a set of
 *
 * credentials>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely Access Fleet
 * Instances</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug Fleet Issues</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>DescribeInstances</a> | <a>GetInstanceAccess</a> | <a>DescribeEC2InstanceLimits</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
GetInstanceAccessResponse * GameLiftClient::getInstanceAccess(const GetInstanceAccessRequest &request)
{
    return qobject_cast<GetInstanceAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all aliases for this Amazon Web Services account. You can filter the result set by alias name and/or routing
 * strategy type. Use the pagination parameters to retrieve results in sequential
 *
 * pages> <note>
 *
 * Returned aliases are not listed in any particular
 *
 * order> </note>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ListAliasesResponse * GameLiftClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListBuildsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves build resources for all builds associated with the Amazon Web Services account in use. You can limit results
 * to builds that are in a specific status by using the <code>Status</code> parameter. Use the pagination parameters to
 * retrieve results in a set of sequential pages.
 *
 * </p <note>
 *
 * Build resources are not listed in any particular
 *
 * order> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html"> Upload a Custom Server
 * Build</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ListBuildsResponse * GameLiftClient::listBuilds(const ListBuildsRequest &request)
{
    return qobject_cast<ListBuildsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a collection of fleet resources in an Amazon Web Services Region. You can call this operation to get fleets in
 * a previously selected default Region (see <a
 * href="https://docs.aws.amazon.com/credref/latest/refdocs/setting-global-region.html">https://docs.aws.amazon.com/credref/latest/refdocs/setting-global-region.html</a>or
 * specify a Region in your request. You can filter the result set to find only those fleets that are deployed with a
 * specific build or script. For fleets that have multiple locations, this operation retrieves fleets based on their home
 * Region
 *
 * only>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To get a list of all fleets in a Region, don't provide a build or script identifier.
 *
 * </p </li> <li>
 *
 * To get a list of all fleets where a specific custom game build is deployed, provide the build
 *
 * ID> </li> <li>
 *
 * To get a list of all Realtime Servers fleets with a specific configuration script, provide the script ID.
 *
 * </p </li> </ul>
 *
 * Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a list of fleet IDs that match the request parameters is returned. A NextToken value is also returned if
 * there are more result pages to
 *
 * retrieve> <note>
 *
 * Fleet resources are not listed in a particular
 *
 * order> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleet</a> | <a>UpdateFleetCapacity</a> | <a>PutScalingPolicy</a> | <a>DescribeEC2InstanceLimits</a> |
 * <a>DescribeFleetAttributes</a> | <a>DescribeFleetLocationAttributes</a> | <a>UpdateFleetAttributes</a> |
 * <a>StopFleetActions</a> | <a>DeleteFleet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ListFleetsResponse * GameLiftClient::listFleets(const ListFleetsRequest &request)
{
    return qobject_cast<ListFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListGameServerGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Retrieves information on all game servers groups that exist in the current Amazon Web Services account for the selected
 * Region. Use the pagination parameters to retrieve results in a set of sequential segments.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
ListGameServerGroupsResponse * GameLiftClient::listGameServerGroups(const ListGameServerGroupsRequest &request)
{
    return qobject_cast<ListGameServerGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListGameServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Retrieves information on all game servers that are currently active in a specified game server group. You can opt to
 * sort the list by game server age. Use the pagination parameters to retrieve results in a set of sequential segments.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
ListGameServersResponse * GameLiftClient::listGameServers(const ListGameServersRequest &request)
{
    return qobject_cast<ListGameServersResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListScriptsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves script records for all Realtime scripts that are associated with the Amazon Web Services account in use.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon GameLift Realtime
 * Servers</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateScript</a> | <a>ListScripts</a> | <a>DescribeScript</a> | <a>UpdateScript</a> | <a>DeleteScript</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ListScriptsResponse * GameLiftClient::listScripts(const ListScriptsRequest &request)
{
    return qobject_cast<ListScriptsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all tags that are assigned to a GameLift resource. Resource tags are used to organize Amazon Web Services
 * resources for a range of purposes. This operation handles the permissions necessary to manage tags for the following
 * GameLift resource
 *
 * types> <ul> <li>
 *
 * Buil> </li> <li>
 *
 * Scrip> </li> <li>
 *
 * Flee> </li> <li>
 *
 * Alia> </li> <li>
 *
 * GameSessionQueu> </li> <li>
 *
 * MatchmakingConfiguratio> </li> <li>
 *
 * MatchmakingRuleSe> </li> </ul>
 *
 * To list tags for a resource, specify the unique ARN value for the
 *
 * resource>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web Services Resources</a> in
 * the <i>Amazon Web Services General Reference</i>
 *
 * </p
 *
 * <a href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/"> Amazon Web Services Tagging
 * Strategies</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>TagResource</a> | <a>UntagResource</a> | <a>ListTagsForResource</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ListTagsForResourceResponse * GameLiftClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * PutScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a scaling policy for a fleet. Scaling policies are used to automatically scale a fleet's hosting
 * capacity to meet player demand. An active scaling policy instructs Amazon GameLift to track a fleet metric and
 * automatically change the fleet's capacity when a certain threshold is reached. There are two types of scaling policies:
 * target-based and rule-based. Use a target-based policy to quickly and efficiently manage fleet scaling; this option is
 * the most commonly used. Use rule-based policies when you need to exert fine-grained control over auto-scaling.
 *
 * </p
 *
 * Fleets can have multiple scaling policies of each type in force at the same time; you can have one target-based policy,
 * one or multiple rule-based scaling policies, or both. We recommend caution, however, because multiple auto-scaling
 * policies can have unintended
 *
 * consequences>
 *
 * You can temporarily suspend all scaling policies for a fleet by calling <a>StopFleetActions</a> with the fleet action
 * AUTO_SCALING. To resume scaling policies, call <a>StartFleetActions</a> with the same fleet action. To stop just one
 * scaling policy--or to permanently remove it, you must delete the policy with
 *
 * <a>DeleteScalingPolicy</a>>
 *
 * Learn more about how to work with auto-scaling in <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-autoscaling.html">Set Up Fleet Automatic
 *
 * Scaling</a>>
 *
 * <b>Target-based policy</b>
 *
 * </p
 *
 * A target-based policy tracks a single metric: PercentAvailableGameSessions. This metric tells us how much of a fleet's
 * hosting capacity is ready to host game sessions but is not currently in use. This is the fleet's buffer; it measures the
 * additional player demand that the fleet could handle at current capacity. With a target-based policy, you set your ideal
 * buffer size and leave it to Amazon GameLift to take whatever action is needed to maintain that target.
 *
 * </p
 *
 * For example, you might choose to maintain a 10% buffer for a fleet that has the capacity to host 100 simultaneous game
 * sessions. This policy tells Amazon GameLift to take action whenever the fleet's available capacity falls below or rises
 * above 10 game sessions. Amazon GameLift will start new instances or stop unused instances in order to return to the 10%
 * buffer.
 *
 * </p
 *
 * To create or update a target-based policy, specify a fleet ID and name, and set the policy type to "TargetBased".
 * Specify the metric to track (PercentAvailableGameSessions) and reference a <a>TargetConfiguration</a> object with your
 * desired buffer value. Exclude all other parameters. On a successful request, the policy name is returned. The scaling
 * policy is automatically in force as soon as it's successfully created. If the fleet's auto-scaling actions are
 * temporarily suspended, the new policy will be in force once the fleet actions are
 *
 * restarted>
 *
 * <b>Rule-based policy</b>
 *
 * </p
 *
 * A rule-based policy tracks specified fleet metric, sets a threshold value, and specifies the type of action to initiate
 * when triggered. With a rule-based policy, you can select from several available fleet metrics. Each policy specifies
 * whether to scale up or scale down (and by how much), so you need one policy for each type of action.
 *
 * </p
 *
 * For example, a policy may make the following statement: "If the percentage of idle instances is greater than 20% for
 * more than 15 minutes, then reduce the fleet capacity by
 *
 * 10%.>
 *
 * A policy's rule statement has the following
 *
 * structure>
 *
 * If <code>[MetricName]</code> is <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
 * <code>[EvaluationPeriods]</code> minutes, then <code>[ScalingAdjustmentType]</code> to/by
 *
 * <code>[ScalingAdjustment]</code>>
 *
 * To implement the example, the rule statement would look like
 *
 * this>
 *
 * If <code>[PercentIdleInstances]</code> is <code>[GreaterThanThreshold]</code> <code>[20]</code> for <code>[15]</code>
 * minutes, then <code>[PercentChangeInCapacity]</code> to/by
 *
 * <code>[10]</code>>
 *
 * To create or update a scaling policy, specify a unique combination of name and fleet ID, and set the policy type to
 * "RuleBased". Specify the parameter values for a policy rule statement. On a successful request, the policy name is
 * returned. Scaling policies are automatically in force as soon as they're successfully created. If the fleet's
 * auto-scaling actions are temporarily suspended, the new policy will be in force once the fleet actions are
 *
 * restarted>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>DescribeFleetCapacity</a> | <a>UpdateFleetCapacity</a> | <a>DescribeEC2InstanceLimits</a> | <a>PutScalingPolicy</a> |
 * <a>DescribeScalingPolicies</a> | <a>DeleteScalingPolicy</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
PutScalingPolicyResponse * GameLiftClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * RegisterGameServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Creates a new game server resource and notifies GameLift FleetIQ that the game server is ready to host gameplay and
 * players. This operation is called by a game server process that is running on an instance in a game server group.
 * Registering game servers enables GameLift FleetIQ to track available game servers and enables game clients and services
 * to claim a game server for a new game session.
 *
 * </p
 *
 * To register a game server, identify the game server group and instance where the game server is running, and provide a
 * unique identifier for the game server. You can also include connection and game server data. When a game client or
 * service requests a game server by calling <a>ClaimGameServer</a>, this information is returned in the
 *
 * response>
 *
 * Once a game server is successfully registered, it is put in status <code>AVAILABLE</code>. A request to register a game
 * server may fail if the instance it is running on is in the process of shutting down as part of instance balancing or
 * scale-down activity.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
RegisterGameServerResponse * GameLiftClient::registerGameServer(const RegisterGameServerRequest &request)
{
    return qobject_cast<RegisterGameServerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * RequestUploadCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a fresh set of credentials for use when uploading a new set of game build files to Amazon GameLift's Amazon
 * S3. This is done as part of the build creation process; see
 *
 * <a>CreateBuild</a>>
 *
 * To request new credentials, specify the build ID as returned with an initial <code>CreateBuild</code> request. If
 * successful, a new set of credentials are returned, along with the S3 storage location associated with the build
 *
 * ID>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
 * Create a Build with Files in S3</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
RequestUploadCredentialsResponse * GameLiftClient::requestUploadCredentials(const RequestUploadCredentialsRequest &request)
{
    return qobject_cast<RequestUploadCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ResolveAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the fleet ID that an alias is currently pointing
 *
 * to>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ResolveAliasResponse * GameLiftClient::resolveAlias(const ResolveAliasRequest &request)
{
    return qobject_cast<ResolveAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ResumeGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Reinstates activity on a game server group after it has been suspended. A game server group might be suspended by
 * the<a>SuspendGameServerGroup</a> operation, or it might be suspended involuntarily due to a configuration problem. In
 * the second case, you can manually resume activity on the group once the configuration problem has been resolved. Refer
 * to the game server group status and status reason for more information on why group activity is
 *
 * suspended>
 *
 * To resume activity, specify a game server group ARN and the type of activity to be resumed. If successful, a
 * <a>GameServerGroup</a> object is returned showing that the resumed activity is no longer listed in
 * <code>SuspendedActions</code>.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
ResumeGameServerGroupResponse * GameLiftClient::resumeGameServerGroup(const ResumeGameServerGroupRequest &request)
{
    return qobject_cast<ResumeGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * SearchGameSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all active game sessions that match a set of search criteria and sorts them into a specified order.
 *
 * </p
 *
 * This operation is not designed to be continually called to track game session status. This practice can cause you to
 * exceed your API limit, which results in errors. Instead, you must configure configure an Amazon Simple Notification
 * Service (SNS) topic to receive notifications from FlexMatch or queues. Continuously polling game session status with
 * <code>DescribeGameSessions</code> should only be used for games in development with low game session usage.
 *
 * </p
 *
 * When searching for game sessions, you specify exactly where you want to search and provide a search filter expression, a
 * sort expression, or both. A search request can search only one fleet, but it can search all of a fleet's locations.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To search all game sessions that are currently running on all locations in a fleet, provide a fleet or alias ID. This
 * approach returns game sessions in the fleet's home Region and all remote locations that fit the search
 *
 * criteria> </li> <li>
 *
 * To search all game sessions that are currently running on a specific fleet location, provide a fleet or alias ID and a
 * location name. For location, you can specify a fleet's home Region or any remote
 *
 * location> </li> </ul>
 *
 * Use the pagination parameters to retrieve results as a set of sequential pages.
 *
 * </p
 *
 * If successful, a <code>GameSession</code> object is returned for each game session that matches the request. Search
 * finds game sessions that are in <code>ACTIVE</code> status only. To retrieve information on game sessions in other
 * statuses, use
 *
 * <a>DescribeGameSessions</a>>
 *
 * You can search or sort by the following game session
 *
 * attributes> <ul> <li>
 *
 * <b>gameSessionId</b> -- A unique identifier for the game session. You can use either a <code>GameSessionId</code> or
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
 * "gameMode:brawl", specify the following: <code>gameSessionProperties.gameMode = "brawl"</code>. All custom data values
 * are searched as
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
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
SearchGameSessionsResponse * GameLiftClient::searchGameSessions(const SearchGameSessionsRequest &request)
{
    return qobject_cast<SearchGameSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StartFleetActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resumes certain types of activity on fleet instances that were suspended with <a>StopFleetActions</a>. For
 * multi-location fleets, fleet actions are managed separately for each location. Currently, this operation is used to
 * restart a fleet's auto-scaling
 *
 * activity>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To restart actions on instances in the fleet's home Region, provide a fleet ID and the type of actions to resume.
 *
 * </p </li> <li>
 *
 * To restart actions on instances in one of the fleet's remote locations, provide a fleet ID, a location name, and the
 * type of actions to resume.
 *
 * </p </li> </ul>
 *
 * If successful, GameLift once again initiates scaling events as triggered by the fleet's scaling policies. If actions on
 * the fleet location were never stopped, this operation will have no effect. You can view a fleet's stopped actions using
 * <a>DescribeFleetAttributes</a> or
 *
 * <a>DescribeFleetLocationAttributes</a>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleet</a> | <a>UpdateFleetCapacity</a> | <a>PutScalingPolicy</a> | <a>DescribeEC2InstanceLimits</a> |
 * <a>DescribeFleetAttributes</a> | <a>DescribeFleetLocationAttributes</a> | <a>UpdateFleetAttributes</a> |
 * <a>StopFleetActions</a> | <a>DeleteFleet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StartFleetActionsResponse * GameLiftClient::startFleetActions(const StartFleetActionsRequest &request)
{
    return qobject_cast<StartFleetActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StartGameSessionPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * relevant Regions. Latency data indicates the performance lag a player experiences when connected to a fleet in the
 * Region. Amazon GameLift uses latency data to reorder the list of destinations to place the game session in a Region with
 * minimal lag. If latency data is provided for multiple players, Amazon GameLift calculates each Region's average lag for
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
 * (Optional) A set of player data and a unique player ID for each player that you are joining to the new game session
 * (player data is optional, but if you include it, you must also provide a unique ID for each
 *
 * player> </li> <li>
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
 * the status is <code>FULFILLED</code>, a new game session has been created and a game session ARN and Region are
 * referenced. If the placement request times out, you can resubmit the request or retry it with a different queue.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StartGameSessionPlacementResponse * GameLiftClient::startGameSessionPlacement(const StartGameSessionPlacementRequest &request)
{
    return qobject_cast<StartGameSessionPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StartMatchBackfillResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finds new players to fill open slots in currently running game sessions. The backfill match process is essentially
 * identical to the process of forming new matches. Backfill requests use the same matchmaker that was used to make the
 * original match, and they provide matchmaking data for all players currently in the game session. FlexMatch uses this
 * information to select new players so that backfilled match continues to meet the original match requirements.
 *
 * </p
 *
 * When using FlexMatch with GameLift managed hosting, you can request a backfill match from a client service by calling
 * this operation with a <a>GameSession</a> identifier. You also have the option of making backfill requests directly from
 * your game server. In response to a request, FlexMatch creates player sessions for the new players, updates the
 * <code>GameSession</code> resource, and sends updated matchmaking data to the game server. You can request a backfill
 * match at any point after a game session is started. Each game session can have only one active backfill request at a
 * time; a subsequent request automatically replaces the earlier
 *
 * request>
 *
 * When using FlexMatch as a standalone component, request a backfill match by calling this operation without a game
 * session identifier. As with newly formed matches, matchmaking results are returned in a matchmaking event so that your
 * game can update the game session that is being
 *
 * backfilled>
 *
 * To request a backfill match, specify a unique ticket ID, the original matchmaking configuration, and matchmaking data
 * for all current players in the game session being backfilled. Optionally, specify the <code>GameSession</code> ARN. If
 * successful, a match backfill ticket is created and returned with status set to QUEUED. Track the status of backfill
 * tickets using the same method for tracking tickets for new
 *
 * matches>
 *
 * Only game sessions created by FlexMatch are supported for match
 *
 * backfill>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html"> Backfill existing games with
 * FlexMatch</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html"> Matchmaking events</a>
 *
 * (reference>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html"> How GameLift FlexMatch
 * works</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>StartMatchmaking</a> | <a>DescribeMatchmaking</a> | <a>StopMatchmaking</a> | <a>AcceptMatch</a> |
 * <a>StartMatchBackfill</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StartMatchBackfillResponse * GameLiftClient::startMatchBackfill(const StartMatchBackfillRequest &request)
{
    return qobject_cast<StartMatchBackfillResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StartMatchmakingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses FlexMatch to create a game match for a group of players based on custom matchmaking rules. With games that use
 * GameLift managed hosting, this operation also triggers GameLift to find hosting resources and start a new game session
 * for the new match. Each matchmaking request includes information on one or more players and specifies the FlexMatch
 * matchmaker to use. When a request is for multiple players, FlexMatch attempts to build a match that includes all players
 * in the request, placing them in the same team and finding additional players as needed to fill the match.
 *
 * </p
 *
 * To start matchmaking, provide a unique ticket ID, specify a matchmaking configuration, and include the players to be
 * matched. You must also include any player attributes that are required by the matchmaking configuration's rule set. If
 * successful, a matchmaking ticket is returned with status set to <code>QUEUED</code>.
 *
 * </p
 *
 * Track matchmaking events to respond as needed and acquire game session connection information for successfully completed
 * matches. Ticket status updates are tracked using event notification through Amazon Simple Notification Service, which is
 * defined in the matchmaking
 *
 * configuration>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html"> Add FlexMatch to a game
 * client</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html"> Set Up FlexMatch event
 * notification</a>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html"> How GameLift FlexMatch
 * works</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>StartMatchmaking</a> | <a>DescribeMatchmaking</a> | <a>StopMatchmaking</a> | <a>AcceptMatch</a> |
 * <a>StartMatchBackfill</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StartMatchmakingResponse * GameLiftClient::startMatchmaking(const StartMatchmakingRequest &request)
{
    return qobject_cast<StartMatchmakingResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StopFleetActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends certain types of activity in a fleet location. Currently, this operation is used to stop auto-scaling activity.
 * For multi-location fleets, fleet actions are managed separately for each location.
 *
 * </p
 *
 * Stopping fleet actions has several potential purposes. It allows you to temporarily stop auto-scaling activity but
 * retain your scaling policies for use in the future. For multi-location fleets, you can set up fleet-wide auto-scaling,
 * and then opt out of it for certain locations.
 *
 * </p
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To stop actions on instances in the fleet's home Region, provide a fleet ID and the type of actions to suspend.
 *
 * </p </li> <li>
 *
 * To stop actions on instances in one of the fleet's remote locations, provide a fleet ID, a location name, and the type
 * of actions to suspend.
 *
 * </p </li> </ul>
 *
 * If successful, GameLift no longer initiates scaling events except in response to manual changes using
 * <a>UpdateFleetCapacity</a>. You can view a fleet's stopped actions using <a>DescribeFleetAttributes</a> or
 * <a>DescribeFleetLocationAttributes</a>. Suspended activity can be restarted using
 *
 * <a>StartFleetActions</a>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift Fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleet</a> | <a>UpdateFleetCapacity</a> | <a>PutScalingPolicy</a> | <a>DescribeEC2InstanceLimits</a> |
 * <a>DescribeFleetAttributes</a> | <a>DescribeFleetLocationAttributes</a> | <a>UpdateFleetAttributes</a> |
 * <a>StopFleetActions</a> | <a>DeleteFleet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StopFleetActionsResponse * GameLiftClient::stopFleetActions(const StopFleetActionsRequest &request)
{
    return qobject_cast<StopFleetActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StopGameSessionPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a game session placement that is in <code>PENDING</code> status. To stop a placement, provide the placement ID
 * values. If successful, the placement is moved to <code>CANCELLED</code>
 *
 * status>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StopGameSessionPlacementResponse * GameLiftClient::stopGameSessionPlacement(const StopGameSessionPlacementRequest &request)
{
    return qobject_cast<StopGameSessionPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * StopMatchmakingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a matchmaking ticket or match backfill ticket that is currently being processed. To stop the matchmaking
 * operation, specify the ticket ID. If successful, work on the ticket is stopped, and the ticket status is changed to
 *
 * <code>CANCELLED</code>>
 *
 * This call is also used to turn off automatic backfill for an individual game session. This is for game sessions that are
 * created with a matchmaking configuration that has automatic backfill enabled. The ticket ID is included in the
 * <code>MatchmakerData</code> of an updated game session object, which is provided to the game
 *
 * server> <note>
 *
 * If the operation is successful, the service sends back an empty JSON struct with the HTTP 200 response (not an empty
 * HTTP
 *
 * body)> </note>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html"> Add FlexMatch to a game
 * client</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>StartMatchmaking</a> | <a>DescribeMatchmaking</a> | <a>StopMatchmaking</a> | <a>AcceptMatch</a> |
 * <a>StartMatchBackfill</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
StopMatchmakingResponse * GameLiftClient::stopMatchmaking(const StopMatchmakingRequest &request)
{
    return qobject_cast<StopMatchmakingResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * SuspendGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Temporarily stops activity on a game server group without terminating instances or the game server group. You can
 * restart activity by calling <a>ResumeGameServerGroup</a>. You can suspend the following
 *
 * activity> <ul> <li>
 *
 * <b>Instance type replacement</b> - This activity evaluates the current game hosting viability of all Spot instance types
 * that are defined for the game server group. It updates the Auto Scaling group to remove nonviable Spot Instance types,
 * which have a higher chance of game server interruptions. It then balances capacity across the remaining viable Spot
 * Instance types. When this activity is suspended, the Auto Scaling group continues with its current balance, regardless
 * of viability. Instance protection, utilization metrics, and capacity scaling activities continue to be active.
 *
 * </p </li> </ul>
 *
 * To suspend activity, specify a game server group ARN and the type of activity to be suspended. If successful, a
 * <a>GameServerGroup</a> object is returned showing that the activity is listed in
 *
 * <code>SuspendedActions</code>>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
SuspendGameServerGroupResponse * GameLiftClient::suspendGameServerGroup(const SuspendGameServerGroupRequest &request)
{
    return qobject_cast<SuspendGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a tag to a GameLift resource. Amazon Web Services resource tags provide an additional management tool set. You
 * can use tags to organize resources, create IAM permissions policies to manage access to groups of resources, customize
 * Amazon Web Services cost breakdowns, etc. This operation handles the permissions necessary to manage tags for the
 * following GameLift resource
 *
 * types> <ul> <li>
 *
 * Buil> </li> <li>
 *
 * Scrip> </li> <li>
 *
 * Flee> </li> <li>
 *
 * Alia> </li> <li>
 *
 * GameSessionQueu> </li> <li>
 *
 * MatchmakingConfiguratio> </li> <li>
 *
 * MatchmakingRuleSe> </li> </ul>
 *
 * To add a tag to a resource, specify the unique ARN value for the resource and provide a tag list containing one or more
 * tags. The operation succeeds even if the list includes tags that are already assigned to the specified resource.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web Services Resources</a> in
 * the <i>Amazon Web Services General Reference</i>
 *
 * </p
 *
 * <a href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/"> Amazon Web Services Tagging
 * Strategies</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>TagResource</a> | <a>UntagResource</a> | <a>ListTagsForResource</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
TagResourceResponse * GameLiftClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag that is assigned to a GameLift resource. Resource tags are used to organize Amazon Web Services resources
 * for a range of purposes. This operation handles the permissions necessary to manage tags for the following GameLift
 * resource
 *
 * types> <ul> <li>
 *
 * Buil> </li> <li>
 *
 * Scrip> </li> <li>
 *
 * Flee> </li> <li>
 *
 * Alia> </li> <li>
 *
 * GameSessionQueu> </li> <li>
 *
 * MatchmakingConfiguratio> </li> <li>
 *
 * MatchmakingRuleSe> </li> </ul>
 *
 * To remove a tag from a resource, specify the unique ARN value for the resource and provide a string list containing one
 * or more tags to be removed. This operation succeeds even if the list includes tags that are not currently assigned to
 * the specified
 *
 * resource>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web Services Resources</a> in
 * the <i>Amazon Web Services General Reference</i>
 *
 * </p
 *
 * <a href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/"> Amazon Web Services Tagging
 * Strategies</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>TagResource</a> | <a>UntagResource</a> | <a>ListTagsForResource</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UntagResourceResponse * GameLiftClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties for an alias. To update properties, specify the alias ID to be updated and provide the information to
 * be changed. To reassign an alias to another fleet, provide an updated routing strategy. If successful, the updated alias
 * record is
 *
 * returned>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateAlias</a> | <a>ListAliases</a> | <a>DescribeAlias</a> | <a>UpdateAlias</a> | <a>DeleteAlias</a> |
 * <a>ResolveAlias</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateAliasResponse * GameLiftClient::updateAlias(const UpdateAliasRequest &request)
{
    return qobject_cast<UpdateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates metadata in a build resource, including the build name and version. To update the metadata, specify the build ID
 * to update and provide the new values. If successful, a build object containing the updated metadata is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html"> Upload a Custom Server
 * Build</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateBuild</a> | <a>ListBuilds</a> | <a>DescribeBuild</a> | <a>UpdateBuild</a> | <a>DeleteBuild</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateBuildResponse * GameLiftClient::updateBuild(const UpdateBuildRequest &request)
{
    return qobject_cast<UpdateBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateFleetAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a fleet's mutable attributes, including game session protection and resource creation
 *
 * limits>
 *
 * To update fleet attributes, specify the fleet ID and the property values that you want to change.
 *
 * </p
 *
 * If successful, an updated <code>FleetAttributes</code> object is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>UpdateFleetAttributes</a> | <a>UpdateFleetCapacity</a> | <a>UpdateFleetPortSettings</a>
 * | <a>UpdateRuntimeConfiguration</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a>PutScalingPolicy</a> |
 * <a>DeleteFleet</a> | <a>DeleteFleetLocations</a> | <a>DeleteScalingPolicy</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateFleetAttributesResponse * GameLiftClient::updateFleetAttributes(const UpdateFleetAttributesRequest &request)
{
    return qobject_cast<UpdateFleetAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateFleetCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates capacity settings for a fleet. For fleets with multiple locations, use this operation to manage capacity
 * settings in each location individually. Fleet capacity determines the number of game sessions and players that can be
 * hosted based on the fleet configuration. Use this operation to set the following fleet capacity properties:
 *
 * </p <ul> <li>
 *
 * Minimum/maximum size: Set hard limits on fleet capacity. GameLift cannot set the fleet's capacity to a value outside of
 * this range, whether the capacity is changed manually or through automatic scaling.
 *
 * </p </li> <li>
 *
 * Desired capacity: Manually set the number of Amazon EC2 instances to be maintained in a fleet location. Before changing
 * a fleet's desired capacity, you may want to call <a>DescribeEC2InstanceLimits</a> to get the maximum capacity of the
 * fleet's Amazon EC2 instance type. Alternatively, consider using automatic scaling to adjust capacity based on player
 *
 * demand> </li> </ul>
 *
 * This operation can be used in the following ways:
 *
 * </p <ul> <li>
 *
 * To update capacity for a fleet's home Region, or if the fleet has no remote locations, omit the <code>Location</code>
 * parameter. The fleet must be in <code>ACTIVE</code> status.
 *
 * </p </li> <li>
 *
 * To update capacity for a fleet's remote location, include the <code>Location</code> parameter set to the location to be
 * updated. The location must be in <code>ACTIVE</code>
 *
 * status> </li> </ul>
 *
 * If successful, capacity settings are updated immediately. In response a change in desired capacity, GameLift initiates
 * steps to start new instances or terminate existing instances in the requested fleet location. This continues until the
 * location's active instance count matches the new desired instance count. You can track a fleet's current capacity by
 * calling <a>DescribeFleetCapacity</a> or <a>DescribeFleetLocationCapacity</a>. If the requested desired instance count is
 * higher than the instance type's limit, the <code>LimitExceeded</code> exception
 *
 * occurs>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-manage-capacity.html">Scaling fleet
 * capacity</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>UpdateFleetAttributes</a> | <a>UpdateFleetCapacity</a> | <a>UpdateFleetPortSettings</a>
 * | <a>UpdateRuntimeConfiguration</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a>PutScalingPolicy</a> |
 * <a>DeleteFleet</a> | <a>DeleteFleetLocations</a> | <a>DeleteScalingPolicy</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateFleetCapacityResponse * GameLiftClient::updateFleetCapacity(const UpdateFleetCapacityRequest &request)
{
    return qobject_cast<UpdateFleetCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateFleetPortSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates permissions that allow inbound traffic to connect to game sessions that are being hosted on instances in the
 * fleet.
 *
 * </p
 *
 * To update settings, specify the fleet ID to be updated and specify the changes to be made. List the permissions you want
 * to add in <code>InboundPermissionAuthorizations</code>, and permissions you want to remove in
 * <code>InboundPermissionRevocations</code>. Permissions to be removed must match existing fleet permissions.
 *
 * </p
 *
 * If successful, the fleet ID for the updated fleet is returned. For fleets with remote locations, port setting updates
 * can take time to propagate across all locations. You can check the status of updates in each location by calling
 * <code>DescribeFleetPortSettings</code> with a location
 *
 * name>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>UpdateFleetAttributes</a> | <a>UpdateFleetCapacity</a> | <a>UpdateFleetPortSettings</a>
 * | <a>UpdateRuntimeConfiguration</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a>PutScalingPolicy</a> |
 * <a>DeleteFleet</a> | <a>DeleteFleetLocations</a> | <a>DeleteScalingPolicy</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateFleetPortSettingsResponse * GameLiftClient::updateFleetPortSettings(const UpdateFleetPortSettingsRequest &request)
{
    return qobject_cast<UpdateFleetPortSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateGameServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Updates information about a registered game server to help GameLift FleetIQ to track game server availability. This
 * operation is called by a game server process that is running on an instance in a game server group.
 *
 * </p
 *
 * Use this operation to update the following types of game server information. You can make all three types of updates in
 * the same
 *
 * request> <ul> <li>
 *
 * To update the game server's utilization status, identify the game server and game server group and specify the current
 * utilization status. Use this status to identify when game servers are currently hosting games and when they are
 * available to be
 *
 * claimed> </li> <li>
 *
 * To report health status, identify the game server and game server group and set health check to <code>HEALTHY</code>. If
 * a game server does not report health status for a certain length of time, the game server is no longer considered
 * healthy. As a result, it will be eventually deregistered from the game server group to avoid affecting utilization
 * metrics. The best practice is to report health every 60
 *
 * seconds> </li> <li>
 *
 * To change game server metadata, provide updated game server
 *
 * data> </li> </ul>
 *
 * Once a game server is successfully updated, the relevant statuses and timestamps are
 *
 * updated>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>RegisterGameServer</a> | <a>ListGameServers</a> | <a>ClaimGameServer</a> | <a>DescribeGameServer</a> |
 * <a>UpdateGameServer</a> | <a>DeregisterGameServer</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
UpdateGameServerResponse * GameLiftClient::updateGameServer(const UpdateGameServerRequest &request)
{
    return qobject_cast<UpdateGameServerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateGameServerGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>This operation is used with the GameLift FleetIQ solution and game server groups.</b>
 *
 * </p
 *
 * Updates GameLift FleetIQ-specific properties for a game server group. Many Auto Scaling group properties are updated on
 * the Auto Scaling group directly, including the launch template, Auto Scaling policies, and maximum/minimum/desired
 * instance
 *
 * counts>
 *
 * To update the game server group, specify the game server group ID and provide the updated values. Before applying the
 * updates, the new values are validated to ensure that GameLift FleetIQ can continue to perform instance balancing
 * activity. If successful, a <a>GameServerGroup</a> object is
 *
 * returned>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift FleetIQ Guide</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameServerGroup</a> | <a>ListGameServerGroups</a> | <a>DescribeGameServerGroup</a> |
 * <a>UpdateGameServerGroup</a> | <a>DeleteGameServerGroup</a> | <a>ResumeGameServerGroup</a> |
 * <a>SuspendGameServerGroup</a> | <a>DescribeGameServerInstances</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/reference-awssdk-fleetiq.html">All APIs by task</a>
 */
UpdateGameServerGroupResponse * GameLiftClient::updateGameServerGroup(const UpdateGameServerGroupRequest &request)
{
    return qobject_cast<UpdateGameServerGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateGameSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the mutable properties of a game session.
 *
 * </p
 *
 * To update a game session, specify the game session ID and the values you want to change.
 *
 * </p
 *
 * If successful, the updated <code>GameSession</code> object is returned.
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateGameSession</a> | <a>DescribeGameSessions</a> | <a>DescribeGameSessionDetails</a> | <a>SearchGameSessions</a> |
 * <a>UpdateGameSession</a> | <a>GetGameSessionLogUrl</a> | <a>StartGameSessionPlacement</a> |
 * <a>DescribeGameSessionPlacement</a> | <a>StopGameSessionPlacement</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateGameSessionResponse * GameLiftClient::updateGameSession(const UpdateGameSessionRequest &request)
{
    return qobject_cast<UpdateGameSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateGameSessionQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of a game session queue, which determines how the queue processes new game session requests.
 * To update settings, specify the queue name to be updated and provide the new settings. When updating destinations,
 * provide a complete list of destinations.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html"> Using Multi-Region Queues</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateGameSessionQueue.html">CreateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionQueues.html">DescribeGameSessionQueues</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSessionQueue.html">UpdateGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteGameSessionQueue.html">DeleteGameSessionQueue</a>
 * | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateGameSessionQueueResponse * GameLiftClient::updateGameSessionQueue(const UpdateGameSessionQueueRequest &request)
{
    return qobject_cast<UpdateGameSessionQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateMatchmakingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates settings for a FlexMatch matchmaking configuration. These changes affect all matches and game sessions that are
 * created after the update. To update settings, specify the configuration name to be updated and provide the new settings.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html"> Design a FlexMatch
 * matchmaker</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateMatchmakingConfigurationResponse * GameLiftClient::updateMatchmakingConfiguration(const UpdateMatchmakingConfigurationRequest &request)
{
    return qobject_cast<UpdateMatchmakingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateRuntimeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the current runtime configuration for the specified fleet, which tells GameLift how to launch server processes
 * on all instances in the fleet. You can update a fleet's runtime configuration at any time after the fleet is created; it
 * does not need to be in <code>ACTIVE</code>
 *
 * status>
 *
 * To update runtime configuration, specify the fleet ID and provide a <code>RuntimeConfiguration</code> with an updated
 * set of server process
 *
 * configurations>
 *
 * If successful, the fleet's runtime configuration settings are updated. Each instance in the fleet regularly checks for
 * and retrieves updated runtime configurations. Instances immediately begin complying with the new configuration by
 * launching new server processes or not replacing existing processes when they shut down. Updating a fleet's runtime
 * configuration never affects existing server
 *
 * processes>
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting up GameLift fleets</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateFleetLocations</a> | <a>UpdateFleetAttributes</a> | <a>UpdateFleetCapacity</a> | <a>UpdateFleetPortSettings</a>
 * | <a>UpdateRuntimeConfiguration</a> | <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a>PutScalingPolicy</a> |
 * <a>DeleteFleet</a> | <a>DeleteFleetLocations</a> | <a>DeleteScalingPolicy</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateRuntimeConfigurationResponse * GameLiftClient::updateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest &request)
{
    return qobject_cast<UpdateRuntimeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * UpdateScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates Realtime script metadata and
 *
 * content>
 *
 * To update script metadata, specify the script ID and provide updated name and/or version values.
 *
 * </p
 *
 * To update script content, provide an updated zip file by pointing to either a local file or an Amazon S3 bucket
 * location. You can use either method regardless of how the original script was uploaded. Use the <i>Version</i> parameter
 * to track updates to the
 *
 * script>
 *
 * If the call is successful, the updated metadata is stored in the script record and a revised script is uploaded to the
 * Amazon GameLift service. Once the script is updated and acquired by a fleet instance, the new version is used for all
 * new game sessions.
 *
 * </p
 *
 * <b>Learn more</b>
 *
 * </p
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon GameLift Realtime
 * Servers</a>
 *
 * </p
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateScript</a> | <a>ListScripts</a> | <a>DescribeScript</a> | <a>UpdateScript</a> | <a>DeleteScript</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
UpdateScriptResponse * GameLiftClient::updateScript(const UpdateScriptRequest &request)
{
    return qobject_cast<UpdateScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GameLiftClient service, and returns a pointer to an
 * ValidateMatchmakingRuleSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates the syntax of a matchmaking rule or rule set. This operation checks that the rule set is using syntactically
 * correct JSON and that it conforms to allowed property expressions. To validate syntax, provide a rule set JSON
 *
 * string>
 *
 * <b>Learn more</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build a rule set</a>
 *
 * </p </li> </ul>
 *
 * <b>Related actions</b>
 *
 * </p
 *
 * <a>CreateMatchmakingConfiguration</a> | <a>DescribeMatchmakingConfigurations</a> | <a>UpdateMatchmakingConfiguration</a>
 * | <a>DeleteMatchmakingConfiguration</a> | <a>CreateMatchmakingRuleSet</a> | <a>DescribeMatchmakingRuleSets</a> |
 * <a>ValidateMatchmakingRuleSet</a> | <a>DeleteMatchmakingRuleSet</a> | <a
 * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
 * APIs by task</a>
 */
ValidateMatchmakingRuleSetResponse * GameLiftClient::validateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest &request)
{
    return qobject_cast<ValidateMatchmakingRuleSetResponse *>(send(request));
}

/*!
 * \class QtAws::GameLift::GameLiftClientPrivate
 * \brief The GameLiftClientPrivate class provides private implementation for GameLiftClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a GameLiftClientPrivate object with public implementation \a q.
 */
GameLiftClientPrivate::GameLiftClientPrivate(GameLiftClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GameLift
} // namespace QtAws
