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

#include "deleteintentversionrequest.h"
#include "deleteintentversionrequest_p.h"
#include "deleteintentversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteIntentVersionRequest
 *
 * @brief  Implements LexModelBuildingService DeleteIntentVersion requests.
 *
 * @see    LexModelBuildingServiceClient::deleteIntentVersion
 */

/**
 * @brief  Constructs a new DeleteIntentVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest(const DeleteIntentVersionRequest &other)
    : LexModelBuildingServiceRequest(new DeleteIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIntentVersionRequest object.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest()
    : LexModelBuildingServiceRequest(new DeleteIntentVersionRequestPrivate(LexModelBuildingServiceRequest::DeleteIntentVersionAction, this))
{

}

bool DeleteIntentVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIntentVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIntentVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIntentVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteIntentVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteIntentVersionRequest instance.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteIntentVersionRequest * const q)
    : DeleteIntentVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIntentVersionRequest instance.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const DeleteIntentVersionRequestPrivate &other, DeleteIntentVersionRequest * const q)
    : DeleteIntentVersionPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
