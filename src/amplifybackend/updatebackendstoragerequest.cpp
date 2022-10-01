// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendstoragerequest.h"
#include "updatebackendstoragerequest_p.h"
#include "updatebackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageRequest
 * \brief The UpdateBackendStorageRequest class provides an interface for AmplifyBackend UpdateBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendStorageRequest::UpdateBackendStorageRequest(const UpdateBackendStorageRequest &other)
    : AmplifyBackendRequest(new UpdateBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendStorageRequest object.
 */
UpdateBackendStorageRequest::UpdateBackendStorageRequest()
    : AmplifyBackendRequest(new UpdateBackendStorageRequestPrivate(AmplifyBackendRequest::UpdateBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageRequestPrivate
 * \brief The UpdateBackendStorageRequestPrivate class provides private implementation for UpdateBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendStorageRequestPrivate::UpdateBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendStorageRequest
 * class' copy constructor.
 */
UpdateBackendStorageRequestPrivate::UpdateBackendStorageRequestPrivate(
    const UpdateBackendStorageRequestPrivate &other, UpdateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
