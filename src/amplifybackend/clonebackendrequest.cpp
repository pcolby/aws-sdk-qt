// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clonebackendrequest.h"
#include "clonebackendrequest_p.h"
#include "clonebackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CloneBackendRequest
 * \brief The CloneBackendRequest class provides an interface for AmplifyBackend CloneBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::cloneBackend
 */

/*!
 * Constructs a copy of \a other.
 */
CloneBackendRequest::CloneBackendRequest(const CloneBackendRequest &other)
    : AmplifyBackendRequest(new CloneBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CloneBackendRequest object.
 */
CloneBackendRequest::CloneBackendRequest()
    : AmplifyBackendRequest(new CloneBackendRequestPrivate(AmplifyBackendRequest::CloneBackendAction, this))
{

}

/*!
 * \reimp
 */
bool CloneBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CloneBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CloneBackendRequest::response(QNetworkReply * const reply) const
{
    return new CloneBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CloneBackendRequestPrivate
 * \brief The CloneBackendRequestPrivate class provides private implementation for CloneBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CloneBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CloneBackendRequestPrivate::CloneBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, CloneBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CloneBackendRequest
 * class' copy constructor.
 */
CloneBackendRequestPrivate::CloneBackendRequestPrivate(
    const CloneBackendRequestPrivate &other, CloneBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
