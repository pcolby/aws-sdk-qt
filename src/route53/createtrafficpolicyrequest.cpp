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

#include "createtrafficpolicyrequest.h"
#include "createtrafficpolicyrequest_p.h"
#include "createtrafficpolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyRequest
 * \brief The CreateTrafficPolicyRequest class provides an interface for Route53 CreateTrafficPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createTrafficPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrafficPolicyRequest::CreateTrafficPolicyRequest(const CreateTrafficPolicyRequest &other)
    : Route53Request(new CreateTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrafficPolicyRequest object.
 */
CreateTrafficPolicyRequest::CreateTrafficPolicyRequest()
    : Route53Request(new CreateTrafficPolicyRequestPrivate(Route53Request::CreateTrafficPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrafficPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrafficPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyRequestPrivate
 * \brief The CreateTrafficPolicyRequestPrivate class provides private implementation for CreateTrafficPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateTrafficPolicyRequestPrivate::CreateTrafficPolicyRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyRequest
 * class' copy constructor.
 */
CreateTrafficPolicyRequestPrivate::CreateTrafficPolicyRequestPrivate(
    const CreateTrafficPolicyRequestPrivate &other, CreateTrafficPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
