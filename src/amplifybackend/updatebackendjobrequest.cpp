// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendjobrequest.h"
#include "updatebackendjobrequest_p.h"
#include "updatebackendjobresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobRequest
 * \brief The UpdateBackendJobRequest class provides an interface for AmplifyBackend UpdateBackendJob requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendJobRequest::UpdateBackendJobRequest(const UpdateBackendJobRequest &other)
    : AmplifyBackendRequest(new UpdateBackendJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendJobRequest object.
 */
UpdateBackendJobRequest::UpdateBackendJobRequest()
    : AmplifyBackendRequest(new UpdateBackendJobRequestPrivate(AmplifyBackendRequest::UpdateBackendJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendJobResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobRequestPrivate
 * \brief The UpdateBackendJobRequestPrivate class provides private implementation for UpdateBackendJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendJobRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendJobRequestPrivate::UpdateBackendJobRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendJobRequest
 * class' copy constructor.
 */
UpdateBackendJobRequestPrivate::UpdateBackendJobRequestPrivate(
    const UpdateBackendJobRequestPrivate &other, UpdateBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
