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

#include "createaliasrequest.h"
#include "createaliasrequest_p.h"
#include "createaliasresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateAliasRequest
 *
 * @brief  Implements DirectoryService CreateAlias requests.
 *
 * @see    DirectoryServiceClient::createAlias
 */

/**
 * @brief  Constructs a new CreateAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAliasRequest::CreateAliasRequest(const CreateAliasRequest &other)
    : DirectoryServiceRequest(new CreateAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAliasRequest object.
 */
CreateAliasRequest::CreateAliasRequest()
    : DirectoryServiceRequest(new CreateAliasRequestPrivate(DirectoryServiceRequest::CreateAliasAction, this))
{

}

bool CreateAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * CreateAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAliasRequestPrivate
 *
 * @brief  Private implementation for CreateAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAliasRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CreateAliasRequest instance.
 */
CreateAliasRequestPrivate::CreateAliasRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateAliasRequest * const q)
    : CreateAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAliasRequest instance.
 */
CreateAliasRequestPrivate::CreateAliasRequestPrivate(
    const CreateAliasRequestPrivate &other, CreateAliasRequest * const q)
    : CreateAliasPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
