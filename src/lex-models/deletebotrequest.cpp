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

#include "deletebotrequest.h"
#include "deletebotrequest_p.h"
#include "deletebotresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotRequest
 *
 * @brief  Implements LexModelBuildingService DeleteBot requests.
 *
 * @see    LexModelBuildingServiceClient::deleteBot
 */

/**
 * @brief  Constructs a new DeleteBotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBotRequest::DeleteBotRequest(const DeleteBotRequest &other)
    : LexModelBuildingServiceRequest(new DeleteBotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBotRequest object.
 */
DeleteBotRequest::DeleteBotRequest()
    : LexModelBuildingServiceRequest(new DeleteBotRequestPrivate(LexModelBuildingServiceRequest::DeleteBotAction, this))
{

}

bool DeleteBotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteBotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBotRequestPrivate
 *
 * @brief  Private implementation for DeleteBotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteBotRequest instance.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteBotRequest * const q)
    : DeleteBotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBotRequest instance.
 */
DeleteBotRequestPrivate::DeleteBotRequestPrivate(
    const DeleteBotRequestPrivate &other, DeleteBotRequest * const q)
    : DeleteBotPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
