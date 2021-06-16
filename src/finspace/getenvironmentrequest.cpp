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

#include "getenvironmentrequest.h"
#include "getenvironmentrequest_p.h"
#include "getenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::GetEnvironmentRequest
 * \brief The GetEnvironmentRequest class provides an interface for finspace GetEnvironment requests.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::getEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
GetEnvironmentRequest::GetEnvironmentRequest(const GetEnvironmentRequest &other)
    : finspaceRequest(new GetEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEnvironmentRequest object.
 */
GetEnvironmentRequest::GetEnvironmentRequest()
    : finspaceRequest(new GetEnvironmentRequestPrivate(finspaceRequest::GetEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new GetEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::finspace::GetEnvironmentRequestPrivate
 * \brief The GetEnvironmentRequestPrivate class provides private implementation for GetEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a GetEnvironmentRequestPrivate object for finspace \a action,
 * with public implementation \a q.
 */
GetEnvironmentRequestPrivate::GetEnvironmentRequestPrivate(
    const finspaceRequest::Action action, GetEnvironmentRequest * const q)
    : finspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEnvironmentRequest
 * class' copy constructor.
 */
GetEnvironmentRequestPrivate::GetEnvironmentRequestPrivate(
    const GetEnvironmentRequestPrivate &other, GetEnvironmentRequest * const q)
    : finspaceRequestPrivate(other, q)
{

}

} // namespace finspace
} // namespace QtAws
