// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteedgedeploymentstagerequest.h"
#include "deleteedgedeploymentstagerequest_p.h"
#include "deleteedgedeploymentstageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentStageRequest
 * \brief The DeleteEdgeDeploymentStageRequest class provides an interface for SageMaker DeleteEdgeDeploymentStage requests.
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
 * \sa SageMakerClient::deleteEdgeDeploymentStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEdgeDeploymentStageRequest::DeleteEdgeDeploymentStageRequest(const DeleteEdgeDeploymentStageRequest &other)
    : SageMakerRequest(new DeleteEdgeDeploymentStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEdgeDeploymentStageRequest object.
 */
DeleteEdgeDeploymentStageRequest::DeleteEdgeDeploymentStageRequest()
    : SageMakerRequest(new DeleteEdgeDeploymentStageRequestPrivate(SageMakerRequest::DeleteEdgeDeploymentStageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEdgeDeploymentStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEdgeDeploymentStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEdgeDeploymentStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEdgeDeploymentStageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentStageRequestPrivate
 * \brief The DeleteEdgeDeploymentStageRequestPrivate class provides private implementation for DeleteEdgeDeploymentStageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEdgeDeploymentStageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteEdgeDeploymentStageRequestPrivate::DeleteEdgeDeploymentStageRequestPrivate(
    const SageMakerRequest::Action action, DeleteEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEdgeDeploymentStageRequest
 * class' copy constructor.
 */
DeleteEdgeDeploymentStageRequestPrivate::DeleteEdgeDeploymentStageRequestPrivate(
    const DeleteEdgeDeploymentStageRequestPrivate &other, DeleteEdgeDeploymentStageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
