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

#include "importbackendauthrequest.h"
#include "importbackendauthrequest_p.h"
#include "importbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthRequest
 * \brief The ImportBackendAuthRequest class provides an interface for AmplifyBackend ImportBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
ImportBackendAuthRequest::ImportBackendAuthRequest(const ImportBackendAuthRequest &other)
    : AmplifyBackendRequest(new ImportBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportBackendAuthRequest object.
 */
ImportBackendAuthRequest::ImportBackendAuthRequest()
    : AmplifyBackendRequest(new ImportBackendAuthRequestPrivate(AmplifyBackendRequest::ImportBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool ImportBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new ImportBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthRequestPrivate
 * \brief The ImportBackendAuthRequestPrivate class provides private implementation for ImportBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ImportBackendAuthRequestPrivate::ImportBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, ImportBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportBackendAuthRequest
 * class' copy constructor.
 */
ImportBackendAuthRequestPrivate::ImportBackendAuthRequestPrivate(
    const ImportBackendAuthRequestPrivate &other, ImportBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
