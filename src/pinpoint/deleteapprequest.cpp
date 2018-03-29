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

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteAppRequest
 *
 * @brief  Implements Pinpoint DeleteApp requests.
 *
 * @see    PinpointClient::deleteApp
 */

/**
 * @brief  Constructs a new DeleteAppRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : PinpointRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : PinpointRequest(new DeleteAppRequestPrivate(PinpointRequest::DeleteAppAction, this))
{

}

bool DeleteAppRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAppResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAppResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAppRequestPrivate
 *
 * @brief  Private implementation for DeleteAppRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAppRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteAppRequest instance.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const PinpointRequest::Action action, DeleteAppRequest * const q)
    : DeleteAppPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAppRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAppRequest instance.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : DeleteAppPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
