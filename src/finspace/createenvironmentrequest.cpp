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

#include "createenvironmentrequest.h"
#include "createenvironmentrequest_p.h"
#include "createenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::CreateEnvironmentRequest
 * \brief The CreateEnvironmentRequest class provides an interface for finspace CreateEnvironment requests.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::createEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest(const CreateEnvironmentRequest &other)
    : finspaceRequest(new CreateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEnvironmentRequest object.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest()
    : finspaceRequest(new CreateEnvironmentRequestPrivate(finspaceRequest::CreateEnvironmentAction, this))
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
 * \class QtAws::finspace::CreateEnvironmentRequestPrivate
 * \brief The CreateEnvironmentRequestPrivate class provides private implementation for CreateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a CreateEnvironmentRequestPrivate object for finspace \a action,
 * with public implementation \a q.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const finspaceRequest::Action action, CreateEnvironmentRequest * const q)
    : finspaceRequestPrivate(action, q)
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
    : finspaceRequestPrivate(other, q)
{

}

} // namespace finspace
} // namespace QtAws
