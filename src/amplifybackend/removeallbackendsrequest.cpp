// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeallbackendsrequest.h"
#include "removeallbackendsrequest_p.h"
#include "removeallbackendsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsRequest
 * \brief The RemoveAllBackendsRequest class provides an interface for AmplifyBackend RemoveAllBackends requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeAllBackends
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAllBackendsRequest::RemoveAllBackendsRequest(const RemoveAllBackendsRequest &other)
    : AmplifyBackendRequest(new RemoveAllBackendsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAllBackendsRequest object.
 */
RemoveAllBackendsRequest::RemoveAllBackendsRequest()
    : AmplifyBackendRequest(new RemoveAllBackendsRequestPrivate(AmplifyBackendRequest::RemoveAllBackendsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAllBackendsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAllBackendsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAllBackendsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAllBackendsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsRequestPrivate
 * \brief The RemoveAllBackendsRequestPrivate class provides private implementation for RemoveAllBackendsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveAllBackendsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
RemoveAllBackendsRequestPrivate::RemoveAllBackendsRequestPrivate(
    const AmplifyBackendRequest::Action action, RemoveAllBackendsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAllBackendsRequest
 * class' copy constructor.
 */
RemoveAllBackendsRequestPrivate::RemoveAllBackendsRequestPrivate(
    const RemoveAllBackendsRequestPrivate &other, RemoveAllBackendsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
