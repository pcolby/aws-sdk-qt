// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendapirequest.h"
#include "updatebackendapirequest_p.h"
#include "updatebackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIRequest
 * \brief The UpdateBackendAPIRequest class provides an interface for AmplifyBackend UpdateBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendAPIRequest::UpdateBackendAPIRequest(const UpdateBackendAPIRequest &other)
    : AmplifyBackendRequest(new UpdateBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendAPIRequest object.
 */
UpdateBackendAPIRequest::UpdateBackendAPIRequest()
    : AmplifyBackendRequest(new UpdateBackendAPIRequestPrivate(AmplifyBackendRequest::UpdateBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIRequestPrivate
 * \brief The UpdateBackendAPIRequestPrivate class provides private implementation for UpdateBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendAPIRequestPrivate::UpdateBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendAPIRequest
 * class' copy constructor.
 */
UpdateBackendAPIRequestPrivate::UpdateBackendAPIRequestPrivate(
    const UpdateBackendAPIRequestPrivate &other, UpdateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
