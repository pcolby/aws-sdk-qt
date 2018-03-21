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

#include "deletebotversionrequest.h"
#include "deletebotversionrequest_p.h"
#include "deletebotversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotVersionRequest
 *
 * @brief  Implements LexModelBuildingService DeleteBotVersion requests.
 *
 * @see    LexModelBuildingServiceClient::deleteBotVersion
 */

/**
 * @brief  Constructs a new DeleteBotVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotVersionResponse::DeleteBotVersionResponse(

/**
 * @brief  Constructs a new DeleteBotVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest(const DeleteBotVersionRequest &other)
    : LexModelBuildingServiceRequest(new DeleteBotVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBotVersionRequest object.
 */
DeleteBotVersionRequest::DeleteBotVersionRequest()
    : LexModelBuildingServiceRequest(new DeleteBotVersionRequestPrivate(LexModelBuildingServiceRequest::DeleteBotVersionAction, this))
{

}

bool DeleteBotVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBotVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBotVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBotVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteBotVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteBotVersionRequest instance.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteBotVersionRequest * const q)
    : DeleteBotVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBotVersionRequest instance.
 */
DeleteBotVersionRequestPrivate::DeleteBotVersionRequestPrivate(
    const DeleteBotVersionRequestPrivate &other, DeleteBotVersionRequest * const q)
    : DeleteBotVersionPrivate(other, q)
{

}
