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
    d->serviceName = QStringLiteral("medialive");
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
    d->serviceName = QStringLiteral("medialive");
}

/// @todo override getEndpoint() to use medialive.

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateChannelResponse * MediaLiveClient::createChannel(const CreateChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInputResponse * MediaLiveClient::createInput(const CreateInputRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInputSecurityGroupResponse * MediaLiveClient::createInputSecurityGroup(const CreateInputSecurityGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteChannelResponse * MediaLiveClient::deleteChannel(const DeleteChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInputResponse * MediaLiveClient::deleteInput(const DeleteInputRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInputSecurityGroupResponse * MediaLiveClient::deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeChannelResponse * MediaLiveClient::describeChannel(const DescribeChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInputResponse * MediaLiveClient::describeInput(const DescribeInputRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInputSecurityGroupResponse * MediaLiveClient::describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListChannelsResponse * MediaLiveClient::listChannels(const ListChannelsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInputSecurityGroupsResponse * MediaLiveClient::listInputSecurityGroups(const ListInputSecurityGroupsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInputsResponse * MediaLiveClient::listInputs(const ListInputsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartChannelResponse * MediaLiveClient::startChannel(const StartChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopChannelResponse * MediaLiveClient::stopChannel(const StopChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
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
