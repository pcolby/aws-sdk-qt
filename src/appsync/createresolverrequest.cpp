// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresolverrequest.h"
#include "createresolverrequest_p.h"
#include "createresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateResolverRequest
 * \brief The CreateResolverRequest class provides an interface for AppSync CreateResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createResolver
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResolverRequest::CreateResolverRequest(const CreateResolverRequest &other)
    : AppSyncRequest(new CreateResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResolverRequest object.
 */
CreateResolverRequest::CreateResolverRequest()
    : AppSyncRequest(new CreateResolverRequestPrivate(AppSyncRequest::CreateResolverAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResolverRequest::response(QNetworkReply * const reply) const
{
    return new CreateResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateResolverRequestPrivate
 * \brief The CreateResolverRequestPrivate class provides private implementation for CreateResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const AppSyncRequest::Action action, CreateResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResolverRequest
 * class' copy constructor.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const CreateResolverRequestPrivate &other, CreateResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
