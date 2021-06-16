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

#include "getreusabledelegationsetlimitrequest.h"
#include "getreusabledelegationsetlimitrequest_p.h"
#include "getreusabledelegationsetlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitRequest
 * \brief The GetReusableDelegationSetLimitRequest class provides an interface for Route53 GetReusableDelegationSetLimit requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getReusableDelegationSetLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest(const GetReusableDelegationSetLimitRequest &other)
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReusableDelegationSetLimitRequest object.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest()
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(Route53Request::GetReusableDelegationSetLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetReusableDelegationSetLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReusableDelegationSetLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReusableDelegationSetLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetLimitResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitRequestPrivate
 * \brief The GetReusableDelegationSetLimitRequestPrivate class provides private implementation for GetReusableDelegationSetLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetLimitRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetLimitRequest
 * class' copy constructor.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const GetReusableDelegationSetLimitRequestPrivate &other, GetReusableDelegationSetLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
