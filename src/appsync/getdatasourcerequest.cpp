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

#include "getdatasourcerequest.h"
#include "getdatasourcerequest_p.h"
#include "getdatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetDataSourceRequest
 *
 * \brief The GetDataSourceRequest class provides an interface for AppSync GetDataSource requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getDataSource
 */

/*!
 * @brief  Constructs a new GetDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataSourceRequest::GetDataSourceRequest(const GetDataSourceRequest &other)
    : AppSyncRequest(new GetDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDataSourceRequest object.
 */
GetDataSourceRequest::GetDataSourceRequest()
    : AppSyncRequest(new GetDataSourceRequestPrivate(AppSyncRequest::GetDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataSourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSourceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDataSourceRequestPrivate
 *
 * @brief  Private implementation for GetDataSourceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDataSourceRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetDataSourceRequest instance.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const AppSyncRequest::Action action, GetDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataSourceRequest instance.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const GetDataSourceRequestPrivate &other, GetDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
