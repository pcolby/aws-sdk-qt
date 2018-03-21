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

#include "deleterepositoryrequest.h"
#include "deleterepositoryrequest_p.h"
#include "deleterepositoryresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  DeleteRepositoryRequest
 *
 * @brief  Implements ECR DeleteRepository requests.
 *
 * @see    ECRClient::deleteRepository
 */

/**
 * @brief  Constructs a new DeleteRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest(const DeleteRepositoryRequest &other)
    : ECRRequest(new DeleteRepositoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRepositoryRequest object.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest()
    : ECRRequest(new DeleteRepositoryRequestPrivate(ECRRequest::DeleteRepositoryAction, this))
{

}

bool DeleteRepositoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRepositoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRepositoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * DeleteRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRepositoryRequestPrivate
 *
 * @brief  Private implementation for DeleteRepositoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const ECRRequest::Action action, DeleteRepositoryRequest * const q)
    : DeleteRepositoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const DeleteRepositoryRequestPrivate &other, DeleteRepositoryRequest * const q)
    : DeleteRepositoryPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
