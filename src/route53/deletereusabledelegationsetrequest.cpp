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

#include "deletereusabledelegationsetrequest.h"
#include "deletereusabledelegationsetrequest_p.h"
#include "deletereusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetRequest
 * \brief The DeleteReusableDelegationSetRequest class provides an interface for Route53 DeleteReusableDelegationSet requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteReusableDelegationSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest(const DeleteReusableDelegationSetRequest &other)
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReusableDelegationSetRequest object.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest()
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(Route53Request::DeleteReusableDelegationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReusableDelegationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReusableDelegationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReusableDelegationSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetRequestPrivate
 * \brief The DeleteReusableDelegationSetRequestPrivate class provides private implementation for DeleteReusableDelegationSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteReusableDelegationSetRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, DeleteReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReusableDelegationSetRequest
 * class' copy constructor.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const DeleteReusableDelegationSetRequestPrivate &other, DeleteReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
