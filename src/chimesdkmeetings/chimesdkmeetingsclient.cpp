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

#include "chimesdkmeetingsclient.h"
#include "chimesdkmeetingsclient_p.h"

#include "core/awssignaturev4.h"
#include "batchcreateattendeerequest.h"
#include "batchcreateattendeeresponse.h"
#include "batchupdateattendeecapabilitiesexceptrequest.h"
#include "batchupdateattendeecapabilitiesexceptresponse.h"
#include "createattendeerequest.h"
#include "createattendeeresponse.h"
#include "createmeetingrequest.h"
#include "createmeetingresponse.h"
#include "createmeetingwithattendeesrequest.h"
#include "createmeetingwithattendeesresponse.h"
#include "deleteattendeerequest.h"
#include "deleteattendeeresponse.h"
#include "deletemeetingrequest.h"
#include "deletemeetingresponse.h"
#include "getattendeerequest.h"
#include "getattendeeresponse.h"
#include "getmeetingrequest.h"
#include "getmeetingresponse.h"
#include "listattendeesrequest.h"
#include "listattendeesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startmeetingtranscriptionrequest.h"
#include "startmeetingtranscriptionresponse.h"
#include "stopmeetingtranscriptionrequest.h"
#include "stopmeetingtranscriptionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateattendeecapabilitiesrequest.h"
#include "updateattendeecapabilitiesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ChimeSdkMeetings
 * \brief Contains classess for accessing Amazon Chime SDK Meetings.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsClient
 * \brief The ChimeSdkMeetingsClient class provides access to the Amazon Chime SDK Meetings service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 */

/*!
 * \brief Constructs a ChimeSdkMeetingsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeSdkMeetingsClient::ChimeSdkMeetingsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMeetingsClientPrivate(this), parent)
{
    Q_D(ChimeSdkMeetingsClient);
    d->apiVersion = QStringLiteral("2021-07-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("meetings-chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Meetings");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeSdkMeetingsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeSdkMeetingsClient::ChimeSdkMeetingsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMeetingsClientPrivate(this), parent)
{
    Q_D(ChimeSdkMeetingsClient);
    d->apiVersion = QStringLiteral("2021-07-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("meetings-chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Meetings");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * BatchCreateAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates up to 100 attendees for an active Amazon Chime SDK meeting. For more information about the Amazon Chime SDK, see
 * <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
BatchCreateAttendeeResponse * ChimeSdkMeetingsClient::batchCreateAttendee(const BatchCreateAttendeeRequest &request)
{
    return qobject_cast<BatchCreateAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * BatchUpdateAttendeeCapabilitiesExceptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates <code>AttendeeCapabilities</code> except the capabilities listed in an <code>ExcludedAttendeeIds</code>
 *
 * table> <note>
 *
 * You use the capabilities with a set of values that control what the capabilities can do, such as
 * <code>SendReceive</code> data. For more information about those values, see
 *
 * > </note>
 *
 * When using capabilities, be aware of these corner
 *
 * cases> <ul> <li>
 *
 * You can't set <code>content</code> capabilities to <code>SendReceive</code> or <code>Receive</code> unless you also set
 * <code>video</code> capabilities to <code>SendReceive</code> or <code>Receive</code>. If you don't set the
 * <code>video</code> capability to receive, the response will contain an HTTP 400 Bad Request status code. However, you
 * can set your <code>video</code> capability to receive and you set your <code>content</code> capability to not
 *
 * receive> </li> <li>
 *
 * When you change an <code>audio</code> capability from <code>None</code> or <code>Receive</code> to <code>Send</code> or
 * <code>SendReceive</code> , and if the attendee left their microphone unmuted, audio will flow from the attendee to the
 * other meeting
 *
 * participants> </li> <li>
 *
 * When you change a <code>video</code> or <code>content</code> capability from <code>None</code> or <code>Receive</code>
 * to <code>Send</code> or <code>SendReceive</code> , and if the attendee turned on their video or content streams, remote
 * attendess can receive those streams, but only after media renegotiation between the client and the Amazon Chime back-end
 */
BatchUpdateAttendeeCapabilitiesExceptResponse * ChimeSdkMeetingsClient::batchUpdateAttendeeCapabilitiesExcept(const BatchUpdateAttendeeCapabilitiesExceptRequest &request)
{
    return qobject_cast<BatchUpdateAttendeeCapabilitiesExceptResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * CreateAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new attendee for an active Amazon Chime SDK meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
CreateAttendeeResponse * ChimeSdkMeetingsClient::createAttendee(const CreateAttendeeRequest &request)
{
    return qobject_cast<CreateAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * CreateMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Chime SDK meeting in the specified media Region with no initial attendees. For more information
 * about specifying media Regions, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon Chime SDK Media Regions</a> in
 * the <i>Amazon Chime Developer Guide</i>. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
CreateMeetingResponse * ChimeSdkMeetingsClient::createMeeting(const CreateMeetingRequest &request)
{
    return qobject_cast<CreateMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * CreateMeetingWithAttendeesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Chime SDK meeting in the specified media Region, with attendees. For more information about
 * specifying media Regions, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon Chime SDK Media Regions</a> in
 * the <i>Amazon Chime Developer Guide</i>. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
CreateMeetingWithAttendeesResponse * ChimeSdkMeetingsClient::createMeetingWithAttendees(const CreateMeetingWithAttendeesRequest &request)
{
    return qobject_cast<CreateMeetingWithAttendeesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * DeleteAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an attendee from the specified Amazon Chime SDK meeting and deletes their <code>JoinToken</code>. Attendees are
 * automatically deleted when a Amazon Chime SDK meeting is deleted. For more information about the Amazon Chime SDK, see
 * <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
DeleteAttendeeResponse * ChimeSdkMeetingsClient::deleteAttendee(const DeleteAttendeeRequest &request)
{
    return qobject_cast<DeleteAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * DeleteMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime SDK meeting. The operation deletes all attendees, disconnects all clients, and
 * prevents new clients from joining the meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
DeleteMeetingResponse * ChimeSdkMeetingsClient::deleteMeeting(const DeleteMeetingRequest &request)
{
    return qobject_cast<DeleteMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * GetAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Amazon Chime SDK attendee details for a specified meeting ID and attendee ID. For more information about the
 * Amazon Chime SDK, see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime
 * SDK</a> in the <i>Amazon Chime Developer Guide</i>.
 */
GetAttendeeResponse * ChimeSdkMeetingsClient::getAttendee(const GetAttendeeRequest &request)
{
    return qobject_cast<GetAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * GetMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Amazon Chime SDK meeting details for the specified meeting ID. For more information about the Amazon Chime SDK,
 * see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the
 * <i>Amazon Chime Developer
 */
GetMeetingResponse * ChimeSdkMeetingsClient::getMeeting(const GetMeetingRequest &request)
{
    return qobject_cast<GetMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * ListAttendeesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the attendees for the specified Amazon Chime SDK meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
ListAttendeesResponse * ChimeSdkMeetingsClient::listAttendees(const ListAttendeesRequest &request)
{
    return qobject_cast<ListAttendeesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags available for the specified
 */
ListTagsForResourceResponse * ChimeSdkMeetingsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * StartMeetingTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts transcription for the specified
 */
StartMeetingTranscriptionResponse * ChimeSdkMeetingsClient::startMeetingTranscription(const StartMeetingTranscriptionRequest &request)
{
    return qobject_cast<StartMeetingTranscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * StopMeetingTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops transcription for the specified
 */
StopMeetingTranscriptionResponse * ChimeSdkMeetingsClient::stopMeetingTranscription(const StopMeetingTranscriptionRequest &request)
{
    return qobject_cast<StopMeetingTranscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The resource that supports
 */
TagResourceResponse * ChimeSdkMeetingsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified resources. When you specify a tag key, the action removes both that key
 * and its associated value. The operation succeeds even if you attempt to remove tags from a resource that were already
 * removed. Note the
 *
 * following> <ul> <li>
 *
 * To remove tags from a resource, you need the necessary permissions for the service that the resource belongs to as well
 * as permissions for removing tags. For more information, see the documentation for the service whose resource you want to
 *
 * untag> </li> <li>
 *
 * You can only tag resources that are located in the specified AWS Region for the calling AWS
 *
 * account> </li> </ul>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * In addition to the <code>tag:UntagResources</code> permission required by this operation, you must also have the remove
 * tags permission defined by the service that created the resource. For example, to remove the tags from an Amazon EC2
 * instance using the <code>UntagResources</code> operation, you must have both of the following
 *
 * permissions>
 *
 * <code>tag:UntagResource</code>
 *
 * </p
 *
 * <code>ChimeSDKMeetings:DeleteTags</code>
 */
UntagResourceResponse * ChimeSdkMeetingsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMeetingsClient service, and returns a pointer to an
 * UpdateAttendeeCapabilitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The capabilties that you want to
 *
 * update> <note>
 *
 * You use the capabilities with a set of values that control what the capabilities can do, such as
 * <code>SendReceive</code> data. For more information about those values, see
 *
 * > </note>
 *
 * When using capabilities, be aware of these corner
 *
 * cases> <ul> <li>
 *
 * You can't set <code>content</code> capabilities to <code>SendReceive</code> or <code>Receive</code> unless you also set
 * <code>video</code> capabilities to <code>SendReceive</code> or <code>Receive</code>. If you don't set the
 * <code>video</code> capability to receive, the response will contain an HTTP 400 Bad Request status code. However, you
 * can set your <code>video</code> capability to receive and you set your <code>content</code> capability to not
 *
 * receive> </li> <li>
 *
 * When you change an <code>audio</code> capability from <code>None</code> or <code>Receive</code> to <code>Send</code> or
 * <code>SendReceive</code> , and if the attendee left their microphone unmuted, audio will flow from the attendee to the
 * other meeting
 *
 * participants> </li> <li>
 *
 * When you change a <code>video</code> or <code>content</code> capability from <code>None</code> or <code>Receive</code>
 * to <code>Send</code> or <code>SendReceive</code> , and if the attendee turned on their video or content streams, remote
 * attendess can receive those streams, but only after media renegotiation between the client and the Amazon Chime back-end
 */
UpdateAttendeeCapabilitiesResponse * ChimeSdkMeetingsClient::updateAttendeeCapabilities(const UpdateAttendeeCapabilitiesRequest &request)
{
    return qobject_cast<UpdateAttendeeCapabilitiesResponse *>(send(request));
}

/*!
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsClientPrivate
 * \brief The ChimeSdkMeetingsClientPrivate class provides private implementation for ChimeSdkMeetingsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ChimeSdkMeetingsClientPrivate object with public implementation \a q.
 */
ChimeSdkMeetingsClientPrivate::ChimeSdkMeetingsClientPrivate(ChimeSdkMeetingsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
