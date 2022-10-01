// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
