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

#include "medialiveclient.h"
#include "medialiveclient_p.h"

#include "core/awssignaturev4.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createinputrequest.h"
#include "createinputresponse.h"
#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygroupresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deleteinputrequest.h"
#include "deleteinputresponse.h"
#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygroupresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describeinputrequest.h"
#include "describeinputresponse.h"
#include "describeinputsecuritygrouprequest.h"
#include "describeinputsecuritygroupresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsresponse.h"
#include "listinputsrequest.h"
#include "listinputsresponse.h"
#include "startchannelrequest.h"
#include "startchannelresponse.h"
#include "stopchannelrequest.h"
#include "stopchannelresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updateinputrequest.h"
#include "updateinputresponse.h"
#include "updateinputsecuritygrouprequest.h"
#include "updateinputsecuritygroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaLive
 * \brief The QtAws::MediaLive contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::MediaLiveClient
 *
 * \brief The MediaLiveClient class provides access to the AWS Elemental MediaLive service.
 *
 * \ingroup MediaLive
 *
 */

/*!
 * \brief Constructs a MediaLiveClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaLiveClient::MediaLiveClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->apiVersion = QStringLiteral("2017-10-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("medialive");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaLive");
    d->serviceName = QStringLiteral("medialive");
}

/*!
 * \overload MediaLiveClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
MediaLiveClient::MediaLiveClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->apiVersion = QStringLiteral("2017-10-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("medialive");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaLive");
    d->serviceName = QStringLiteral("medialive");
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateChannelResponse * MediaLiveClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInputResponse * MediaLiveClient::createInput(const CreateInputRequest &request)
{
    return qobject_cast<CreateInputResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInputSecurityGroupResponse * MediaLiveClient::createInputSecurityGroup(const CreateInputSecurityGroupRequest &request)
{
    return qobject_cast<CreateInputSecurityGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteChannelResponse * MediaLiveClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInputResponse * MediaLiveClient::deleteInput(const DeleteInputRequest &request)
{
    return qobject_cast<DeleteInputResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInputSecurityGroupResponse * MediaLiveClient::deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request)
{
    return qobject_cast<DeleteInputSecurityGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeChannelResponse * MediaLiveClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInputResponse * MediaLiveClient::describeInput(const DescribeInputRequest &request)
{
    return qobject_cast<DescribeInputResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInputSecurityGroupResponse * MediaLiveClient::describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request)
{
    return qobject_cast<DescribeInputSecurityGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListChannelsResponse * MediaLiveClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInputSecurityGroupsResponse * MediaLiveClient::listInputSecurityGroups(const ListInputSecurityGroupsRequest &request)
{
    return qobject_cast<ListInputSecurityGroupsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInputsResponse * MediaLiveClient::listInputs(const ListInputsRequest &request)
{
    return qobject_cast<ListInputsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartChannelResponse * MediaLiveClient::startChannel(const StartChannelRequest &request)
{
    return qobject_cast<StartChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopChannelResponse * MediaLiveClient::stopChannel(const StopChannelRequest &request)
{
    return qobject_cast<StopChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateChannelResponse * MediaLiveClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateInputResponse * MediaLiveClient::updateInput(const UpdateInputRequest &request)
{
    return qobject_cast<UpdateInputResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Elemental MediaLive.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateInputSecurityGroupResponse * MediaLiveClient::updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request)
{
    return qobject_cast<UpdateInputSecurityGroupResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  MediaLiveClientPrivate
 *
 * @brief  Private implementation for MediaLiveClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new MediaLiveClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaLiveClient instance.
 */
MediaLiveClientPrivate::MediaLiveClientPrivate(MediaLiveClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaLive
} // namespace QtAws
