// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmeetingrequest.h"
#include "getmeetingrequest_p.h"
#include "getmeetingresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::GetMeetingRequest
 * \brief The GetMeetingRequest class provides an interface for ChimeSdkMeetings GetMeeting requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::getMeeting
 */

/*!
 * Constructs a copy of \a other.
 */
GetMeetingRequest::GetMeetingRequest(const GetMeetingRequest &other)
    : ChimeSdkMeetingsRequest(new GetMeetingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMeetingRequest object.
 */
GetMeetingRequest::GetMeetingRequest()
    : ChimeSdkMeetingsRequest(new GetMeetingRequestPrivate(ChimeSdkMeetingsRequest::GetMeetingAction, this))
{

}

/*!
 * \reimp
 */
bool GetMeetingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMeetingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMeetingRequest::response(QNetworkReply * const reply) const
{
    return new GetMeetingResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::GetMeetingRequestPrivate
 * \brief The GetMeetingRequestPrivate class provides private implementation for GetMeetingRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a GetMeetingRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
GetMeetingRequestPrivate::GetMeetingRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, GetMeetingRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMeetingRequest
 * class' copy constructor.
 */
GetMeetingRequestPrivate::GetMeetingRequestPrivate(
    const GetMeetingRequestPrivate &other, GetMeetingRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
