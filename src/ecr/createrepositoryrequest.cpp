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

#include "createrepositoryrequest.h"
#include "createrepositoryrequest_p.h"
#include "createrepositoryresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  CreateRepositoryRequest
 *
 * @brief  Implements ECR CreateRepository requests.
 *
 * @see    ECRClient::createRepository
 */

/**
 * @brief  Constructs a new CreateRepositoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRepositoryResponse::CreateRepositoryResponse(

/**
 * @brief  Constructs a new CreateRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRepositoryRequest::CreateRepositoryRequest(const CreateRepositoryRequest &other)
    : ECRRequest(new CreateRepositoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRepositoryRequest object.
 */
CreateRepositoryRequest::CreateRepositoryRequest()
    : ECRRequest(new CreateRepositoryRequestPrivate(ECRRequest::CreateRepositoryAction, this))
{

}

bool CreateRepositoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRepositoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRepositoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * CreateRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateRepositoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRepositoryRequestPrivate
 *
 * @brief  Private implementation for CreateRepositoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRepositoryRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public CreateRepositoryRequest instance.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const ECRRequest::Action action, CreateRepositoryRequest * const q)
    : CreateRepositoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRepositoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRepositoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRepositoryRequest instance.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const CreateRepositoryRequestPrivate &other, CreateRepositoryRequest * const q)
    : CreateRepositoryPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
