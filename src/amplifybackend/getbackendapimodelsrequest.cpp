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

#include "getbackendapimodelsrequest.h"
#include "getbackendapimodelsrequest_p.h"
#include "getbackendapimodelsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsRequest
 * \brief The GetBackendAPIModelsRequest class provides an interface for AmplifyBackend GetBackendAPIModels requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPIModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendAPIModelsRequest::GetBackendAPIModelsRequest(const GetBackendAPIModelsRequest &other)
    : AmplifyBackendRequest(new GetBackendAPIModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendAPIModelsRequest object.
 */
GetBackendAPIModelsRequest::GetBackendAPIModelsRequest()
    : AmplifyBackendRequest(new GetBackendAPIModelsRequestPrivate(AmplifyBackendRequest::GetBackendAPIModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendAPIModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendAPIModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendAPIModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendAPIModelsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsRequestPrivate
 * \brief The GetBackendAPIModelsRequestPrivate class provides private implementation for GetBackendAPIModelsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIModelsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendAPIModelsRequestPrivate::GetBackendAPIModelsRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendAPIModelsRequest
 * class' copy constructor.
 */
GetBackendAPIModelsRequestPrivate::GetBackendAPIModelsRequestPrivate(
    const GetBackendAPIModelsRequestPrivate &other, GetBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
