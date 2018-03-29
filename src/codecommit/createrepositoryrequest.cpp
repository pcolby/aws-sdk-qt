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

#include "createrepositoryrequest.h"
#include "createrepositoryrequest_p.h"
#include "createrepositoryresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  CreateRepositoryRequest
 *
 * @brief  Implements CodeCommit CreateRepository requests.
 *
 * @see    CodeCommitClient::createRepository
 */

/**
 * @brief  Constructs a new CreateRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRepositoryRequest::CreateRepositoryRequest(const CreateRepositoryRequest &other)
    : CodeCommitRequest(new CreateRepositoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRepositoryRequest object.
 */
CreateRepositoryRequest::CreateRepositoryRequest()
    : CodeCommitRequest(new CreateRepositoryRequestPrivate(CodeCommitRequest::CreateRepositoryAction, this))
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
 * @see  CodeCommitClient::send
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
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public CreateRepositoryRequest instance.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const CodeCommitRequest::Action action, CreateRepositoryRequest * const q)
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

} // namespace CodeCommit
} // namespace AWS
