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

#include "gettrafficpolicyinstancerequest.h"
#include "gettrafficpolicyinstancerequest_p.h"
#include "gettrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceRequest
 * \brief The GetTrafficPolicyInstanceRequest class provides an interface for Route53 GetTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrafficPolicyInstanceRequest::GetTrafficPolicyInstanceRequest(const GetTrafficPolicyInstanceRequest &other)
    : Route53Request(new GetTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrafficPolicyInstanceRequest object.
 */
GetTrafficPolicyInstanceRequest::GetTrafficPolicyInstanceRequest()
    : Route53Request(new GetTrafficPolicyInstanceRequestPrivate(Route53Request::GetTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceRequestPrivate
 * \brief The GetTrafficPolicyInstanceRequestPrivate class provides private implementation for GetTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetTrafficPolicyInstanceRequestPrivate::GetTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
GetTrafficPolicyInstanceRequestPrivate::GetTrafficPolicyInstanceRequestPrivate(
    const GetTrafficPolicyInstanceRequestPrivate &other, GetTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
