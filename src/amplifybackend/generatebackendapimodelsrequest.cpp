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

#include "generatebackendapimodelsrequest.h"
#include "generatebackendapimodelsrequest_p.h"
#include "generatebackendapimodelsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsRequest
 * \brief The GenerateBackendAPIModelsRequest class provides an interface for AmplifyBackend GenerateBackendAPIModels requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::generateBackendAPIModels
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateBackendAPIModelsRequest::GenerateBackendAPIModelsRequest(const GenerateBackendAPIModelsRequest &other)
    : AmplifyBackendRequest(new GenerateBackendAPIModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateBackendAPIModelsRequest object.
 */
GenerateBackendAPIModelsRequest::GenerateBackendAPIModelsRequest()
    : AmplifyBackendRequest(new GenerateBackendAPIModelsRequestPrivate(AmplifyBackendRequest::GenerateBackendAPIModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateBackendAPIModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateBackendAPIModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateBackendAPIModelsRequest::response(QNetworkReply * const reply) const
{
    return new GenerateBackendAPIModelsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsRequestPrivate
 * \brief The GenerateBackendAPIModelsRequestPrivate class provides private implementation for GenerateBackendAPIModelsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GenerateBackendAPIModelsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GenerateBackendAPIModelsRequestPrivate::GenerateBackendAPIModelsRequestPrivate(
    const AmplifyBackendRequest::Action action, GenerateBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateBackendAPIModelsRequest
 * class' copy constructor.
 */
GenerateBackendAPIModelsRequestPrivate::GenerateBackendAPIModelsRequestPrivate(
    const GenerateBackendAPIModelsRequestPrivate &other, GenerateBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
