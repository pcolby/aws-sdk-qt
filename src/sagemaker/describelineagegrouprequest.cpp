// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelineagegrouprequest.h"
#include "describelineagegrouprequest_p.h"
#include "describelineagegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeLineageGroupRequest
 * \brief The DescribeLineageGroupRequest class provides an interface for SageMaker DescribeLineageGroup requests.
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
 * \sa SageMakerClient::describeLineageGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLineageGroupRequest::DescribeLineageGroupRequest(const DescribeLineageGroupRequest &other)
    : SageMakerRequest(new DescribeLineageGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLineageGroupRequest object.
 */
DescribeLineageGroupRequest::DescribeLineageGroupRequest()
    : SageMakerRequest(new DescribeLineageGroupRequestPrivate(SageMakerRequest::DescribeLineageGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLineageGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLineageGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLineageGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLineageGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeLineageGroupRequestPrivate
 * \brief The DescribeLineageGroupRequestPrivate class provides private implementation for DescribeLineageGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeLineageGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeLineageGroupRequestPrivate::DescribeLineageGroupRequestPrivate(
    const SageMakerRequest::Action action, DescribeLineageGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLineageGroupRequest
 * class' copy constructor.
 */
DescribeLineageGroupRequestPrivate::DescribeLineageGroupRequestPrivate(
    const DescribeLineageGroupRequestPrivate &other, DescribeLineageGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
