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

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  UpdateDataSourceRequest
 *
 * @brief  Implements AppSync UpdateDataSource requests.
 *
 * @see    AppSyncClient::updateDataSource
 */

/**
 * @brief  Constructs a new UpdateDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : AppSyncRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : AppSyncRequest(new UpdateDataSourceRequestPrivate(AppSyncRequest::UpdateDataSourceAction, this))
{

}

bool UpdateDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * UpdateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDataSourceRequestPrivate
 *
 * @brief  Private implementation for UpdateDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDataSourceRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public UpdateDataSourceRequest instance.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const AppSyncRequest::Action action, UpdateDataSourceRequest * const q)
    : UpdateDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDataSourceRequest instance.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const UpdateDataSourceRequestPrivate &other, UpdateDataSourceRequest * const q)
    : UpdateDataSourcePrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
