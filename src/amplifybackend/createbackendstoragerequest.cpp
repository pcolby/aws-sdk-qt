// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
