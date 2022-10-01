// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
 * Constructs a UpdateTrafficPolicyCommentRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
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
