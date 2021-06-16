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

#include "createbackendapirequest.h"
#include "createbackendapirequest_p.h"
#include "createbackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIRequest
 * \brief The CreateBackendAPIRequest class provides an interface for AmplifyBackend CreateBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendAPIRequest::CreateBackendAPIRequest(const CreateBackendAPIRequest &other)
    : AmplifyBackendRequest(new CreateBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendAPIRequest object.
 */
CreateBackendAPIRequest::CreateBackendAPIRequest()
    : AmplifyBackendRequest(new CreateBackendAPIRequestPrivate(AmplifyBackendRequest::CreateBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIRequestPrivate
 * \brief The CreateBackendAPIRequestPrivate class provides private implementation for CreateBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendAPIRequestPrivate::CreateBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendAPIRequest
 * class' copy constructor.
 */
CreateBackendAPIRequestPrivate::CreateBackendAPIRequestPrivate(
    const CreateBackendAPIRequestPrivate &other, CreateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
