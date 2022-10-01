// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendauthrequest.h"
#include "createbackendauthrequest_p.h"
#include "createbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthRequest
 * \brief The CreateBackendAuthRequest class provides an interface for AmplifyBackend CreateBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendAuthRequest::CreateBackendAuthRequest(const CreateBackendAuthRequest &other)
    : AmplifyBackendRequest(new CreateBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendAuthRequest object.
 */
CreateBackendAuthRequest::CreateBackendAuthRequest()
    : AmplifyBackendRequest(new CreateBackendAuthRequestPrivate(AmplifyBackendRequest::CreateBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthRequestPrivate
 * \brief The CreateBackendAuthRequestPrivate class provides private implementation for CreateBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendAuthRequestPrivate::CreateBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendAuthRequest
 * class' copy constructor.
 */
CreateBackendAuthRequestPrivate::CreateBackendAuthRequestPrivate(
    const CreateBackendAuthRequestPrivate &other, CreateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
