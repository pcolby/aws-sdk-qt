/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createendpointconfigrequest.h"
#include "createendpointconfigrequest_p.h"
#include "createendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigRequest
 * \brief The CreateEndpointConfigRequest class provides an interface for SageMaker CreateEndpointConfig requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::createEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest(const CreateEndpointConfigRequest &other)
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEndpointConfigRequest object.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest()
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(SageMakerRequest::CreateEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigRequestPrivate
 * \brief The CreateEndpointConfigRequestPrivate class provides private implementation for CreateEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 *
 * Constructs a CreateEndpointConfigRequestPrivate object for SageMaker \a action with,
 * public implementation \a q.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointConfigRequest
 * class' copy constructor.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const CreateEndpointConfigRequestPrivate &other, CreateEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
