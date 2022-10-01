// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentrequest.h"
#include "createenvironmentrequest_p.h"
#include "createenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::CreateEnvironmentRequest
 * \brief The CreateEnvironmentRequest class provides an interface for Finspace CreateEnvironment requests.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::createEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest(const CreateEnvironmentRequest &other)
    : FinspaceRequest(new CreateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEnvironmentRequest object.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest()
    : FinspaceRequest(new CreateEnvironmentRequestPrivate(FinspaceRequest::CreateEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Finspace::CreateEnvironmentRequestPrivate
 * \brief The CreateEnvironmentRequestPrivate class provides private implementation for CreateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a CreateEnvironmentRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const FinspaceRequest::Action action, CreateEnvironmentRequest * const q)
    : FinspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentRequest
 * class' copy constructor.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const CreateEnvironmentRequestPrivate &other, CreateEnvironmentRequest * const q)
    : FinspaceRequestPrivate(other, q)
{

}

} // namespace Finspace
} // namespace QtAws
