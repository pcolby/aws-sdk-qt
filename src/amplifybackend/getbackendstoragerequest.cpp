// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendstoragerequest.h"
#include "getbackendstoragerequest_p.h"
#include "getbackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageRequest
 * \brief The GetBackendStorageRequest class provides an interface for AmplifyBackend GetBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendStorageRequest::GetBackendStorageRequest(const GetBackendStorageRequest &other)
    : AmplifyBackendRequest(new GetBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendStorageRequest object.
 */
GetBackendStorageRequest::GetBackendStorageRequest()
    : AmplifyBackendRequest(new GetBackendStorageRequestPrivate(AmplifyBackendRequest::GetBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageRequestPrivate
 * \brief The GetBackendStorageRequestPrivate class provides private implementation for GetBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendStorageRequestPrivate::GetBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendStorageRequest
 * class' copy constructor.
 */
GetBackendStorageRequestPrivate::GetBackendStorageRequestPrivate(
    const GetBackendStorageRequestPrivate &other, GetBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
