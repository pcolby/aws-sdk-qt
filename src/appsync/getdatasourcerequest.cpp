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
 * \brief The GetDataSourceRequest class provides an interface for AppSync GetDataSource requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataSourceRequest::GetDataSourceRequest(const GetDataSourceRequest &other)
    : AppSyncRequest(new GetDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataSourceRequest object.
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
 * Returns a GetDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetDataSourceRequestPrivate
 * \brief The GetDataSourceRequestPrivate class provides private implementation for GetDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 *
 * Constructs a GetDataSourceRequestPrivate object for AppSync \a action with,
 * public implementation \a q.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const AppSyncRequest::Action action, GetDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataSourceRequest
 * class' copy constructor.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const GetDataSourceRequestPrivate &other, GetDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
