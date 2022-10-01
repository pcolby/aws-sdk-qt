// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendrequest.h"
#include "deletebackendrequest_p.h"
#include "deletebackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendRequest
 * \brief The DeleteBackendRequest class provides an interface for AmplifyBackend DeleteBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackend
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendRequest::DeleteBackendRequest(const DeleteBackendRequest &other)
    : AmplifyBackendRequest(new DeleteBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendRequest object.
 */
DeleteBackendRequest::DeleteBackendRequest()
    : AmplifyBackendRequest(new DeleteBackendRequestPrivate(AmplifyBackendRequest::DeleteBackendAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendRequestPrivate
 * \brief The DeleteBackendRequestPrivate class provides private implementation for DeleteBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendRequestPrivate::DeleteBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendRequest
 * class' copy constructor.
 */
DeleteBackendRequestPrivate::DeleteBackendRequestPrivate(
    const DeleteBackendRequestPrivate &other, DeleteBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
