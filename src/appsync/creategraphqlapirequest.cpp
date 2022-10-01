// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategraphqlapirequest.h"
#include "creategraphqlapirequest_p.h"
#include "creategraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateGraphqlApiRequest
 * \brief The CreateGraphqlApiRequest class provides an interface for AppSync CreateGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest(const CreateGraphqlApiRequest &other)
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGraphqlApiRequest object.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest()
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(AppSyncRequest::CreateGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateGraphqlApiRequestPrivate
 * \brief The CreateGraphqlApiRequestPrivate class provides private implementation for CreateGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateGraphqlApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, CreateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGraphqlApiRequest
 * class' copy constructor.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const CreateGraphqlApiRequestPrivate &other, CreateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
