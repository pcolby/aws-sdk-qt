// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagerequest.h"
#include "describeimagerequest_p.h"
#include "describeimageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeImageRequest
 * \brief The DescribeImageRequest class provides an interface for SageMaker DescribeImage requests.
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
 * \sa SageMakerClient::describeImage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageRequest::DescribeImageRequest(const DescribeImageRequest &other)
    : SageMakerRequest(new DescribeImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageRequest object.
 */
DescribeImageRequest::DescribeImageRequest()
    : SageMakerRequest(new DescribeImageRequestPrivate(SageMakerRequest::DescribeImageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeImageRequestPrivate
 * \brief The DescribeImageRequestPrivate class provides private implementation for DescribeImageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeImageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeImageRequestPrivate::DescribeImageRequestPrivate(
    const SageMakerRequest::Action action, DescribeImageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageRequest
 * class' copy constructor.
 */
DescribeImageRequestPrivate::DescribeImageRequestPrivate(
    const DescribeImageRequestPrivate &other, DescribeImageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
