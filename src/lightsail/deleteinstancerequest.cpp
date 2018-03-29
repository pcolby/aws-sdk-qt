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

#include "deleteinstancerequest.h"
#include "deleteinstancerequest_p.h"
#include "deleteinstanceresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteInstanceRequest
 *
 * @brief  Implements Lightsail DeleteInstance requests.
 *
 * @see    LightsailClient::deleteInstance
 */

/**
 * @brief  Constructs a new DeleteInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInstanceRequest::DeleteInstanceRequest(const DeleteInstanceRequest &other)
    : LightsailRequest(new DeleteInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInstanceRequest object.
 */
DeleteInstanceRequest::DeleteInstanceRequest()
    : LightsailRequest(new DeleteInstanceRequestPrivate(LightsailRequest::DeleteInstanceAction, this))
{

}

bool DeleteInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInstanceRequestPrivate
 *
 * @brief  Private implementation for DeleteInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteInstanceRequest instance.
 */
DeleteInstanceRequestPrivate::DeleteInstanceRequestPrivate(
    const LightsailRequest::Action action, DeleteInstanceRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInstanceRequest instance.
 */
DeleteInstanceRequestPrivate::DeleteInstanceRequestPrivate(
    const DeleteInstanceRequestPrivate &other, DeleteInstanceRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
