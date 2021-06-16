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

#include "deletetokenrequest.h"
#include "deletetokenrequest_p.h"
#include "deletetokenresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenRequest
 * \brief The DeleteTokenRequest class provides an interface for AmplifyBackend DeleteToken requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteToken
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTokenRequest::DeleteTokenRequest(const DeleteTokenRequest &other)
    : AmplifyBackendRequest(new DeleteTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTokenRequest object.
 */
DeleteTokenRequest::DeleteTokenRequest()
    : AmplifyBackendRequest(new DeleteTokenRequestPrivate(AmplifyBackendRequest::DeleteTokenAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTokenRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTokenResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenRequestPrivate
 * \brief The DeleteTokenRequestPrivate class provides private implementation for DeleteTokenRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteTokenRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteTokenRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTokenRequest
 * class' copy constructor.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const DeleteTokenRequestPrivate &other, DeleteTokenRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
