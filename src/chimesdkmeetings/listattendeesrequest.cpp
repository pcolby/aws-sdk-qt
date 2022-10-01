// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattendeesrequest.h"
#include "listattendeesrequest_p.h"
#include "listattendeesresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::ListAttendeesRequest
 * \brief The ListAttendeesRequest class provides an interface for ChimeSdkMeetings ListAttendees requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::listAttendees
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttendeesRequest::ListAttendeesRequest(const ListAttendeesRequest &other)
    : ChimeSdkMeetingsRequest(new ListAttendeesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttendeesRequest object.
 */
ListAttendeesRequest::ListAttendeesRequest()
    : ChimeSdkMeetingsRequest(new ListAttendeesRequestPrivate(ChimeSdkMeetingsRequest::ListAttendeesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttendeesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttendeesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttendeesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttendeesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::ListAttendeesRequestPrivate
 * \brief The ListAttendeesRequestPrivate class provides private implementation for ListAttendeesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ListAttendeesRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
ListAttendeesRequestPrivate::ListAttendeesRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, ListAttendeesRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttendeesRequest
 * class' copy constructor.
 */
ListAttendeesRequestPrivate::ListAttendeesRequestPrivate(
    const ListAttendeesRequestPrivate &other, ListAttendeesRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
