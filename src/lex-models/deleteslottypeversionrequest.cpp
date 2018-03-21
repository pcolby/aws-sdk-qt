/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteslottypeversionrequest.h"
#include "deleteslottypeversionrequest_p.h"
#include "deleteslottypeversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteSlotTypeVersionRequest
 *
 * @brief  Implements LexModelBuildingService DeleteSlotTypeVersion requests.
 *
 * @see    LexModelBuildingServiceClient::deleteSlotTypeVersion
 */

/**
 * @brief  Constructs a new DeleteSlotTypeVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest(const DeleteSlotTypeVersionRequest &other)
    : LexModelBuildingServiceRequest(new DeleteSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSlotTypeVersionRequest object.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest()
    : LexModelBuildingServiceRequest(new DeleteSlotTypeVersionRequestPrivate(LexModelBuildingServiceRequest::DeleteSlotTypeVersionAction, this))
{

}

bool DeleteSlotTypeVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSlotTypeVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSlotTypeVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSlotTypeVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteSlotTypeVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteSlotTypeVersionRequest instance.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteSlotTypeVersionRequest * const q)
    : DeleteSlotTypeVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSlotTypeVersionRequest instance.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const DeleteSlotTypeVersionRequestPrivate &other, DeleteSlotTypeVersionRequest * const q)
    : DeleteSlotTypeVersionPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
