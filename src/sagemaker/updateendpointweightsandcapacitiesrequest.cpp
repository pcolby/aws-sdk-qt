// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
