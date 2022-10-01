// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeedgedeploymentplanrequest.h"
#include "describeedgedeploymentplanrequest_p.h"
#include "describeedgedeploymentplanresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEdgeDeploymentPlanRequest
 * \brief The DescribeEdgeDeploymentPlanRequest class provides an interface for SageMaker DescribeEdgeDeploymentPlan requests.
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
 * \sa SageMakerClient::describeEdgeDeploymentPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEdgeDeploymentPlanRequest::DescribeEdgeDeploymentPlanRequest(const DescribeEdgeDeploymentPlanRequest &other)
    : SageMakerRequest(new DescribeEdgeDeploymentPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEdgeDeploymentPlanRequest object.
 */
DescribeEdgeDeploymentPlanRequest::DescribeEdgeDeploymentPlanRequest()
    : SageMakerRequest(new DescribeEdgeDeploymentPlanRequestPrivate(SageMakerRequest::DescribeEdgeDeploymentPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEdgeDeploymentPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEdgeDeploymentPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEdgeDeploymentPlanRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEdgeDeploymentPlanResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeEdgeDeploymentPlanRequestPrivate
 * \brief The DescribeEdgeDeploymentPlanRequestPrivate class provides private implementation for DescribeEdgeDeploymentPlanRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEdgeDeploymentPlanRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeEdgeDeploymentPlanRequestPrivate::DescribeEdgeDeploymentPlanRequestPrivate(
    const SageMakerRequest::Action action, DescribeEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEdgeDeploymentPlanRequest
 * class' copy constructor.
 */
DescribeEdgeDeploymentPlanRequestPrivate::DescribeEdgeDeploymentPlanRequestPrivate(
    const DescribeEdgeDeploymentPlanRequestPrivate &other, DescribeEdgeDeploymentPlanRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
