/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteenvironmentrequest.h"
#include "deleteenvironmentrequest_p.h"
#include "deleteenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::DeleteEnvironmentRequest
 * \brief The DeleteEnvironmentRequest class provides an interface for finspace DeleteEnvironment requests.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::deleteEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest(const DeleteEnvironmentRequest &other)
    : finspaceRequest(new DeleteEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEnvironmentRequest object.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest()
    : finspaceRequest(new DeleteEnvironmentRequestPrivate(finspaceRequest::DeleteEnvironmentAction, this))
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
 * \class QtAws::finspace::DeleteEnvironmentRequestPrivate
 * \brief The DeleteEnvironmentRequestPrivate class provides private implementation for DeleteEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a DeleteEnvironmentRequestPrivate object for finspace \a action,
 * with public implementation \a q.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const finspaceRequest::Action action, DeleteEnvironmentRequest * const q)
    : finspaceRequestPrivate(action, q)
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
    : finspaceRequestPrivate(other, q)
{

}

} // namespace finspace
} // namespace QtAws
