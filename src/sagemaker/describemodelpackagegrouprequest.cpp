/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
