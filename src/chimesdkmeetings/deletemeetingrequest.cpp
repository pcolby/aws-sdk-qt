// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemeetingrequest.h"
#include "deletemeetingrequest_p.h"
#include "deletemeetingresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteMeetingRequest
 * \brief The DeleteMeetingRequest class provides an interface for ChimeSdkMeetings DeleteMeeting requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::deleteMeeting
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMeetingRequest::DeleteMeetingRequest(const DeleteMeetingRequest &other)
    : ChimeSdkMeetingsRequest(new DeleteMeetingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMeetingRequest object.
 */
DeleteMeetingRequest::DeleteMeetingRequest()
    : ChimeSdkMeetingsRequest(new DeleteMeetingRequestPrivate(ChimeSdkMeetingsRequest::DeleteMeetingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMeetingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMeetingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMeetingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMeetingResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteMeetingRequestPrivate
 * \brief The DeleteMeetingRequestPrivate class provides private implementation for DeleteMeetingRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a DeleteMeetingRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
DeleteMeetingRequestPrivate::DeleteMeetingRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, DeleteMeetingRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMeetingRequest
 * class' copy constructor.
 */
DeleteMeetingRequestPrivate::DeleteMeetingRequestPrivate(
    const DeleteMeetingRequestPrivate &other, DeleteMeetingRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
