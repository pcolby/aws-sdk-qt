// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentsRequest
 * \brief The ListEnvironmentsRequest class provides an interface for MigrationHubRefactorSpaces ListEnvironments requests.
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
 * \sa MigrationHubRefactorSpacesClient::listEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : MigrationHubRefactorSpacesRequest(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : MigrationHubRefactorSpacesRequest(new ListEnvironmentsRequestPrivate(MigrationHubRefactorSpacesRequest::ListEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentsRequestPrivate
 * \brief The ListEnvironmentsRequestPrivate class provides private implementation for ListEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListEnvironmentsRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, ListEnvironmentsRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
