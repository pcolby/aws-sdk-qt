// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteedgedeploymentplanrequest.h"
#include "deleteedgedeploymentplanrequest_p.h"
#include "deleteedgedeploymentplanresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentPlanRequest
 * \brief The DeleteEdgeDeploymentPlanRequest class provides an interface for SageMaker DeleteEdgeDeploymentPlan requests.
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
 * \sa SageMakerClient::deleteEdgeDeploymentPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEdgeDeploymentPlanRequest::DeleteEdgeDeploymentPlanRequest(const DeleteEdgeDeploymentPlanRequest &other)
    : SageMakerRequest(new DeleteEdgeDeploymentPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEdgeDeploymentPlanRequest object.
 */
DeleteEdgeDeploymentPlanRequest::DeleteEdgeDeploymentPlanRequest()
    : SageMakerRequest(new DeleteEdgeDeploymentPlanRequestPrivate(SageMakerRequest::DeleteEdgeDeploymentPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEdgeDeploymentPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEdgeDeploymentPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEdgeDeploymentPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEdgeDeploymentPlanResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentPlanRequestPrivate
 * \brief The DeleteEdgeDeploymentPlanRequestPrivate class provides private implementation for DeleteEdgeDeploymentPlanRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEdgeDeploymentPlanRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteEdgeDeploymentPlanRequestPrivate::DeleteEdgeDeploymentPlanRequestPrivate(
    const SageMakerRequest::Action action, DeleteEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEdgeDeploymentPlanRequest
 * class' copy constructor.
 */
DeleteEdgeDeploymentPlanRequestPrivate::DeleteEdgeDeploymentPlanRequestPrivate(
    const DeleteEdgeDeploymentPlanRequestPrivate &other, DeleteEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
