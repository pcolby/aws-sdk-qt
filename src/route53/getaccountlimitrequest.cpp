/*
    Copyright 2013-2018 Paul Colby

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

#include "getaccountlimitrequest.h"
#include "getaccountlimitrequest_p.h"
#include "getaccountlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetAccountLimitRequest
 * \brief The GetAccountLimitRequest class provides an interface for Route53 GetAccountLimit requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getAccountLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountLimitRequest::GetAccountLimitRequest(const GetAccountLimitRequest &other)
    : Route53Request(new GetAccountLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountLimitRequest object.
 */
GetAccountLimitRequest::GetAccountLimitRequest()
    : Route53Request(new GetAccountLimitRequestPrivate(Route53Request::GetAccountLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountLimitResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetAccountLimitRequestPrivate
 * \brief The GetAccountLimitRequestPrivate class provides private implementation for GetAccountLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetAccountLimitRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const Route53Request::Action action, GetAccountLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountLimitRequest
 * class' copy constructor.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const GetAccountLimitRequestPrivate &other, GetAccountLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
