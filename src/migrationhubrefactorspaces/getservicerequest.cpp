// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicerequest.h"
#include "getservicerequest_p.h"
#include "getserviceresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetServiceRequest
 * \brief The GetServiceRequest class provides an interface for MigrationHubRefactorSpaces GetService requests.
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
 * \sa MigrationHubRefactorSpacesClient::getService
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceRequest::GetServiceRequest(const GetServiceRequest &other)
    : MigrationHubRefactorSpacesRequest(new GetServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceRequest object.
 */
GetServiceRequest::GetServiceRequest()
    : MigrationHubRefactorSpacesRequest(new GetServiceRequestPrivate(MigrationHubRefactorSpacesRequest::GetServiceAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetServiceRequestPrivate
 * \brief The GetServiceRequestPrivate class provides private implementation for GetServiceRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a GetServiceRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
GetServiceRequestPrivate::GetServiceRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, GetServiceRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceRequest
 * class' copy constructor.
 */
GetServiceRequestPrivate::GetServiceRequestPrivate(
    const GetServiceRequestPrivate &other, GetServiceRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
