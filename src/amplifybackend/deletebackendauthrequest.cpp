// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendauthrequest.h"
#include "deletebackendauthrequest_p.h"
#include "deletebackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthRequest
 * \brief The DeleteBackendAuthRequest class provides an interface for AmplifyBackend DeleteBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendAuthRequest::DeleteBackendAuthRequest(const DeleteBackendAuthRequest &other)
    : AmplifyBackendRequest(new DeleteBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendAuthRequest object.
 */
DeleteBackendAuthRequest::DeleteBackendAuthRequest()
    : AmplifyBackendRequest(new DeleteBackendAuthRequestPrivate(AmplifyBackendRequest::DeleteBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthRequestPrivate
 * \brief The DeleteBackendAuthRequestPrivate class provides private implementation for DeleteBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendAuthRequestPrivate::DeleteBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendAuthRequest
 * class' copy constructor.
 */
DeleteBackendAuthRequestPrivate::DeleteBackendAuthRequestPrivate(
    const DeleteBackendAuthRequestPrivate &other, DeleteBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
