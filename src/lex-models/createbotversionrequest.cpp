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

#include "createbotversionrequest.h"
#include "createbotversionrequest_p.h"
#include "createbotversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  CreateBotVersionRequest
 *
 * @brief  Implements LexModelBuildingService CreateBotVersion requests.
 *
 * @see    LexModelBuildingServiceClient::createBotVersion
 */

/**
 * @brief  Constructs a new CreateBotVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBotVersionRequest::CreateBotVersionRequest(const CreateBotVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateBotVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBotVersionRequest object.
 */
CreateBotVersionRequest::CreateBotVersionRequest()
    : LexModelBuildingServiceRequest(new CreateBotVersionRequestPrivate(LexModelBuildingServiceRequest::CreateBotVersionAction, this))
{

}

bool CreateBotVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBotVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBotVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * CreateBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBotVersionRequestPrivate
 *
 * @brief  Private implementation for CreateBotVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBotVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public CreateBotVersionRequest instance.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateBotVersionRequest * const q)
    : CreateBotVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBotVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBotVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBotVersionRequest instance.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const CreateBotVersionRequestPrivate &other, CreateBotVersionRequest * const q)
    : CreateBotVersionPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
