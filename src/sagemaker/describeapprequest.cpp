// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapprequest.h"
#include "describeapprequest_p.h"
#include "describeappresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAppRequest
 * \brief The DescribeAppRequest class provides an interface for SageMaker DescribeApp requests.
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
 * \sa SageMakerClient::describeApp
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppRequest::DescribeAppRequest(const DescribeAppRequest &other)
    : SageMakerRequest(new DescribeAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppRequest object.
 */
DescribeAppRequest::DescribeAppRequest()
    : SageMakerRequest(new DescribeAppRequestPrivate(SageMakerRequest::DescribeAppAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeAppRequestPrivate
 * \brief The DescribeAppRequestPrivate class provides private implementation for DescribeAppRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAppRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeAppRequestPrivate::DescribeAppRequestPrivate(
    const SageMakerRequest::Action action, DescribeAppRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppRequest
 * class' copy constructor.
 */
DescribeAppRequestPrivate::DescribeAppRequestPrivate(
    const DescribeAppRequestPrivate &other, DescribeAppRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
