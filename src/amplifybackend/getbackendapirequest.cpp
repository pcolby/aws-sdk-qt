/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
