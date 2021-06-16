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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
