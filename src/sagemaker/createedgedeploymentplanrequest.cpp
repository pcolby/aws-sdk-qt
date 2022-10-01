// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createedgedeploymentplanrequest.h"
#include "createedgedeploymentplanrequest_p.h"
#include "createedgedeploymentplanresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentPlanRequest
 * \brief The CreateEdgeDeploymentPlanRequest class provides an interface for SageMaker CreateEdgeDeploymentPlan requests.
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
 * \sa SageMakerClient::createEdgeDeploymentPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEdgeDeploymentPlanRequest::CreateEdgeDeploymentPlanRequest(const CreateEdgeDeploymentPlanRequest &other)
    : SageMakerRequest(new CreateEdgeDeploymentPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEdgeDeploymentPlanRequest object.
 */
CreateEdgeDeploymentPlanRequest::CreateEdgeDeploymentPlanRequest()
    : SageMakerRequest(new CreateEdgeDeploymentPlanRequestPrivate(SageMakerRequest::CreateEdgeDeploymentPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEdgeDeploymentPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEdgeDeploymentPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEdgeDeploymentPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateEdgeDeploymentPlanResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentPlanRequestPrivate
 * \brief The CreateEdgeDeploymentPlanRequestPrivate class provides private implementation for CreateEdgeDeploymentPlanRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEdgeDeploymentPlanRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateEdgeDeploymentPlanRequestPrivate::CreateEdgeDeploymentPlanRequestPrivate(
    const SageMakerRequest::Action action, CreateEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEdgeDeploymentPlanRequest
 * class' copy constructor.
 */
CreateEdgeDeploymentPlanRequestPrivate::CreateEdgeDeploymentPlanRequestPrivate(
    const CreateEdgeDeploymentPlanRequestPrivate &other, CreateEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
