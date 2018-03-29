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

#include "getgraphqlapirequest.h"
#include "getgraphqlapirequest_p.h"
#include "getgraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/**
 * @class  GetGraphqlApiRequest
 *
 * @brief  Implements AppSync GetGraphqlApi requests.
 *
 * @see    AppSyncClient::getGraphqlApi
 */

/**
 * @brief  Constructs a new GetGraphqlApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGraphqlApiRequest::GetGraphqlApiRequest(const GetGraphqlApiRequest &other)
    : AppSyncRequest(new GetGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGraphqlApiRequest object.
 */
GetGraphqlApiRequest::GetGraphqlApiRequest()
    : AppSyncRequest(new GetGraphqlApiRequestPrivate(AppSyncRequest::GetGraphqlApiAction, this))
{

}

bool GetGraphqlApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGraphqlApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGraphqlApiResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new GetGraphqlApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGraphqlApiRequestPrivate
 *
 * @brief  Private implementation for GetGraphqlApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGraphqlApiRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetGraphqlApiRequest instance.
 */
GetGraphqlApiRequestPrivate::GetGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, GetGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGraphqlApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGraphqlApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGraphqlApiRequest instance.
 */
GetGraphqlApiRequestPrivate::GetGraphqlApiRequestPrivate(
    const GetGraphqlApiRequestPrivate &other, GetGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
