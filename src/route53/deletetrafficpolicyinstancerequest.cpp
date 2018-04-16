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

#include "deletetrafficpolicyinstancerequest.h"
#include "deletetrafficpolicyinstancerequest_p.h"
#include "deletetrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyInstanceRequest
 *
 * \brief The DeleteTrafficPolicyInstanceRequest class encapsulates Route53 DeleteTrafficPolicyInstance requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::deleteTrafficPolicyInstance
 */

/*!
 * @brief  Constructs a new DeleteTrafficPolicyInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTrafficPolicyInstanceRequest::DeleteTrafficPolicyInstanceRequest(const DeleteTrafficPolicyInstanceRequest &other)
    : Route53Request(new DeleteTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteTrafficPolicyInstanceRequest object.
 */
DeleteTrafficPolicyInstanceRequest::DeleteTrafficPolicyInstanceRequest()
    : Route53Request(new DeleteTrafficPolicyInstanceRequestPrivate(Route53Request::DeleteTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteTrafficPolicyInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTrafficPolicyInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteTrafficPolicyInstanceRequestPrivate
 *
 * @brief  Private implementation for DeleteTrafficPolicyInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyInstanceRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteTrafficPolicyInstanceRequest instance.
 */
DeleteTrafficPolicyInstanceRequestPrivate::DeleteTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, DeleteTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrafficPolicyInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTrafficPolicyInstanceRequest instance.
 */
DeleteTrafficPolicyInstanceRequestPrivate::DeleteTrafficPolicyInstanceRequestPrivate(
    const DeleteTrafficPolicyInstanceRequestPrivate &other, DeleteTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
