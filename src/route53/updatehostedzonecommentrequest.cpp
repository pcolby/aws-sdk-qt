// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehostedzonecommentrequest.h"
#include "updatehostedzonecommentrequest_p.h"
#include "updatehostedzonecommentresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHostedZoneCommentRequest
 * \brief The UpdateHostedZoneCommentRequest class provides an interface for Route53 UpdateHostedZoneComment requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateHostedZoneComment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHostedZoneCommentRequest::UpdateHostedZoneCommentRequest(const UpdateHostedZoneCommentRequest &other)
    : Route53Request(new UpdateHostedZoneCommentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHostedZoneCommentRequest object.
 */
UpdateHostedZoneCommentRequest::UpdateHostedZoneCommentRequest()
    : Route53Request(new UpdateHostedZoneCommentRequestPrivate(Route53Request::UpdateHostedZoneCommentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHostedZoneCommentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHostedZoneCommentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHostedZoneCommentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHostedZoneCommentResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateHostedZoneCommentRequestPrivate
 * \brief The UpdateHostedZoneCommentRequestPrivate class provides private implementation for UpdateHostedZoneCommentRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateHostedZoneCommentRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
UpdateHostedZoneCommentRequestPrivate::UpdateHostedZoneCommentRequestPrivate(
    const Route53Request::Action action, UpdateHostedZoneCommentRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHostedZoneCommentRequest
 * class' copy constructor.
 */
UpdateHostedZoneCommentRequestPrivate::UpdateHostedZoneCommentRequestPrivate(
    const UpdateHostedZoneCommentRequestPrivate &other, UpdateHostedZoneCommentRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
