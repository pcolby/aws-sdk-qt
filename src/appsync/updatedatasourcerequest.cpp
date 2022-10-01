// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDataSourceRequest
 * \brief The UpdateDataSourceRequest class provides an interface for AppSync UpdateDataSource requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : AppSyncRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : AppSyncRequest(new UpdateDataSourceRequestPrivate(AppSyncRequest::UpdateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateDataSourceRequestPrivate
 * \brief The UpdateDataSourceRequestPrivate class provides private implementation for UpdateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDataSourceRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const AppSyncRequest::Action action, UpdateDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSourceRequest
 * class' copy constructor.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const UpdateDataSourceRequestPrivate &other, UpdateDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
