/*
    Copyright 2013-2019 Paul Colby

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

#include "createendpointrequest.h"
#include "createendpointrequest_p.h"
#include "createendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEndpointRequest
 * \brief The CreateEndpointRequest class provides an interface for SageMaker CreateEndpoint requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEndpointRequest::CreateEndpointRequest(const CreateEndpointRequest &other)
    : SageMakerRequest(new CreateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEndpointRequest object.
 */
CreateEndpointRequest::CreateEndpointRequest()
    : SageMakerRequest(new CreateEndpointRequestPrivate(SageMakerRequest::CreateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateEndpointRequestPrivate
 * \brief The CreateEndpointRequestPrivate class provides private implementation for CreateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEndpointRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const SageMakerRequest::Action action, CreateEndpointRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointRequest
 * class' copy constructor.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const CreateEndpointRequestPrivate &other, CreateEndpointRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
