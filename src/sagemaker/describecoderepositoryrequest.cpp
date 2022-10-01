// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecoderepositoryrequest.h"
#include "describecoderepositoryrequest_p.h"
#include "describecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryRequest
 * \brief The DescribeCodeRepositoryRequest class provides an interface for SageMaker DescribeCodeRepository requests.
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
 * \sa SageMakerClient::describeCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCodeRepositoryRequest::DescribeCodeRepositoryRequest(const DescribeCodeRepositoryRequest &other)
    : SageMakerRequest(new DescribeCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCodeRepositoryRequest object.
 */
DescribeCodeRepositoryRequest::DescribeCodeRepositoryRequest()
    : SageMakerRequest(new DescribeCodeRepositoryRequestPrivate(SageMakerRequest::DescribeCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryRequestPrivate
 * \brief The DescribeCodeRepositoryRequestPrivate class provides private implementation for DescribeCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeCodeRepositoryRequestPrivate::DescribeCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, DescribeCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCodeRepositoryRequest
 * class' copy constructor.
 */
DescribeCodeRepositoryRequestPrivate::DescribeCodeRepositoryRequestPrivate(
    const DescribeCodeRepositoryRequestPrivate &other, DescribeCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
