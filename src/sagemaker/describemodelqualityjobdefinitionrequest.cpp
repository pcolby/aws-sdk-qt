// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelqualityjobdefinitionrequest.h"
#include "describemodelqualityjobdefinitionrequest_p.h"
#include "describemodelqualityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelQualityJobDefinitionRequest
 * \brief The DescribeModelQualityJobDefinitionRequest class provides an interface for SageMaker DescribeModelQualityJobDefinition requests.
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
 * \sa SageMakerClient::describeModelQualityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelQualityJobDefinitionRequest::DescribeModelQualityJobDefinitionRequest(const DescribeModelQualityJobDefinitionRequest &other)
    : SageMakerRequest(new DescribeModelQualityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelQualityJobDefinitionRequest object.
 */
DescribeModelQualityJobDefinitionRequest::DescribeModelQualityJobDefinitionRequest()
    : SageMakerRequest(new DescribeModelQualityJobDefinitionRequestPrivate(SageMakerRequest::DescribeModelQualityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelQualityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelQualityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelQualityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelQualityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelQualityJobDefinitionRequestPrivate
 * \brief The DescribeModelQualityJobDefinitionRequestPrivate class provides private implementation for DescribeModelQualityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelQualityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelQualityJobDefinitionRequestPrivate::DescribeModelQualityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelQualityJobDefinitionRequest
 * class' copy constructor.
 */
DescribeModelQualityJobDefinitionRequestPrivate::DescribeModelQualityJobDefinitionRequestPrivate(
    const DescribeModelQualityJobDefinitionRequestPrivate &other, DescribeModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
