// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importbackendauthrequest.h"
#include "importbackendauthrequest_p.h"
#include "importbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthRequest
 * \brief The ImportBackendAuthRequest class provides an interface for AmplifyBackend ImportBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
ImportBackendAuthRequest::ImportBackendAuthRequest(const ImportBackendAuthRequest &other)
    : AmplifyBackendRequest(new ImportBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportBackendAuthRequest object.
 */
ImportBackendAuthRequest::ImportBackendAuthRequest()
    : AmplifyBackendRequest(new ImportBackendAuthRequestPrivate(AmplifyBackendRequest::ImportBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool ImportBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new ImportBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthRequestPrivate
 * \brief The ImportBackendAuthRequestPrivate class provides private implementation for ImportBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ImportBackendAuthRequestPrivate::ImportBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, ImportBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportBackendAuthRequest
 * class' copy constructor.
 */
ImportBackendAuthRequestPrivate::ImportBackendAuthRequestPrivate(
    const ImportBackendAuthRequestPrivate &other, ImportBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
