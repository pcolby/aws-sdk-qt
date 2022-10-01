// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelexplainabilityjobdefinitionrequest.h"
#include "describemodelexplainabilityjobdefinitionrequest_p.h"
#include "describemodelexplainabilityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelExplainabilityJobDefinitionRequest
 * \brief The DescribeModelExplainabilityJobDefinitionRequest class provides an interface for SageMaker DescribeModelExplainabilityJobDefinition requests.
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
 * \sa SageMakerClient::describeModelExplainabilityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelExplainabilityJobDefinitionRequest::DescribeModelExplainabilityJobDefinitionRequest(const DescribeModelExplainabilityJobDefinitionRequest &other)
    : SageMakerRequest(new DescribeModelExplainabilityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelExplainabilityJobDefinitionRequest object.
 */
DescribeModelExplainabilityJobDefinitionRequest::DescribeModelExplainabilityJobDefinitionRequest()
    : SageMakerRequest(new DescribeModelExplainabilityJobDefinitionRequestPrivate(SageMakerRequest::DescribeModelExplainabilityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelExplainabilityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelExplainabilityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelExplainabilityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelExplainabilityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelExplainabilityJobDefinitionRequestPrivate
 * \brief The DescribeModelExplainabilityJobDefinitionRequestPrivate class provides private implementation for DescribeModelExplainabilityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelExplainabilityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelExplainabilityJobDefinitionRequestPrivate::DescribeModelExplainabilityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelExplainabilityJobDefinitionRequest
 * class' copy constructor.
 */
DescribeModelExplainabilityJobDefinitionRequestPrivate::DescribeModelExplainabilityJobDefinitionRequestPrivate(
    const DescribeModelExplainabilityJobDefinitionRequestPrivate &other, DescribeModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
