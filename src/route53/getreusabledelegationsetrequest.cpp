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

#include "getreusabledelegationsetrequest.h"
#include "getreusabledelegationsetrequest_p.h"
#include "getreusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetRequest
 * \brief The GetReusableDelegationSetRequest class provides an interface for Route53 GetReusableDelegationSet requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getReusableDelegationSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest(const GetReusableDelegationSetRequest &other)
    : Route53Request(new GetReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReusableDelegationSetRequest object.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest()
    : Route53Request(new GetReusableDelegationSetRequestPrivate(Route53Request::GetReusableDelegationSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetReusableDelegationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReusableDelegationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetRequestPrivate
 * \brief The GetReusableDelegationSetRequestPrivate class provides private implementation for GetReusableDelegationSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetRequest
 * class' copy constructor.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const GetReusableDelegationSetRequestPrivate &other, GetReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
