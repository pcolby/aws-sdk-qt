// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteDataSourceRequest
 * \brief The DeleteDataSourceRequest class provides an interface for AppSync DeleteDataSource requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : AppSyncRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : AppSyncRequest(new DeleteDataSourceRequestPrivate(AppSyncRequest::DeleteDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteDataSourceRequestPrivate
 * \brief The DeleteDataSourceRequestPrivate class provides private implementation for DeleteDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteDataSourceRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const AppSyncRequest::Action action, DeleteDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSourceRequest
 * class' copy constructor.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const DeleteDataSourceRequestPrivate &other, DeleteDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
