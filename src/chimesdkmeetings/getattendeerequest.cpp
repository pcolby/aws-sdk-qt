// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getattendeerequest.h"
#include "getattendeerequest_p.h"
#include "getattendeeresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::GetAttendeeRequest
 * \brief The GetAttendeeRequest class provides an interface for ChimeSdkMeetings GetAttendee requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::getAttendee
 */

/*!
 * Constructs a copy of \a other.
 */
GetAttendeeRequest::GetAttendeeRequest(const GetAttendeeRequest &other)
    : ChimeSdkMeetingsRequest(new GetAttendeeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAttendeeRequest object.
 */
GetAttendeeRequest::GetAttendeeRequest()
    : ChimeSdkMeetingsRequest(new GetAttendeeRequestPrivate(ChimeSdkMeetingsRequest::GetAttendeeAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttendeeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAttendeeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttendeeRequest::response(QNetworkReply * const reply) const
{
    return new GetAttendeeResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::GetAttendeeRequestPrivate
 * \brief The GetAttendeeRequestPrivate class provides private implementation for GetAttendeeRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a GetAttendeeRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
GetAttendeeRequestPrivate::GetAttendeeRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, GetAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAttendeeRequest
 * class' copy constructor.
 */
GetAttendeeRequestPrivate::GetAttendeeRequestPrivate(
    const GetAttendeeRequestPrivate &other, GetAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
