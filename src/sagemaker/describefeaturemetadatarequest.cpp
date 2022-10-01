// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefeaturemetadatarequest.h"
#include "describefeaturemetadatarequest_p.h"
#include "describefeaturemetadataresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFeatureMetadataRequest
 * \brief The DescribeFeatureMetadataRequest class provides an interface for SageMaker DescribeFeatureMetadata requests.
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
 * \sa SageMakerClient::describeFeatureMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFeatureMetadataRequest::DescribeFeatureMetadataRequest(const DescribeFeatureMetadataRequest &other)
    : SageMakerRequest(new DescribeFeatureMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFeatureMetadataRequest object.
 */
DescribeFeatureMetadataRequest::DescribeFeatureMetadataRequest()
    : SageMakerRequest(new DescribeFeatureMetadataRequestPrivate(SageMakerRequest::DescribeFeatureMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFeatureMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFeatureMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFeatureMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFeatureMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeFeatureMetadataRequestPrivate
 * \brief The DescribeFeatureMetadataRequestPrivate class provides private implementation for DescribeFeatureMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFeatureMetadataRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeFeatureMetadataRequestPrivate::DescribeFeatureMetadataRequestPrivate(
    const SageMakerRequest::Action action, DescribeFeatureMetadataRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFeatureMetadataRequest
 * class' copy constructor.
 */
DescribeFeatureMetadataRequestPrivate::DescribeFeatureMetadataRequestPrivate(
    const DescribeFeatureMetadataRequestPrivate &other, DescribeFeatureMetadataRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
