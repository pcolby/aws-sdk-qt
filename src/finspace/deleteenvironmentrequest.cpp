// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteenvironmentrequest.h"
#include "deleteenvironmentrequest_p.h"
#include "deleteenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::DeleteEnvironmentRequest
 * \brief The DeleteEnvironmentRequest class provides an interface for Finspace DeleteEnvironment requests.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::deleteEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest(const DeleteEnvironmentRequest &other)
    : FinspaceRequest(new DeleteEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEnvironmentRequest object.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest()
    : FinspaceRequest(new DeleteEnvironmentRequestPrivate(FinspaceRequest::DeleteEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Finspace::DeleteEnvironmentRequestPrivate
 * \brief The DeleteEnvironmentRequestPrivate class provides private implementation for DeleteEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a DeleteEnvironmentRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const FinspaceRequest::Action action, DeleteEnvironmentRequest * const q)
    : FinspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentRequest
 * class' copy constructor.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const DeleteEnvironmentRequestPrivate &other, DeleteEnvironmentRequest * const q)
    : FinspaceRequestPrivate(other, q)
{

}

} // namespace Finspace
} // namespace QtAws
