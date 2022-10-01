// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removebackendconfigrequest.h"
#include "removebackendconfigrequest_p.h"
#include "removebackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigRequest
 * \brief The RemoveBackendConfigRequest class provides an interface for AmplifyBackend RemoveBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveBackendConfigRequest::RemoveBackendConfigRequest(const RemoveBackendConfigRequest &other)
    : AmplifyBackendRequest(new RemoveBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveBackendConfigRequest object.
 */
RemoveBackendConfigRequest::RemoveBackendConfigRequest()
    : AmplifyBackendRequest(new RemoveBackendConfigRequestPrivate(AmplifyBackendRequest::RemoveBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new RemoveBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigRequestPrivate
 * \brief The RemoveBackendConfigRequestPrivate class provides private implementation for RemoveBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
RemoveBackendConfigRequestPrivate::RemoveBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, RemoveBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveBackendConfigRequest
 * class' copy constructor.
 */
RemoveBackendConfigRequestPrivate::RemoveBackendConfigRequestPrivate(
    const RemoveBackendConfigRequestPrivate &other, RemoveBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
