// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listroutesrequest.h"
#include "listroutesrequest_p.h"
#include "listroutesresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListRoutesRequest
 * \brief The ListRoutesRequest class provides an interface for MigrationHubRefactorSpaces ListRoutes requests.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::listRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
ListRoutesRequest::ListRoutesRequest(const ListRoutesRequest &other)
    : MigrationHubRefactorSpacesRequest(new ListRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRoutesRequest object.
 */
ListRoutesRequest::ListRoutesRequest()
    : MigrationHubRefactorSpacesRequest(new ListRoutesRequestPrivate(MigrationHubRefactorSpacesRequest::ListRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRoutesRequest::response(QNetworkReply * const reply) const
{
    return new ListRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListRoutesRequestPrivate
 * \brief The ListRoutesRequestPrivate class provides private implementation for ListRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListRoutesRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
ListRoutesRequestPrivate::ListRoutesRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, ListRoutesRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRoutesRequest
 * class' copy constructor.
 */
ListRoutesRequestPrivate::ListRoutesRequestPrivate(
    const ListRoutesRequestPrivate &other, ListRoutesRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
