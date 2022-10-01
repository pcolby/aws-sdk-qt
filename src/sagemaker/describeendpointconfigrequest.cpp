// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointconfigrequest.h"
#include "describeendpointconfigrequest_p.h"
#include "describeendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigRequest
 * \brief The DescribeEndpointConfigRequest class provides an interface for SageMaker DescribeEndpointConfig requests.
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
 * \sa SageMakerClient::describeEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest(const DescribeEndpointConfigRequest &other)
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointConfigRequest object.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest()
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(SageMakerRequest::DescribeEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigRequestPrivate
 * \brief The DescribeEndpointConfigRequestPrivate class provides private implementation for DescribeEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointConfigRequest
 * class' copy constructor.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const DescribeEndpointConfigRequestPrivate &other, DescribeEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
