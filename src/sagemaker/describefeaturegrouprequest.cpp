// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefeaturegrouprequest.h"
#include "describefeaturegrouprequest_p.h"
#include "describefeaturegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupRequest
 * \brief The DescribeFeatureGroupRequest class provides an interface for SageMaker DescribeFeatureGroup requests.
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
 * \sa SageMakerClient::describeFeatureGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFeatureGroupRequest::DescribeFeatureGroupRequest(const DescribeFeatureGroupRequest &other)
    : SageMakerRequest(new DescribeFeatureGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFeatureGroupRequest object.
 */
DescribeFeatureGroupRequest::DescribeFeatureGroupRequest()
    : SageMakerRequest(new DescribeFeatureGroupRequestPrivate(SageMakerRequest::DescribeFeatureGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFeatureGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFeatureGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFeatureGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFeatureGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupRequestPrivate
 * \brief The DescribeFeatureGroupRequestPrivate class provides private implementation for DescribeFeatureGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFeatureGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeFeatureGroupRequestPrivate::DescribeFeatureGroupRequestPrivate(
    const SageMakerRequest::Action action, DescribeFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFeatureGroupRequest
 * class' copy constructor.
 */
DescribeFeatureGroupRequestPrivate::DescribeFeatureGroupRequestPrivate(
    const DescribeFeatureGroupRequestPrivate &other, DescribeFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
