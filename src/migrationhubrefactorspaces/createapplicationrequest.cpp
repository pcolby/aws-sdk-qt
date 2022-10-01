// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateApplicationRequest
 * \brief The CreateApplicationRequest class provides an interface for MigrationHubRefactorSpaces CreateApplication requests.
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
 * \sa MigrationHubRefactorSpacesClient::createApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : MigrationHubRefactorSpacesRequest(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : MigrationHubRefactorSpacesRequest(new CreateApplicationRequestPrivate(MigrationHubRefactorSpacesRequest::CreateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateApplicationRequestPrivate
 * \brief The CreateApplicationRequestPrivate class provides private implementation for CreateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a CreateApplicationRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, CreateApplicationRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
