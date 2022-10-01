// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendapirequest.h"
#include "getbackendapirequest_p.h"
#include "getbackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIRequest
 * \brief The GetBackendAPIRequest class provides an interface for AmplifyBackend GetBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendAPIRequest::GetBackendAPIRequest(const GetBackendAPIRequest &other)
    : AmplifyBackendRequest(new GetBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendAPIRequest object.
 */
GetBackendAPIRequest::GetBackendAPIRequest()
    : AmplifyBackendRequest(new GetBackendAPIRequestPrivate(AmplifyBackendRequest::GetBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIRequestPrivate
 * \brief The GetBackendAPIRequestPrivate class provides private implementation for GetBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendAPIRequestPrivate::GetBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendAPIRequest
 * class' copy constructor.
 */
GetBackendAPIRequestPrivate::GetBackendAPIRequestPrivate(
    const GetBackendAPIRequestPrivate &other, GetBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
