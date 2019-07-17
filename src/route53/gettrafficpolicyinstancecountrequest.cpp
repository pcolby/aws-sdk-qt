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

#include "gettrafficpolicyinstancecountrequest.h"
#include "gettrafficpolicyinstancecountrequest_p.h"
#include "gettrafficpolicyinstancecountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountRequest
 * \brief The GetTrafficPolicyInstanceCountRequest class provides an interface for Route53 GetTrafficPolicyInstanceCount requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getTrafficPolicyInstanceCount
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest(const GetTrafficPolicyInstanceCountRequest &other)
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrafficPolicyInstanceCountRequest object.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest()
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(Route53Request::GetTrafficPolicyInstanceCountAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrafficPolicyInstanceCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrafficPolicyInstanceCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyInstanceCountRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyInstanceCountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountRequestPrivate
 * \brief The GetTrafficPolicyInstanceCountRequestPrivate class provides private implementation for GetTrafficPolicyInstanceCountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyInstanceCountRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyInstanceCountRequest
 * class' copy constructor.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const GetTrafficPolicyInstanceCountRequestPrivate &other, GetTrafficPolicyInstanceCountRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
