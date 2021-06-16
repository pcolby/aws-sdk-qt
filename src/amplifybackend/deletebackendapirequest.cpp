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

#include "deletebackendapirequest.h"
#include "deletebackendapirequest_p.h"
#include "deletebackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIRequest
 * \brief The DeleteBackendAPIRequest class provides an interface for AmplifyBackend DeleteBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendAPIRequest::DeleteBackendAPIRequest(const DeleteBackendAPIRequest &other)
    : AmplifyBackendRequest(new DeleteBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendAPIRequest object.
 */
DeleteBackendAPIRequest::DeleteBackendAPIRequest()
    : AmplifyBackendRequest(new DeleteBackendAPIRequestPrivate(AmplifyBackendRequest::DeleteBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIRequestPrivate
 * \brief The DeleteBackendAPIRequestPrivate class provides private implementation for DeleteBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendAPIRequestPrivate::DeleteBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendAPIRequest
 * class' copy constructor.
 */
DeleteBackendAPIRequestPrivate::DeleteBackendAPIRequestPrivate(
    const DeleteBackendAPIRequestPrivate &other, DeleteBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
