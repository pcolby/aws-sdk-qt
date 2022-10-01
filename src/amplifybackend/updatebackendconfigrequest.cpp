// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendconfigrequest.h"
#include "updatebackendconfigrequest_p.h"
#include "updatebackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigRequest
 * \brief The UpdateBackendConfigRequest class provides an interface for AmplifyBackend UpdateBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendConfigRequest::UpdateBackendConfigRequest(const UpdateBackendConfigRequest &other)
    : AmplifyBackendRequest(new UpdateBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendConfigRequest object.
 */
UpdateBackendConfigRequest::UpdateBackendConfigRequest()
    : AmplifyBackendRequest(new UpdateBackendConfigRequestPrivate(AmplifyBackendRequest::UpdateBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigRequestPrivate
 * \brief The UpdateBackendConfigRequestPrivate class provides private implementation for UpdateBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendConfigRequestPrivate::UpdateBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendConfigRequest
 * class' copy constructor.
 */
UpdateBackendConfigRequestPrivate::UpdateBackendConfigRequestPrivate(
    const UpdateBackendConfigRequestPrivate &other, UpdateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
