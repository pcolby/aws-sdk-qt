// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdescribemodelpackagerequest.h"
#include "batchdescribemodelpackagerequest_p.h"
#include "batchdescribemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::BatchDescribeModelPackageRequest
 * \brief The BatchDescribeModelPackageRequest class provides an interface for SageMaker BatchDescribeModelPackage requests.
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
 * \sa SageMakerClient::batchDescribeModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDescribeModelPackageRequest::BatchDescribeModelPackageRequest(const BatchDescribeModelPackageRequest &other)
    : SageMakerRequest(new BatchDescribeModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDescribeModelPackageRequest object.
 */
BatchDescribeModelPackageRequest::BatchDescribeModelPackageRequest()
    : SageMakerRequest(new BatchDescribeModelPackageRequestPrivate(SageMakerRequest::BatchDescribeModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDescribeModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDescribeModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDescribeModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDescribeModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::BatchDescribeModelPackageRequestPrivate
 * \brief The BatchDescribeModelPackageRequestPrivate class provides private implementation for BatchDescribeModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a BatchDescribeModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
BatchDescribeModelPackageRequestPrivate::BatchDescribeModelPackageRequestPrivate(
    const SageMakerRequest::Action action, BatchDescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDescribeModelPackageRequest
 * class' copy constructor.
 */
BatchDescribeModelPackageRequestPrivate::BatchDescribeModelPackageRequestPrivate(
    const BatchDescribeModelPackageRequestPrivate &other, BatchDescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
