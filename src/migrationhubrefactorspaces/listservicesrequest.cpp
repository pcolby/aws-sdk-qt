// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListServicesRequest
 * \brief The ListServicesRequest class provides an interface for MigrationHubRefactorSpaces ListServices requests.
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
 * \sa MigrationHubRefactorSpacesClient::listServices
 */

/*!
 * Constructs a copy of \a other.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : MigrationHubRefactorSpacesRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : MigrationHubRefactorSpacesRequest(new ListServicesRequestPrivate(MigrationHubRefactorSpacesRequest::ListServicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListServicesRequestPrivate
 * \brief The ListServicesRequestPrivate class provides private implementation for ListServicesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListServicesRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, ListServicesRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
