// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelpackagegrouprequest.h"
#include "describemodelpackagegrouprequest_p.h"
#include "describemodelpackagegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageGroupRequest
 * \brief The DescribeModelPackageGroupRequest class provides an interface for SageMaker DescribeModelPackageGroup requests.
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
 * \sa SageMakerClient::describeModelPackageGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelPackageGroupRequest::DescribeModelPackageGroupRequest(const DescribeModelPackageGroupRequest &other)
    : SageMakerRequest(new DescribeModelPackageGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelPackageGroupRequest object.
 */
DescribeModelPackageGroupRequest::DescribeModelPackageGroupRequest()
    : SageMakerRequest(new DescribeModelPackageGroupRequestPrivate(SageMakerRequest::DescribeModelPackageGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelPackageGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelPackageGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelPackageGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelPackageGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageGroupRequestPrivate
 * \brief The DescribeModelPackageGroupRequestPrivate class provides private implementation for DescribeModelPackageGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelPackageGroupRequestPrivate::DescribeModelPackageGroupRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelPackageGroupRequest
 * class' copy constructor.
 */
DescribeModelPackageGroupRequestPrivate::DescribeModelPackageGroupRequestPrivate(
    const DescribeModelPackageGroupRequestPrivate &other, DescribeModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
