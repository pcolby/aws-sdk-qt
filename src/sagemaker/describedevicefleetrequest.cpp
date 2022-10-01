// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicefleetrequest.h"
#include "describedevicefleetrequest_p.h"
#include "describedevicefleetresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDeviceFleetRequest
 * \brief The DescribeDeviceFleetRequest class provides an interface for SageMaker DescribeDeviceFleet requests.
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
 * \sa SageMakerClient::describeDeviceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeviceFleetRequest::DescribeDeviceFleetRequest(const DescribeDeviceFleetRequest &other)
    : SageMakerRequest(new DescribeDeviceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeviceFleetRequest object.
 */
DescribeDeviceFleetRequest::DescribeDeviceFleetRequest()
    : SageMakerRequest(new DescribeDeviceFleetRequestPrivate(SageMakerRequest::DescribeDeviceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeviceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeviceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeviceFleetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeviceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeDeviceFleetRequestPrivate
 * \brief The DescribeDeviceFleetRequestPrivate class provides private implementation for DescribeDeviceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDeviceFleetRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeDeviceFleetRequestPrivate::DescribeDeviceFleetRequestPrivate(
    const SageMakerRequest::Action action, DescribeDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeviceFleetRequest
 * class' copy constructor.
 */
DescribeDeviceFleetRequestPrivate::DescribeDeviceFleetRequestPrivate(
    const DescribeDeviceFleetRequestPrivate &other, DescribeDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
