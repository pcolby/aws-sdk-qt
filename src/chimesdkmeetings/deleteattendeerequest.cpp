// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteattendeerequest.h"
#include "deleteattendeerequest_p.h"
#include "deleteattendeeresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteAttendeeRequest
 * \brief The DeleteAttendeeRequest class provides an interface for ChimeSdkMeetings DeleteAttendee requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::deleteAttendee
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAttendeeRequest::DeleteAttendeeRequest(const DeleteAttendeeRequest &other)
    : ChimeSdkMeetingsRequest(new DeleteAttendeeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAttendeeRequest object.
 */
DeleteAttendeeRequest::DeleteAttendeeRequest()
    : ChimeSdkMeetingsRequest(new DeleteAttendeeRequestPrivate(ChimeSdkMeetingsRequest::DeleteAttendeeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAttendeeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAttendeeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAttendeeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAttendeeResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteAttendeeRequestPrivate
 * \brief The DeleteAttendeeRequestPrivate class provides private implementation for DeleteAttendeeRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a DeleteAttendeeRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
DeleteAttendeeRequestPrivate::DeleteAttendeeRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, DeleteAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAttendeeRequest
 * class' copy constructor.
 */
DeleteAttendeeRequestPrivate::DeleteAttendeeRequestPrivate(
    const DeleteAttendeeRequestPrivate &other, DeleteAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
