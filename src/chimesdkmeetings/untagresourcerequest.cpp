// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for ChimeSdkMeetings UntagResource requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : ChimeSdkMeetingsRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : ChimeSdkMeetingsRequest(new UntagResourceRequestPrivate(ChimeSdkMeetingsRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMeetings::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const ChimeSdkMeetingsRequest::Action action, UntagResourceRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : ChimeSdkMeetingsRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMeetings
} // namespace QtAws
