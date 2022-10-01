// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelbiasjobdefinitionrequest.h"
#include "describemodelbiasjobdefinitionrequest_p.h"
#include "describemodelbiasjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelBiasJobDefinitionRequest
 * \brief The DescribeModelBiasJobDefinitionRequest class provides an interface for SageMaker DescribeModelBiasJobDefinition requests.
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
 * \sa SageMakerClient::describeModelBiasJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelBiasJobDefinitionRequest::DescribeModelBiasJobDefinitionRequest(const DescribeModelBiasJobDefinitionRequest &other)
    : SageMakerRequest(new DescribeModelBiasJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelBiasJobDefinitionRequest object.
 */
DescribeModelBiasJobDefinitionRequest::DescribeModelBiasJobDefinitionRequest()
    : SageMakerRequest(new DescribeModelBiasJobDefinitionRequestPrivate(SageMakerRequest::DescribeModelBiasJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelBiasJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelBiasJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelBiasJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelBiasJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelBiasJobDefinitionRequestPrivate
 * \brief The DescribeModelBiasJobDefinitionRequestPrivate class provides private implementation for DescribeModelBiasJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelBiasJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelBiasJobDefinitionRequestPrivate::DescribeModelBiasJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelBiasJobDefinitionRequest
 * class' copy constructor.
 */
DescribeModelBiasJobDefinitionRequestPrivate::DescribeModelBiasJobDefinitionRequestPrivate(
    const DescribeModelBiasJobDefinitionRequestPrivate &other, DescribeModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
