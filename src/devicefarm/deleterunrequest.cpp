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

#include "deleterunrequest.h"
#include "deleterunrequest_p.h"
#include "deleterunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  DeleteRunRequest
 *
 * @brief  Implements DeviceFarm DeleteRun requests.
 *
 * @see    DeviceFarmClient::deleteRun
 */

/**
 * @brief  Constructs a new DeleteRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRunRequest::DeleteRunRequest(const DeleteRunRequest &other)
    : DeviceFarmRequest(new DeleteRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRunRequest object.
 */
DeleteRunRequest::DeleteRunRequest()
    : DeviceFarmRequest(new DeleteRunRequestPrivate(DeviceFarmRequest::DeleteRunAction, this))
{

}

bool DeleteRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRunResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRunRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRunRequestPrivate
 *
 * @brief  Private implementation for DeleteRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRunRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteRunRequest instance.
 */
DeleteRunRequestPrivate::DeleteRunRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteRunRequest * const q)
    : DeleteRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRunRequest instance.
 */
DeleteRunRequestPrivate::DeleteRunRequestPrivate(
    const DeleteRunRequestPrivate &other, DeleteRunRequest * const q)
    : DeleteRunPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
