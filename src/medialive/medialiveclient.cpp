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

#include "medialiveclient.h"
#include "medialiveclient_p.h"

#include "core/awssignaturev4.h"
#include "batchupdateschedulerequest.h"
#include "batchupdatescheduleresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createinputrequest.h"
#include "createinputresponse.h"
#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygroupresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deleteinputrequest.h"
#include "deleteinputresponse.h"
#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygroupresponse.h"
#include "deletereservationrequest.h"
#include "deletereservationresponse.h"
#include "deleteschedulerequest.h"
#include "deletescheduleresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describeinputrequest.h"
#include "describeinputresponse.h"
#include "describeinputsecuritygrouprequest.h"
#include "describeinputsecuritygroupresponse.h"
#include "describeofferingrequest.h"
#include "describeofferingresponse.h"
#include "describereservationrequest.h"
#include "describereservationresponse.h"
#include "describeschedulerequest.h"
#include "describescheduleresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsresponse.h"
#include "listinputsrequest.h"
#include "listinputsresponse.h"
#include "listofferingsrequest.h"
#include "listofferingsresponse.h"
#include "listreservationsrequest.h"
#include "listreservationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "purchaseofferingrequest.h"
#include "purchaseofferingresponse.h"
#include "startchannelrequest.h"
#include "startchannelresponse.h"
#include "stopchannelrequest.h"
#include "stopchannelresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatechannelclassrequest.h"
#include "updatechannelclassresponse.h"
#include "updateinputrequest.h"
#include "updateinputresponse.h"
#include "updateinputsecuritygrouprequest.h"
#include "updateinputsecuritygroupresponse.h"
#include "updatereservationrequest.h"
#include "updatereservationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaLive
 * \brief Contains classess for accessing AWS Elemental MediaLive.
 *
 * \inmodule QtAwsMediaLive
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::MediaLiveClient
 * \brief The MediaLiveClient class provides access to the AWS Elemental MediaLive service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaLive
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * BatchUpdateScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
BatchUpdateScheduleResponse * MediaLiveClient::batchUpdateSchedule(const BatchUpdateScheduleRequest &request)
{
    return qobject_cast<BatchUpdateScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateChannelResponse * MediaLiveClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateInputResponse * MediaLiveClient::createInput(const CreateInputRequest &request)
{
    return qobject_cast<CreateInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateInputSecurityGroupResponse * MediaLiveClient::createInputSecurityGroup(const CreateInputSecurityGroupRequest &request)
{
    return qobject_cast<CreateInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateTagsResponse * MediaLiveClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteChannelResponse * MediaLiveClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInputResponse * MediaLiveClient::deleteInput(const DeleteInputRequest &request)
{
    return qobject_cast<DeleteInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInputSecurityGroupResponse * MediaLiveClient::deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request)
{
    return qobject_cast<DeleteInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteReservationResponse * MediaLiveClient::deleteReservation(const DeleteReservationRequest &request)
{
    return qobject_cast<DeleteReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteScheduleResponse * MediaLiveClient::deleteSchedule(const DeleteScheduleRequest &request)
{
    return qobject_cast<DeleteScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteTagsResponse * MediaLiveClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeChannelResponse * MediaLiveClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputResponse * MediaLiveClient::describeInput(const DescribeInputRequest &request)
{
    return qobject_cast<DescribeInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputSecurityGroupResponse * MediaLiveClient::describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request)
{
    return qobject_cast<DescribeInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeOfferingResponse * MediaLiveClient::describeOffering(const DescribeOfferingRequest &request)
{
    return qobject_cast<DescribeOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeReservationResponse * MediaLiveClient::describeReservation(const DescribeReservationRequest &request)
{
    return qobject_cast<DescribeReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeScheduleResponse * MediaLiveClient::describeSchedule(const DescribeScheduleRequest &request)
{
    return qobject_cast<DescribeScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListChannelsResponse * MediaLiveClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInputSecurityGroupsResponse * MediaLiveClient::listInputSecurityGroups(const ListInputSecurityGroupsRequest &request)
{
    return qobject_cast<ListInputSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInputsResponse * MediaLiveClient::listInputs(const ListInputsRequest &request)
{
    return qobject_cast<ListInputsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListOfferingsResponse * MediaLiveClient::listOfferings(const ListOfferingsRequest &request)
{
    return qobject_cast<ListOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListReservationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListReservationsResponse * MediaLiveClient::listReservations(const ListReservationsRequest &request)
{
    return qobject_cast<ListReservationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * MediaLiveClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * PurchaseOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PurchaseOfferingResponse * MediaLiveClient::purchaseOffering(const PurchaseOfferingRequest &request)
{
    return qobject_cast<PurchaseOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StartChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartChannelResponse * MediaLiveClient::startChannel(const StartChannelRequest &request)
{
    return qobject_cast<StartChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StopChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StopChannelResponse * MediaLiveClient::stopChannel(const StopChannelRequest &request)
{
    return qobject_cast<StopChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateChannelResponse * MediaLiveClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateChannelClassResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateChannelClassResponse * MediaLiveClient::updateChannelClass(const UpdateChannelClassRequest &request)
{
    return qobject_cast<UpdateChannelClassResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInputResponse * MediaLiveClient::updateInput(const UpdateInputRequest &request)
{
    return qobject_cast<UpdateInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInputSecurityGroupResponse * MediaLiveClient::updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request)
{
    return qobject_cast<UpdateInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateReservationResponse * MediaLiveClient::updateReservation(const UpdateReservationRequest &request)
{
    return qobject_cast<UpdateReservationResponse *>(send(request));
}

/*!
 * \class QtAws::MediaLive::MediaLiveClientPrivate
 * \brief The MediaLiveClientPrivate class provides private implementation for MediaLiveClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a MediaLiveClientPrivate object with public implementation \a q.
 */
MediaLiveClientPrivate::MediaLiveClientPrivate(MediaLiveClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaLive
} // namespace QtAws
