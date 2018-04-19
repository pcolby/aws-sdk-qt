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

#include "gettrafficpolicyrequest.h"
#include "gettrafficpolicyrequest_p.h"
#include "gettrafficpolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyRequest
 * \brief The GetTrafficPolicyRequest class provides an interface for Route53 GetTrafficPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getTrafficPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest(const GetTrafficPolicyRequest &other)
    : Route53Request(new GetTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrafficPolicyRequest object.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest()
    : Route53Request(new GetTrafficPolicyRequestPrivate(Route53Request::GetTrafficPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrafficPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrafficPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyRequestPrivate
 * \brief The GetTrafficPolicyRequestPrivate class provides private implementation for GetTrafficPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyRequest
 * class' copy constructor.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const GetTrafficPolicyRequestPrivate &other, GetTrafficPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
