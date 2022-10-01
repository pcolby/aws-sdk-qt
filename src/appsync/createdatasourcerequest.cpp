// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasourcerequest.h"
#include "createdatasourcerequest_p.h"
#include "createdatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateDataSourceRequest
 * \brief The CreateDataSourceRequest class provides an interface for AppSync CreateDataSource requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceRequest::CreateDataSourceRequest(const CreateDataSourceRequest &other)
    : AppSyncRequest(new CreateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceRequest object.
 */
CreateDataSourceRequest::CreateDataSourceRequest()
    : AppSyncRequest(new CreateDataSourceRequestPrivate(AppSyncRequest::CreateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateDataSourceRequestPrivate
 * \brief The CreateDataSourceRequestPrivate class provides private implementation for CreateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateDataSourceRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const AppSyncRequest::Action action, CreateDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceRequest
 * class' copy constructor.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const CreateDataSourceRequestPrivate &other, CreateDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
