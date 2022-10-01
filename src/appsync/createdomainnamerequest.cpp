// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainnamerequest.h"
#include "createdomainnamerequest_p.h"
#include "createdomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateDomainNameRequest
 * \brief The CreateDomainNameRequest class provides an interface for AppSync CreateDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainNameRequest::CreateDomainNameRequest(const CreateDomainNameRequest &other)
    : AppSyncRequest(new CreateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainNameRequest object.
 */
CreateDomainNameRequest::CreateDomainNameRequest()
    : AppSyncRequest(new CreateDomainNameRequestPrivate(AppSyncRequest::CreateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateDomainNameRequestPrivate
 * \brief The CreateDomainNameRequestPrivate class provides private implementation for CreateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const AppSyncRequest::Action action, CreateDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainNameRequest
 * class' copy constructor.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const CreateDomainNameRequestPrivate &other, CreateDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
