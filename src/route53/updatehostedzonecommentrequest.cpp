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
