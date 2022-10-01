// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterdevicesrequest.h"
#include "deregisterdevicesrequest_p.h"
#include "deregisterdevicesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeregisterDevicesRequest
 * \brief The DeregisterDevicesRequest class provides an interface for SageMaker DeregisterDevices requests.
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
 * \sa SageMakerClient::deregisterDevices
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterDevicesRequest::DeregisterDevicesRequest(const DeregisterDevicesRequest &other)
    : SageMakerRequest(new DeregisterDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterDevicesRequest object.
 */
DeregisterDevicesRequest::DeregisterDevicesRequest()
    : SageMakerRequest(new DeregisterDevicesRequestPrivate(SageMakerRequest::DeregisterDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterDevicesRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeregisterDevicesRequestPrivate
 * \brief The DeregisterDevicesRequestPrivate class provides private implementation for DeregisterDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeregisterDevicesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeregisterDevicesRequestPrivate::DeregisterDevicesRequestPrivate(
    const SageMakerRequest::Action action, DeregisterDevicesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterDevicesRequest
 * class' copy constructor.
 */
DeregisterDevicesRequestPrivate::DeregisterDevicesRequestPrivate(
    const DeregisterDevicesRequestPrivate &other, DeregisterDevicesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
