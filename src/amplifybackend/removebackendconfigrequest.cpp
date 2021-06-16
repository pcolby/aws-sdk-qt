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

#include "removebackendconfigrequest.h"
#include "removebackendconfigrequest_p.h"
#include "removebackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigRequest
 * \brief The RemoveBackendConfigRequest class provides an interface for AmplifyBackend RemoveBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveBackendConfigRequest::RemoveBackendConfigRequest(const RemoveBackendConfigRequest &other)
    : AmplifyBackendRequest(new RemoveBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveBackendConfigRequest object.
 */
RemoveBackendConfigRequest::RemoveBackendConfigRequest()
    : AmplifyBackendRequest(new RemoveBackendConfigRequestPrivate(AmplifyBackendRequest::RemoveBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new RemoveBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigRequestPrivate
 * \brief The RemoveBackendConfigRequestPrivate class provides private implementation for RemoveBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
RemoveBackendConfigRequestPrivate::RemoveBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, RemoveBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveBackendConfigRequest
 * class' copy constructor.
 */
RemoveBackendConfigRequestPrivate::RemoveBackendConfigRequestPrivate(
    const RemoveBackendConfigRequestPrivate &other, RemoveBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
