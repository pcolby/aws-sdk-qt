// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeartifactrequest.h"
#include "describeartifactrequest_p.h"
#include "describeartifactresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeArtifactRequest
 * \brief The DescribeArtifactRequest class provides an interface for SageMaker DescribeArtifact requests.
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
 * \sa SageMakerClient::describeArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeArtifactRequest::DescribeArtifactRequest(const DescribeArtifactRequest &other)
    : SageMakerRequest(new DescribeArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeArtifactRequest object.
 */
DescribeArtifactRequest::DescribeArtifactRequest()
    : SageMakerRequest(new DescribeArtifactRequestPrivate(SageMakerRequest::DescribeArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DescribeArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeArtifactRequestPrivate
 * \brief The DescribeArtifactRequestPrivate class provides private implementation for DescribeArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeArtifactRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeArtifactRequestPrivate::DescribeArtifactRequestPrivate(
    const SageMakerRequest::Action action, DescribeArtifactRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeArtifactRequest
 * class' copy constructor.
 */
DescribeArtifactRequestPrivate::DescribeArtifactRequestPrivate(
    const DescribeArtifactRequestPrivate &other, DescribeArtifactRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
