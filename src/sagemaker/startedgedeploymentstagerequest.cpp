// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startedgedeploymentstagerequest.h"
#include "startedgedeploymentstagerequest_p.h"
#include "startedgedeploymentstageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartEdgeDeploymentStageRequest
 * \brief The StartEdgeDeploymentStageRequest class provides an interface for SageMaker StartEdgeDeploymentStage requests.
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
 * \sa SageMakerClient::startEdgeDeploymentStage
 */

/*!
 * Constructs a copy of \a other.
 */
StartEdgeDeploymentStageRequest::StartEdgeDeploymentStageRequest(const StartEdgeDeploymentStageRequest &other)
    : SageMakerRequest(new StartEdgeDeploymentStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEdgeDeploymentStageRequest object.
 */
StartEdgeDeploymentStageRequest::StartEdgeDeploymentStageRequest()
    : SageMakerRequest(new StartEdgeDeploymentStageRequestPrivate(SageMakerRequest::StartEdgeDeploymentStageAction, this))
{

}

/*!
 * \reimp
 */
bool StartEdgeDeploymentStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEdgeDeploymentStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEdgeDeploymentStageRequest::response(QNetworkReply * const reply) const
{
    return new StartEdgeDeploymentStageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StartEdgeDeploymentStageRequestPrivate
 * \brief The StartEdgeDeploymentStageRequestPrivate class provides private implementation for StartEdgeDeploymentStageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartEdgeDeploymentStageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StartEdgeDeploymentStageRequestPrivate::StartEdgeDeploymentStageRequestPrivate(
    const SageMakerRequest::Action action, StartEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEdgeDeploymentStageRequest
 * class' copy constructor.
 */
StartEdgeDeploymentStageRequestPrivate::StartEdgeDeploymentStageRequestPrivate(
    const StartEdgeDeploymentStageRequestPrivate &other, StartEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
