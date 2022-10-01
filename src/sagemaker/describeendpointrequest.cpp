// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointrequest.h"
#include "describeendpointrequest_p.h"
#include "describeendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointRequest
 * \brief The DescribeEndpointRequest class provides an interface for SageMaker DescribeEndpoint requests.
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
 * \sa SageMakerClient::describeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointRequest::DescribeEndpointRequest(const DescribeEndpointRequest &other)
    : SageMakerRequest(new DescribeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointRequest object.
 */
DescribeEndpointRequest::DescribeEndpointRequest()
    : SageMakerRequest(new DescribeEndpointRequestPrivate(SageMakerRequest::DescribeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointRequestPrivate
 * \brief The DescribeEndpointRequestPrivate class provides private implementation for DescribeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const SageMakerRequest::Action action, DescribeEndpointRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointRequest
 * class' copy constructor.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const DescribeEndpointRequestPrivate &other, DescribeEndpointRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
