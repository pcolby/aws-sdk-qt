// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
