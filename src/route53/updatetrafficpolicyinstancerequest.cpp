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

#include "updatetrafficpolicyinstancerequest.h"
#include "updatetrafficpolicyinstancerequest_p.h"
#include "updatetrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceRequest
 * \brief The UpdateTrafficPolicyInstanceRequest class provides an interface for Route53 UpdateTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::updateTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest(const UpdateTrafficPolicyInstanceRequest &other)
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrafficPolicyInstanceRequest object.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest()
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(Route53Request::UpdateTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceRequestPrivate
 * \brief The UpdateTrafficPolicyInstanceRequestPrivate class provides private implementation for UpdateTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a UpdateTrafficPolicyInstanceRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, UpdateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const UpdateTrafficPolicyInstanceRequestPrivate &other, UpdateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
