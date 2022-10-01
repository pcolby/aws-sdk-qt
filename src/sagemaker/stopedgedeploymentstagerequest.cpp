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

#include "stopedgedeploymentstagerequest.h"
#include "stopedgedeploymentstagerequest_p.h"
#include "stopedgedeploymentstageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopEdgeDeploymentStageRequest
 * \brief The StopEdgeDeploymentStageRequest class provides an interface for SageMaker StopEdgeDeploymentStage requests.
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
 * \sa SageMakerClient::stopEdgeDeploymentStage
 */

/*!
 * Constructs a copy of \a other.
 */
StopEdgeDeploymentStageRequest::StopEdgeDeploymentStageRequest(const StopEdgeDeploymentStageRequest &other)
    : SageMakerRequest(new StopEdgeDeploymentStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEdgeDeploymentStageRequest object.
 */
StopEdgeDeploymentStageRequest::StopEdgeDeploymentStageRequest()
    : SageMakerRequest(new StopEdgeDeploymentStageRequestPrivate(SageMakerRequest::StopEdgeDeploymentStageAction, this))
{

}

/*!
 * \reimp
 */
bool StopEdgeDeploymentStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEdgeDeploymentStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEdgeDeploymentStageRequest::response(QNetworkReply * const reply) const
{
    return new StopEdgeDeploymentStageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopEdgeDeploymentStageRequestPrivate
 * \brief The StopEdgeDeploymentStageRequestPrivate class provides private implementation for StopEdgeDeploymentStageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopEdgeDeploymentStageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopEdgeDeploymentStageRequestPrivate::StopEdgeDeploymentStageRequestPrivate(
    const SageMakerRequest::Action action, StopEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEdgeDeploymentStageRequest
 * class' copy constructor.
 */
StopEdgeDeploymentStageRequestPrivate::StopEdgeDeploymentStageRequestPrivate(
    const StopEdgeDeploymentStageRequestPrivate &other, StopEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
