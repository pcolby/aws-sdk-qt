// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicerequest.h"
#include "deleteservicerequest_p.h"
#include "deleteserviceresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteServiceRequest
 * \brief The DeleteServiceRequest class provides an interface for MigrationHubRefactorSpaces DeleteService requests.
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
 * \sa MigrationHubRefactorSpacesClient::deleteService
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceRequest::DeleteServiceRequest(const DeleteServiceRequest &other)
    : MigrationHubRefactorSpacesRequest(new DeleteServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceRequest object.
 */
DeleteServiceRequest::DeleteServiceRequest()
    : MigrationHubRefactorSpacesRequest(new DeleteServiceRequestPrivate(MigrationHubRefactorSpacesRequest::DeleteServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteServiceRequestPrivate
 * \brief The DeleteServiceRequestPrivate class provides private implementation for DeleteServiceRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a DeleteServiceRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, DeleteServiceRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceRequest
 * class' copy constructor.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const DeleteServiceRequestPrivate &other, DeleteServiceRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
