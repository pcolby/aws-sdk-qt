// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetokenrequest.h"
#include "deletetokenrequest_p.h"
#include "deletetokenresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenRequest
 * \brief The DeleteTokenRequest class provides an interface for AmplifyBackend DeleteToken requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteToken
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTokenRequest::DeleteTokenRequest(const DeleteTokenRequest &other)
    : AmplifyBackendRequest(new DeleteTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTokenRequest object.
 */
DeleteTokenRequest::DeleteTokenRequest()
    : AmplifyBackendRequest(new DeleteTokenRequestPrivate(AmplifyBackendRequest::DeleteTokenAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTokenRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTokenResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenRequestPrivate
 * \brief The DeleteTokenRequestPrivate class provides private implementation for DeleteTokenRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteTokenRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteTokenRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTokenRequest
 * class' copy constructor.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const DeleteTokenRequestPrivate &other, DeleteTokenRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
