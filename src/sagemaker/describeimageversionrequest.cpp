// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimageversionrequest.h"
#include "describeimageversionrequest_p.h"
#include "describeimageversionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeImageVersionRequest
 * \brief The DescribeImageVersionRequest class provides an interface for SageMaker DescribeImageVersion requests.
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
 * \sa SageMakerClient::describeImageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageVersionRequest::DescribeImageVersionRequest(const DescribeImageVersionRequest &other)
    : SageMakerRequest(new DescribeImageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageVersionRequest object.
 */
DescribeImageVersionRequest::DescribeImageVersionRequest()
    : SageMakerRequest(new DescribeImageVersionRequestPrivate(SageMakerRequest::DescribeImageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeImageVersionRequestPrivate
 * \brief The DescribeImageVersionRequestPrivate class provides private implementation for DescribeImageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeImageVersionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeImageVersionRequestPrivate::DescribeImageVersionRequestPrivate(
    const SageMakerRequest::Action action, DescribeImageVersionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageVersionRequest
 * class' copy constructor.
 */
DescribeImageVersionRequestPrivate::DescribeImageVersionRequestPrivate(
    const DescribeImageVersionRequestPrivate &other, DescribeImageVersionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
