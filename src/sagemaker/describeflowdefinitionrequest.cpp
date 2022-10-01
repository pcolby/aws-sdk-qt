// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeflowdefinitionrequest.h"
#include "describeflowdefinitionrequest_p.h"
#include "describeflowdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFlowDefinitionRequest
 * \brief The DescribeFlowDefinitionRequest class provides an interface for SageMaker DescribeFlowDefinition requests.
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
 * \sa SageMakerClient::describeFlowDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFlowDefinitionRequest::DescribeFlowDefinitionRequest(const DescribeFlowDefinitionRequest &other)
    : SageMakerRequest(new DescribeFlowDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFlowDefinitionRequest object.
 */
DescribeFlowDefinitionRequest::DescribeFlowDefinitionRequest()
    : SageMakerRequest(new DescribeFlowDefinitionRequestPrivate(SageMakerRequest::DescribeFlowDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFlowDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFlowDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFlowDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFlowDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeFlowDefinitionRequestPrivate
 * \brief The DescribeFlowDefinitionRequestPrivate class provides private implementation for DescribeFlowDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFlowDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeFlowDefinitionRequestPrivate::DescribeFlowDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DescribeFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFlowDefinitionRequest
 * class' copy constructor.
 */
DescribeFlowDefinitionRequestPrivate::DescribeFlowDefinitionRequestPrivate(
    const DescribeFlowDefinitionRequestPrivate &other, DescribeFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
