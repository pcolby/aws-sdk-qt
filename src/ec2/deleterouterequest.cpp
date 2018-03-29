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

#include "deleterouterequest.h"
#include "deleterouterequest_p.h"
#include "deleterouteresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteRouteRequest
 *
 * @brief  Implements EC2 DeleteRoute requests.
 *
 * @see    EC2Client::deleteRoute
 */

/**
 * @brief  Constructs a new DeleteRouteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRouteRequest::DeleteRouteRequest(const DeleteRouteRequest &other)
    : EC2Request(new DeleteRouteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRouteRequest object.
 */
DeleteRouteRequest::DeleteRouteRequest()
    : EC2Request(new DeleteRouteRequestPrivate(EC2Request::DeleteRouteAction, this))
{

}

bool DeleteRouteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRouteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRouteResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRouteRequestPrivate
 *
 * @brief  Private implementation for DeleteRouteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRouteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteRouteRequest instance.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const EC2Request::Action action, DeleteRouteRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRouteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRouteRequest instance.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const DeleteRouteRequestPrivate &other, DeleteRouteRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
