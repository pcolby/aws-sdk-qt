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

#include "createbackendstoragerequest.h"
#include "createbackendstoragerequest_p.h"
#include "createbackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendStorageRequest
 * \brief The CreateBackendStorageRequest class provides an interface for AmplifyBackend CreateBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendStorageRequest::CreateBackendStorageRequest(const CreateBackendStorageRequest &other)
    : AmplifyBackendRequest(new CreateBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendStorageRequest object.
 */
CreateBackendStorageRequest::CreateBackendStorageRequest()
    : AmplifyBackendRequest(new CreateBackendStorageRequestPrivate(AmplifyBackendRequest::CreateBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendStorageRequestPrivate
 * \brief The CreateBackendStorageRequestPrivate class provides private implementation for CreateBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendStorageRequestPrivate::CreateBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendStorageRequest
 * class' copy constructor.
 */
CreateBackendStorageRequestPrivate::CreateBackendStorageRequestPrivate(
    const CreateBackendStorageRequestPrivate &other, CreateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
