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

#include "creategraphqlapirequest.h"
#include "creategraphqlapirequest_p.h"
#include "creategraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  CreateGraphqlApiRequest
 *
 * @brief  Implements AppSync CreateGraphqlApi requests.
 *
 * @see    AppSyncClient::createGraphqlApi
 */

/**
 * @brief  Constructs a new CreateGraphqlApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest(const CreateGraphqlApiRequest &other)
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGraphqlApiRequest object.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest()
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(AppSyncRequest::CreateGraphqlApiAction, this))
{

}

bool CreateGraphqlApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGraphqlApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGraphqlApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * CreateGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateGraphqlApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGraphqlApiRequestPrivate
 *
 * @brief  Private implementation for CreateGraphqlApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGraphqlApiRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public CreateGraphqlApiRequest instance.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, CreateGraphqlApiRequest * const q)
    : CreateGraphqlApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGraphqlApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGraphqlApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGraphqlApiRequest instance.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const CreateGraphqlApiRequestPrivate &other, CreateGraphqlApiRequest * const q)
    : CreateGraphqlApiPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
