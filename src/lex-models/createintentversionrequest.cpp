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

#include "createintentversionrequest.h"
#include "createintentversionrequest_p.h"
#include "createintentversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  CreateIntentVersionRequest
 *
 * @brief  Implements LexModelBuildingService CreateIntentVersion requests.
 *
 * @see    LexModelBuildingServiceClient::createIntentVersion
 */

/**
 * @brief  Constructs a new CreateIntentVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest(const CreateIntentVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateIntentVersionRequest object.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest()
    : LexModelBuildingServiceRequest(new CreateIntentVersionRequestPrivate(LexModelBuildingServiceRequest::CreateIntentVersionAction, this))
{

}

bool CreateIntentVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateIntentVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateIntentVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * CreateIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntentVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateIntentVersionRequestPrivate
 *
 * @brief  Private implementation for CreateIntentVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIntentVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public CreateIntentVersionRequest instance.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateIntentVersionRequest * const q)
    : CreateIntentVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateIntentVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateIntentVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateIntentVersionRequest instance.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const CreateIntentVersionRequestPrivate &other, CreateIntentVersionRequest * const q)
    : CreateIntentVersionPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
