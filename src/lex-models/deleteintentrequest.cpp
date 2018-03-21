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

#include "deleteintentrequest.h"
#include "deleteintentrequest_p.h"
#include "deleteintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteIntentRequest
 *
 * @brief  Implements LexModelBuildingService DeleteIntent requests.
 *
 * @see    LexModelBuildingServiceClient::deleteIntent
 */

/**
 * @brief  Constructs a new DeleteIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntentResponse::DeleteIntentResponse(

/**
 * @brief  Constructs a new DeleteIntentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIntentRequest::DeleteIntentRequest(const DeleteIntentRequest &other)
    : LexModelBuildingServiceRequest(new DeleteIntentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIntentRequest object.
 */
DeleteIntentRequest::DeleteIntentRequest()
    : LexModelBuildingServiceRequest(new DeleteIntentRequestPrivate(LexModelBuildingServiceRequest::DeleteIntentAction, this))
{

}

bool DeleteIntentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIntentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIntentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteIntentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIntentRequestPrivate
 *
 * @brief  Private implementation for DeleteIntentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteIntentRequest instance.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteIntentRequest * const q)
    : DeleteIntentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIntentRequest instance.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const DeleteIntentRequestPrivate &other, DeleteIntentRequest * const q)
    : DeleteIntentPrivate(other, q)
{

}
