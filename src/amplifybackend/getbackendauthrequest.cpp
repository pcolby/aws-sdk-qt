// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendauthrequest.h"
#include "getbackendauthrequest_p.h"
#include "getbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthRequest
 * \brief The GetBackendAuthRequest class provides an interface for AmplifyBackend GetBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendAuthRequest::GetBackendAuthRequest(const GetBackendAuthRequest &other)
    : AmplifyBackendRequest(new GetBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendAuthRequest object.
 */
GetBackendAuthRequest::GetBackendAuthRequest()
    : AmplifyBackendRequest(new GetBackendAuthRequestPrivate(AmplifyBackendRequest::GetBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthRequestPrivate
 * \brief The GetBackendAuthRequestPrivate class provides private implementation for GetBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendAuthRequestPrivate::GetBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendAuthRequest
 * class' copy constructor.
 */
GetBackendAuthRequestPrivate::GetBackendAuthRequestPrivate(
    const GetBackendAuthRequestPrivate &other, GetBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
