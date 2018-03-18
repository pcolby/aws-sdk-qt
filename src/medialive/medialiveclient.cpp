/*
    Copyright 2013-2018 Paul Colby

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

#include "medialiveclient.h"
#include "medialiveclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MediaLive {

/**
 * @class  MediaLiveClient
 *
 * @brief  Client for AWS Elemental MediaLive
 *
 */

/**
 * @brief  Constructs a new MediaLiveClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MediaLiveClient::MediaLiveClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new MediaLiveClient object.
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
MediaLiveClient::MediaLiveClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 */
CreateChannelResponse * MediaLiveClient::createChannel(const CreateChannelRequest &request)
{

}

/**
 */
CreateInputResponse * MediaLiveClient::createInput(const CreateInputRequest &request)
{

}

/**
 */
CreateInputSecurityGroupResponse * MediaLiveClient::createInputSecurityGroup(const CreateInputSecurityGroupRequest &request)
{

}

/**
 */
DeleteChannelResponse * MediaLiveClient::deleteChannel(const DeleteChannelRequest &request)
{

}

/**
 */
DeleteInputResponse * MediaLiveClient::deleteInput(const DeleteInputRequest &request)
{

}

/**
 */
DeleteInputSecurityGroupResponse * MediaLiveClient::deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request)
{

}

/**
 */
DescribeChannelResponse * MediaLiveClient::describeChannel(const DescribeChannelRequest &request)
{

}

/**
 */
DescribeInputResponse * MediaLiveClient::describeInput(const DescribeInputRequest &request)
{

}

/**
 */
DescribeInputSecurityGroupResponse * MediaLiveClient::describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request)
{

}

/**
 */
ListChannelsResponse * MediaLiveClient::listChannels(const ListChannelsRequest &request)
{

}

/**
 */
ListInputSecurityGroupsResponse * MediaLiveClient::listInputSecurityGroups(const ListInputSecurityGroupsRequest &request)
{

}

/**
 */
ListInputsResponse * MediaLiveClient::listInputs(const ListInputsRequest &request)
{

}

/**
 */
StartChannelResponse * MediaLiveClient::startChannel(const StartChannelRequest &request)
{

}

/**
 */
StopChannelResponse * MediaLiveClient::stopChannel(const StopChannelRequest &request)
{

}

/**
 */
UpdateChannelResponse * MediaLiveClient::updateChannel(const UpdateChannelRequest &request)
{

}

/**
 * @internal
 *
 * @class  MediaLiveClientPrivate
 *
 * @brief  Private implementation for MediaLiveClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaLiveClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaLiveClient instance.
 */
MediaLiveClientPrivate::MediaLiveClientPrivate(MediaLiveClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MediaLive
} // namespace AWS
