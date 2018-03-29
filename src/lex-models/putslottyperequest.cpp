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

#include "putslottyperequest.h"
#include "putslottyperequest_p.h"
#include "putslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  PutSlotTypeRequest
 *
 * @brief  Implements LexModelBuildingService PutSlotType requests.
 *
 * @see    LexModelBuildingServiceClient::putSlotType
 */

/**
 * @brief  Constructs a new PutSlotTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutSlotTypeRequest::PutSlotTypeRequest(const PutSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new PutSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutSlotTypeRequest object.
 */
PutSlotTypeRequest::PutSlotTypeRequest()
    : LexModelBuildingServiceRequest(new PutSlotTypeRequestPrivate(LexModelBuildingServiceRequest::PutSlotTypeAction, this))
{

}

bool PutSlotTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutSlotTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutSlotTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new PutSlotTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutSlotTypeRequestPrivate
 *
 * @brief  Private implementation for PutSlotTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSlotTypeRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public PutSlotTypeRequest instance.
 */
PutSlotTypeRequestPrivate::PutSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutSlotTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutSlotTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutSlotTypeRequest instance.
 */
PutSlotTypeRequestPrivate::PutSlotTypeRequestPrivate(
    const PutSlotTypeRequestPrivate &other, PutSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
