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

#include "createbackendconfigrequest.h"
#include "createbackendconfigrequest_p.h"
#include "createbackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigRequest
 * \brief The CreateBackendConfigRequest class provides an interface for AmplifyBackend CreateBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendConfigRequest::CreateBackendConfigRequest(const CreateBackendConfigRequest &other)
    : AmplifyBackendRequest(new CreateBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendConfigRequest object.
 */
CreateBackendConfigRequest::CreateBackendConfigRequest()
    : AmplifyBackendRequest(new CreateBackendConfigRequestPrivate(AmplifyBackendRequest::CreateBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigRequestPrivate
 * \brief The CreateBackendConfigRequestPrivate class provides private implementation for CreateBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendConfigRequestPrivate::CreateBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendConfigRequest
 * class' copy constructor.
 */
CreateBackendConfigRequestPrivate::CreateBackendConfigRequestPrivate(
    const CreateBackendConfigRequestPrivate &other, CreateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
