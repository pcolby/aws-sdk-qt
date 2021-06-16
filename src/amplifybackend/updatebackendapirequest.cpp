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
