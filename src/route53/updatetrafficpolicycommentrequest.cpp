/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatetrafficpolicycommentrequest.h"
#include "updatetrafficpolicycommentrequest_p.h"
#include "updatetrafficpolicycommentresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyCommentRequest
 * \brief The UpdateTrafficPolicyCommentRequest class provides an interface for Route53 UpdateTrafficPolicyComment requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::updateTrafficPolicyComment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrafficPolicyCommentRequest::UpdateTrafficPolicyCommentRequest(const UpdateTrafficPolicyCommentRequest &other)
    : Route53Request(new UpdateTrafficPolicyCommentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrafficPolicyCommentRequest object.
 */
UpdateTrafficPolicyCommentRequest::UpdateTrafficPolicyCommentRequest()
    : Route53Request(new UpdateTrafficPolicyCommentRequestPrivate(Route53Request::UpdateTrafficPolicyCommentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrafficPolicyCommentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrafficPolicyCommentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrafficPolicyCommentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrafficPolicyCommentResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyCommentRequestPrivate
 * \brief The UpdateTrafficPolicyCommentRequestPrivate class provides private implementation for UpdateTrafficPolicyCommentRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a UpdateTrafficPolicyCommentRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
UpdateTrafficPolicyCommentRequestPrivate::UpdateTrafficPolicyCommentRequestPrivate(
    const Route53Request::Action action, UpdateTrafficPolicyCommentRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrafficPolicyCommentRequest
 * class' copy constructor.
 */
UpdateTrafficPolicyCommentRequestPrivate::UpdateTrafficPolicyCommentRequestPrivate(
    const UpdateTrafficPolicyCommentRequestPrivate &other, UpdateTrafficPolicyCommentRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
