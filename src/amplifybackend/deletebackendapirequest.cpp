// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendapirequest.h"
#include "deletebackendapirequest_p.h"
#include "deletebackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIRequest
 * \brief The DeleteBackendAPIRequest class provides an interface for AmplifyBackend DeleteBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendAPIRequest::DeleteBackendAPIRequest(const DeleteBackendAPIRequest &other)
    : AmplifyBackendRequest(new DeleteBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendAPIRequest object.
 */
DeleteBackendAPIRequest::DeleteBackendAPIRequest()
    : AmplifyBackendRequest(new DeleteBackendAPIRequestPrivate(AmplifyBackendRequest::DeleteBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIRequestPrivate
 * \brief The DeleteBackendAPIRequestPrivate class provides private implementation for DeleteBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendAPIRequestPrivate::DeleteBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendAPIRequest
 * class' copy constructor.
 */
DeleteBackendAPIRequestPrivate::DeleteBackendAPIRequestPrivate(
    const DeleteBackendAPIRequestPrivate &other, DeleteBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
