// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendstoragerequest.h"
#include "deletebackendstoragerequest_p.h"
#include "deletebackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageRequest
 * \brief The DeleteBackendStorageRequest class provides an interface for AmplifyBackend DeleteBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendStorageRequest::DeleteBackendStorageRequest(const DeleteBackendStorageRequest &other)
    : AmplifyBackendRequest(new DeleteBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendStorageRequest object.
 */
DeleteBackendStorageRequest::DeleteBackendStorageRequest()
    : AmplifyBackendRequest(new DeleteBackendStorageRequestPrivate(AmplifyBackendRequest::DeleteBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageRequestPrivate
 * \brief The DeleteBackendStorageRequestPrivate class provides private implementation for DeleteBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendStorageRequestPrivate::DeleteBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendStorageRequest
 * class' copy constructor.
 */
DeleteBackendStorageRequestPrivate::DeleteBackendStorageRequestPrivate(
    const DeleteBackendStorageRequestPrivate &other, DeleteBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
