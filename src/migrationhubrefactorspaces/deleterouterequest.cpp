// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouterequest.h"
#include "deleterouterequest_p.h"
#include "deleterouteresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteRouteRequest
 * \brief The DeleteRouteRequest class provides an interface for MigrationHubRefactorSpaces DeleteRoute requests.
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
 * \sa MigrationHubRefactorSpacesClient::deleteRoute
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteRequest::DeleteRouteRequest(const DeleteRouteRequest &other)
    : MigrationHubRefactorSpacesRequest(new DeleteRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteRequest object.
 */
DeleteRouteRequest::DeleteRouteRequest()
    : MigrationHubRefactorSpacesRequest(new DeleteRouteRequestPrivate(MigrationHubRefactorSpacesRequest::DeleteRouteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteRouteRequestPrivate
 * \brief The DeleteRouteRequestPrivate class provides private implementation for DeleteRouteRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a DeleteRouteRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, DeleteRouteRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteRequest
 * class' copy constructor.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const DeleteRouteRequestPrivate &other, DeleteRouteRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
