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

#include "importbackendstoragerequest.h"
#include "importbackendstoragerequest_p.h"
#include "importbackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendStorageRequest
 * \brief The ImportBackendStorageRequest class provides an interface for AmplifyBackend ImportBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
ImportBackendStorageRequest::ImportBackendStorageRequest(const ImportBackendStorageRequest &other)
    : AmplifyBackendRequest(new ImportBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportBackendStorageRequest object.
 */
ImportBackendStorageRequest::ImportBackendStorageRequest()
    : AmplifyBackendRequest(new ImportBackendStorageRequestPrivate(AmplifyBackendRequest::ImportBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool ImportBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new ImportBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendStorageRequestPrivate
 * \brief The ImportBackendStorageRequestPrivate class provides private implementation for ImportBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ImportBackendStorageRequestPrivate::ImportBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, ImportBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportBackendStorageRequest
 * class' copy constructor.
 */
ImportBackendStorageRequestPrivate::ImportBackendStorageRequestPrivate(
    const ImportBackendStorageRequestPrivate &other, ImportBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
