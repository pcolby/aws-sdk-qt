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

#include "createdatasourcerequest.h"
#include "createdatasourcerequest_p.h"
#include "createdatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  CreateDataSourceRequest
 *
 * @brief  Implements AppSync CreateDataSource requests.
 *
 * @see    AppSyncClient::createDataSource
 */

/**
 * @brief  Constructs a new CreateDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDataSourceRequest::CreateDataSourceRequest(const CreateDataSourceRequest &other)
    : AppSyncRequest(new CreateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDataSourceRequest object.
 */
CreateDataSourceRequest::CreateDataSourceRequest()
    : AppSyncRequest(new CreateDataSourceRequestPrivate(AppSyncRequest::CreateDataSourceAction, this))
{

}

bool CreateDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * CreateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDataSourceRequestPrivate
 *
 * @brief  Private implementation for CreateDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public CreateDataSourceRequest instance.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const AppSyncRequest::Action action, CreateDataSourceRequest * const q)
    : CreateDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDataSourceRequest instance.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const CreateDataSourceRequestPrivate &other, CreateDataSourceRequest * const q)
    : CreateDataSourcePrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
