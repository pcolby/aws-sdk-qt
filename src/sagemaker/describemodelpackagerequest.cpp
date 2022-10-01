// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelpackagerequest.h"
#include "describemodelpackagerequest_p.h"
#include "describemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageRequest
 * \brief The DescribeModelPackageRequest class provides an interface for SageMaker DescribeModelPackage requests.
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
 * \sa SageMakerClient::describeModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelPackageRequest::DescribeModelPackageRequest(const DescribeModelPackageRequest &other)
    : SageMakerRequest(new DescribeModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelPackageRequest object.
 */
DescribeModelPackageRequest::DescribeModelPackageRequest()
    : SageMakerRequest(new DescribeModelPackageRequestPrivate(SageMakerRequest::DescribeModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageRequestPrivate
 * \brief The DescribeModelPackageRequestPrivate class provides private implementation for DescribeModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelPackageRequestPrivate::DescribeModelPackageRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelPackageRequest
 * class' copy constructor.
 */
DescribeModelPackageRequestPrivate::DescribeModelPackageRequestPrivate(
    const DescribeModelPackageRequestPrivate &other, DescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
