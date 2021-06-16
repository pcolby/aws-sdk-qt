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

#include "updateenvironmentrequest.h"
#include "updateenvironmentrequest_p.h"
#include "updateenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::UpdateEnvironmentRequest
 * \brief The UpdateEnvironmentRequest class provides an interface for finspace UpdateEnvironment requests.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::updateEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other)
    : finspaceRequest(new UpdateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEnvironmentRequest object.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest()
    : finspaceRequest(new UpdateEnvironmentRequestPrivate(finspaceRequest::UpdateEnvironmentAction, this))
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
 * \class QtAws::finspace::UpdateEnvironmentRequestPrivate
 * \brief The UpdateEnvironmentRequestPrivate class provides private implementation for UpdateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a UpdateEnvironmentRequestPrivate object for finspace \a action,
 * with public implementation \a q.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const finspaceRequest::Action action, UpdateEnvironmentRequest * const q)
    : finspaceRequestPrivate(action, q)
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
    : finspaceRequestPrivate(other, q)
{

}

} // namespace finspace
} // namespace QtAws
