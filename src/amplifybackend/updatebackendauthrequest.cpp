// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendauthrequest.h"
#include "updatebackendauthrequest_p.h"
#include "updatebackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthRequest
 * \brief The UpdateBackendAuthRequest class provides an interface for AmplifyBackend UpdateBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendAuthRequest::UpdateBackendAuthRequest(const UpdateBackendAuthRequest &other)
    : AmplifyBackendRequest(new UpdateBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendAuthRequest object.
 */
UpdateBackendAuthRequest::UpdateBackendAuthRequest()
    : AmplifyBackendRequest(new UpdateBackendAuthRequestPrivate(AmplifyBackendRequest::UpdateBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthRequestPrivate
 * \brief The UpdateBackendAuthRequestPrivate class provides private implementation for UpdateBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendAuthRequestPrivate::UpdateBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendAuthRequest
 * class' copy constructor.
 */
UpdateBackendAuthRequestPrivate::UpdateBackendAuthRequestPrivate(
    const UpdateBackendAuthRequestPrivate &other, UpdateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
