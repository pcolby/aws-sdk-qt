// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendrequest.h"
#include "getbackendrequest_p.h"
#include "getbackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendRequest
 * \brief The GetBackendRequest class provides an interface for AmplifyBackend GetBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackend
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendRequest::GetBackendRequest(const GetBackendRequest &other)
    : AmplifyBackendRequest(new GetBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendRequest object.
 */
GetBackendRequest::GetBackendRequest()
    : AmplifyBackendRequest(new GetBackendRequestPrivate(AmplifyBackendRequest::GetBackendAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendRequestPrivate
 * \brief The GetBackendRequestPrivate class provides private implementation for GetBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendRequestPrivate::GetBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendRequest
 * class' copy constructor.
 */
GetBackendRequestPrivate::GetBackendRequestPrivate(
    const GetBackendRequestPrivate &other, GetBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
