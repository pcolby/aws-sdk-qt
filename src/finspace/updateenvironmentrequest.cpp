// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentrequest.h"
#include "updateenvironmentrequest_p.h"
#include "updateenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::UpdateEnvironmentRequest
 * \brief The UpdateEnvironmentRequest class provides an interface for Finspace UpdateEnvironment requests.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::updateEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other)
    : FinspaceRequest(new UpdateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEnvironmentRequest object.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest()
    : FinspaceRequest(new UpdateEnvironmentRequestPrivate(FinspaceRequest::UpdateEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Finspace::UpdateEnvironmentRequestPrivate
 * \brief The UpdateEnvironmentRequestPrivate class provides private implementation for UpdateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a UpdateEnvironmentRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const FinspaceRequest::Action action, UpdateEnvironmentRequest * const q)
    : FinspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnvironmentRequest
 * class' copy constructor.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const UpdateEnvironmentRequestPrivate &other, UpdateEnvironmentRequest * const q)
    : FinspaceRequestPrivate(other, q)
{

}

} // namespace Finspace
} // namespace QtAws
