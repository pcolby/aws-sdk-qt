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

#include "batchcreateattendeerequest.h"
#include "batchcreateattendeerequest_p.h"
#include "batchcreateattendeeresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::BatchCreateAttendeeRequest
 * \brief The BatchCreateAttendeeRequest class provides an interface for ChimeSdkMeetings BatchCreateAttendee requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::batchCreateAttendee
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCreateAttendeeRequest::BatchCreateAttendeeRequest(const BatchCreateAttendeeRequest &other)
    : ChimeSdkMeetingsRequest(new BatchCreateAttendeeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCreateAttendeeRequest object.
 */
BatchCreateAttendeeRequest::BatchCreateAttendeeRequest()
    : ChimeSdkMeetingsRequest(new BatchCreateAttendeeRequestPrivate(ChimeSdkMeetingsRequest::BatchCreateAttendeeAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCreateAttendeeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCreateAttendeeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCreateAttendeeRequest::response(QNetworkReply * const reply) const
{
    return new BatchCreateAttendeeResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::BatchCreateAttendeeRequestPrivate
 * \brief The BatchCreateAttendeeRequestPrivate class provides private implementation for BatchCreateAttendeeRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a BatchCreateAttendeeRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
BatchCreateAttendeeRequestPrivate::BatchCreateAttendeeRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, BatchCreateAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCreateAttendeeRequest
 * class' copy constructor.
 */
BatchCreateAttendeeRequestPrivate::BatchCreateAttendeeRequestPrivate(
    const BatchCreateAttendeeRequestPrivate &other, BatchCreateAttendeeRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
