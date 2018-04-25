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

#include "createtrafficpolicyinstancerequest.h"
#include "createtrafficpolicyinstancerequest_p.h"
#include "createtrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceRequest
 * \brief The CreateTrafficPolicyInstanceRequest class provides an interface for Route53 CreateTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest(const CreateTrafficPolicyInstanceRequest &other)
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrafficPolicyInstanceRequest object.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest()
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(Route53Request::CreateTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceRequestPrivate
 * \brief The CreateTrafficPolicyInstanceRequestPrivate class provides private implementation for CreateTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const CreateTrafficPolicyInstanceRequestPrivate &other, CreateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
