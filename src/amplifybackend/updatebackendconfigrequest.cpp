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

#include "updatebackendconfigrequest.h"
#include "updatebackendconfigrequest_p.h"
#include "updatebackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigRequest
 * \brief The UpdateBackendConfigRequest class provides an interface for AmplifyBackend UpdateBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendConfigRequest::UpdateBackendConfigRequest(const UpdateBackendConfigRequest &other)
    : AmplifyBackendRequest(new UpdateBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendConfigRequest object.
 */
UpdateBackendConfigRequest::UpdateBackendConfigRequest()
    : AmplifyBackendRequest(new UpdateBackendConfigRequestPrivate(AmplifyBackendRequest::UpdateBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigRequestPrivate
 * \brief The UpdateBackendConfigRequestPrivate class provides private implementation for UpdateBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendConfigRequestPrivate::UpdateBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendConfigRequest
 * class' copy constructor.
 */
UpdateBackendConfigRequestPrivate::UpdateBackendConfigRequestPrivate(
    const UpdateBackendConfigRequestPrivate &other, UpdateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
