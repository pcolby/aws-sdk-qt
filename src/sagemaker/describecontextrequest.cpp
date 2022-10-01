// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontextrequest.h"
#include "describecontextrequest_p.h"
#include "describecontextresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeContextRequest
 * \brief The DescribeContextRequest class provides an interface for SageMaker DescribeContext requests.
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
 * \sa SageMakerClient::describeContext
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContextRequest::DescribeContextRequest(const DescribeContextRequest &other)
    : SageMakerRequest(new DescribeContextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContextRequest object.
 */
DescribeContextRequest::DescribeContextRequest()
    : SageMakerRequest(new DescribeContextRequestPrivate(SageMakerRequest::DescribeContextAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContextRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContextResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeContextRequestPrivate
 * \brief The DescribeContextRequestPrivate class provides private implementation for DescribeContextRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeContextRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeContextRequestPrivate::DescribeContextRequestPrivate(
    const SageMakerRequest::Action action, DescribeContextRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContextRequest
 * class' copy constructor.
 */
DescribeContextRequestPrivate::DescribeContextRequestPrivate(
    const DescribeContextRequestPrivate &other, DescribeContextRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
