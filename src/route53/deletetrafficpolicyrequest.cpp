/*
    Copyright 2013-2019 Paul Colby

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

#include "deletetrafficpolicyrequest.h"
#include "deletetrafficpolicyrequest_p.h"
#include "deletetrafficpolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyRequest
 * \brief The DeleteTrafficPolicyRequest class provides an interface for Route53 DeleteTrafficPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteTrafficPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrafficPolicyRequest::DeleteTrafficPolicyRequest(const DeleteTrafficPolicyRequest &other)
    : Route53Request(new DeleteTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrafficPolicyRequest object.
 */
DeleteTrafficPolicyRequest::DeleteTrafficPolicyRequest()
    : Route53Request(new DeleteTrafficPolicyRequestPrivate(Route53Request::DeleteTrafficPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrafficPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrafficPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrafficPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyRequestPrivate
 * \brief The DeleteTrafficPolicyRequestPrivate class provides private implementation for DeleteTrafficPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteTrafficPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteTrafficPolicyRequestPrivate::DeleteTrafficPolicyRequestPrivate(
    const Route53Request::Action action, DeleteTrafficPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrafficPolicyRequest
 * class' copy constructor.
 */
DeleteTrafficPolicyRequestPrivate::DeleteTrafficPolicyRequestPrivate(
    const DeleteTrafficPolicyRequestPrivate &other, DeleteTrafficPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
