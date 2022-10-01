// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctionrequest.h"
#include "createfunctionrequest_p.h"
#include "createfunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateFunctionRequest
 * \brief The CreateFunctionRequest class provides an interface for AppSync CreateFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createFunction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionRequest::CreateFunctionRequest(const CreateFunctionRequest &other)
    : AppSyncRequest(new CreateFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionRequest object.
 */
CreateFunctionRequest::CreateFunctionRequest()
    : AppSyncRequest(new CreateFunctionRequestPrivate(AppSyncRequest::CreateFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateFunctionRequestPrivate
 * \brief The CreateFunctionRequestPrivate class provides private implementation for CreateFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const AppSyncRequest::Action action, CreateFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionRequest
 * class' copy constructor.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const CreateFunctionRequestPrivate &other, CreateFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
