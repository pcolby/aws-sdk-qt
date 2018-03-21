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

#include "createslottypeversionrequest.h"
#include "createslottypeversionrequest_p.h"
#include "createslottypeversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  CreateSlotTypeVersionRequest
 *
 * @brief  Implements LexModelBuildingService CreateSlotTypeVersion requests.
 *
 * @see    LexModelBuildingServiceClient::createSlotTypeVersion
 */

/**
 * @brief  Constructs a new CreateSlotTypeVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSlotTypeVersionResponse::CreateSlotTypeVersionResponse(

/**
 * @brief  Constructs a new CreateSlotTypeVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest(const CreateSlotTypeVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSlotTypeVersionRequest object.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest()
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(LexModelBuildingServiceRequest::CreateSlotTypeVersionAction, this))
{

}

bool CreateSlotTypeVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSlotTypeVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSlotTypeVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * CreateSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlotTypeVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSlotTypeVersionRequestPrivate
 *
 * @brief  Private implementation for CreateSlotTypeVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSlotTypeVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public CreateSlotTypeVersionRequest instance.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateSlotTypeVersionRequest * const q)
    : CreateSlotTypeVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSlotTypeVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSlotTypeVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSlotTypeVersionRequest instance.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const CreateSlotTypeVersionRequestPrivate &other, CreateSlotTypeVersionRequest * const q)
    : CreateSlotTypeVersionPrivate(other, q)
{

}
