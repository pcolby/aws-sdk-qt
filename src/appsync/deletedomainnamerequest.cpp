// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainnamerequest.h"
#include "deletedomainnamerequest_p.h"
#include "deletedomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteDomainNameRequest
 * \brief The DeleteDomainNameRequest class provides an interface for AppSync DeleteDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest(const DeleteDomainNameRequest &other)
    : AppSyncRequest(new DeleteDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainNameRequest object.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest()
    : AppSyncRequest(new DeleteDomainNameRequestPrivate(AppSyncRequest::DeleteDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteDomainNameRequestPrivate
 * \brief The DeleteDomainNameRequestPrivate class provides private implementation for DeleteDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const AppSyncRequest::Action action, DeleteDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainNameRequest
 * class' copy constructor.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const DeleteDomainNameRequestPrivate &other, DeleteDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
