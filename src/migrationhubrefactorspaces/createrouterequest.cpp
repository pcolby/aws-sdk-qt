// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouterequest.h"
#include "createrouterequest_p.h"
#include "createrouteresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateRouteRequest
 * \brief The CreateRouteRequest class provides an interface for MigrationHubRefactorSpaces CreateRoute requests.
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
 * \sa MigrationHubRefactorSpacesClient::createRoute
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteRequest::CreateRouteRequest(const CreateRouteRequest &other)
    : MigrationHubRefactorSpacesRequest(new CreateRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteRequest object.
 */
CreateRouteRequest::CreateRouteRequest()
    : MigrationHubRefactorSpacesRequest(new CreateRouteRequestPrivate(MigrationHubRefactorSpacesRequest::CreateRouteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateRouteRequestPrivate
 * \brief The CreateRouteRequestPrivate class provides private implementation for CreateRouteRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a CreateRouteRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
CreateRouteRequestPrivate::CreateRouteRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, CreateRouteRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteRequest
 * class' copy constructor.
 */
CreateRouteRequestPrivate::CreateRouteRequestPrivate(
    const CreateRouteRequestPrivate &other, CreateRouteRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
