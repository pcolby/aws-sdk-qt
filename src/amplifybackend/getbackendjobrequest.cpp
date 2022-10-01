// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendjobrequest.h"
#include "getbackendjobrequest_p.h"
#include "getbackendjobresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobRequest
 * \brief The GetBackendJobRequest class provides an interface for AmplifyBackend GetBackendJob requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendJobRequest::GetBackendJobRequest(const GetBackendJobRequest &other)
    : AmplifyBackendRequest(new GetBackendJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendJobRequest object.
 */
GetBackendJobRequest::GetBackendJobRequest()
    : AmplifyBackendRequest(new GetBackendJobRequestPrivate(AmplifyBackendRequest::GetBackendJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendJobRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendJobResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobRequestPrivate
 * \brief The GetBackendJobRequestPrivate class provides private implementation for GetBackendJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendJobRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendJobRequestPrivate::GetBackendJobRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendJobRequest
 * class' copy constructor.
 */
GetBackendJobRequestPrivate::GetBackendJobRequestPrivate(
    const GetBackendJobRequestPrivate &other, GetBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
