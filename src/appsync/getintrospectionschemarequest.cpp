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

#include "getintrospectionschemarequest.h"
#include "getintrospectionschemarequest_p.h"
#include "getintrospectionschemaresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  GetIntrospectionSchemaRequest
 *
 * @brief  Implements AppSync GetIntrospectionSchema requests.
 *
 * @see    AppSyncClient::getIntrospectionSchema
 */

/**
 * @brief  Constructs a new GetIntrospectionSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIntrospectionSchemaRequest::GetIntrospectionSchemaRequest(const GetIntrospectionSchemaRequest &other)
    : AppSyncRequest(new GetIntrospectionSchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIntrospectionSchemaRequest object.
 */
GetIntrospectionSchemaRequest::GetIntrospectionSchemaRequest()
    : AppSyncRequest(new GetIntrospectionSchemaRequestPrivate(AppSyncRequest::GetIntrospectionSchemaAction, this))
{

}

bool GetIntrospectionSchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIntrospectionSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIntrospectionSchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * GetIntrospectionSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetIntrospectionSchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIntrospectionSchemaRequestPrivate
 *
 * @brief  Private implementation for GetIntrospectionSchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntrospectionSchemaRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetIntrospectionSchemaRequest instance.
 */
GetIntrospectionSchemaRequestPrivate::GetIntrospectionSchemaRequestPrivate(
    const AppSyncRequest::Action action, GetIntrospectionSchemaRequest * const q)
    : GetIntrospectionSchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIntrospectionSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIntrospectionSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIntrospectionSchemaRequest instance.
 */
GetIntrospectionSchemaRequestPrivate::GetIntrospectionSchemaRequestPrivate(
    const GetIntrospectionSchemaRequestPrivate &other, GetIntrospectionSchemaRequest * const q)
    : GetIntrospectionSchemaPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
