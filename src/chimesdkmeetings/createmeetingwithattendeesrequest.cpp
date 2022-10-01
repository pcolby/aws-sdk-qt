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

#include "createmeetingwithattendeesrequest.h"
#include "createmeetingwithattendeesrequest_p.h"
#include "createmeetingwithattendeesresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingWithAttendeesRequest
 * \brief The CreateMeetingWithAttendeesRequest class provides an interface for ChimeSdkMeetings CreateMeetingWithAttendees requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::createMeetingWithAttendees
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMeetingWithAttendeesRequest::CreateMeetingWithAttendeesRequest(const CreateMeetingWithAttendeesRequest &other)
    : ChimeSdkMeetingsRequest(new CreateMeetingWithAttendeesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMeetingWithAttendeesRequest object.
 */
CreateMeetingWithAttendeesRequest::CreateMeetingWithAttendeesRequest()
    : ChimeSdkMeetingsRequest(new CreateMeetingWithAttendeesRequestPrivate(ChimeSdkMeetingsRequest::CreateMeetingWithAttendeesAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMeetingWithAttendeesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMeetingWithAttendeesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMeetingWithAttendeesRequest::response(QNetworkReply * const reply) const
{
    return new CreateMeetingWithAttendeesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingWithAttendeesRequestPrivate
 * \brief The CreateMeetingWithAttendeesRequestPrivate class provides private implementation for CreateMeetingWithAttendeesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a CreateMeetingWithAttendeesRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
CreateMeetingWithAttendeesRequestPrivate::CreateMeetingWithAttendeesRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, CreateMeetingWithAttendeesRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMeetingWithAttendeesRequest
 * class' copy constructor.
 */
CreateMeetingWithAttendeesRequestPrivate::CreateMeetingWithAttendeesRequestPrivate(
    const CreateMeetingWithAttendeesRequestPrivate &other, CreateMeetingWithAttendeesRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
