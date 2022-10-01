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

#include "updateendpointweightsandcapacitiesrequest.h"
#include "updateendpointweightsandcapacitiesrequest_p.h"
#include "updateendpointweightsandcapacitiesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesRequest
 * \brief The UpdateEndpointWeightsAndCapacitiesRequest class provides an interface for SageMaker UpdateEndpointWeightsAndCapacities requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::updateEndpointWeightsAndCapacities
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointWeightsAndCapacitiesRequest::UpdateEndpointWeightsAndCapacitiesRequest(const UpdateEndpointWeightsAndCapacitiesRequest &other)
    : SageMakerRequest(new UpdateEndpointWeightsAndCapacitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointWeightsAndCapacitiesRequest object.
 */
UpdateEndpointWeightsAndCapacitiesRequest::UpdateEndpointWeightsAndCapacitiesRequest()
    : SageMakerRequest(new UpdateEndpointWeightsAndCapacitiesRequestPrivate(SageMakerRequest::UpdateEndpointWeightsAndCapacitiesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointWeightsAndCapacitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointWeightsAndCapacitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointWeightsAndCapacitiesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointWeightsAndCapacitiesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesRequestPrivate
 * \brief The UpdateEndpointWeightsAndCapacitiesRequestPrivate class provides private implementation for UpdateEndpointWeightsAndCapacitiesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateEndpointWeightsAndCapacitiesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateEndpointWeightsAndCapacitiesRequestPrivate::UpdateEndpointWeightsAndCapacitiesRequestPrivate(
    const SageMakerRequest::Action action, UpdateEndpointWeightsAndCapacitiesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointWeightsAndCapacitiesRequest
 * class' copy constructor.
 */
UpdateEndpointWeightsAndCapacitiesRequestPrivate::UpdateEndpointWeightsAndCapacitiesRequestPrivate(
    const UpdateEndpointWeightsAndCapacitiesRequestPrivate &other, UpdateEndpointWeightsAndCapacitiesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
