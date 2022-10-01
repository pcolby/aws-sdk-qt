// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdevicesrequest.h"
#include "registerdevicesrequest_p.h"
#include "registerdevicesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RegisterDevicesRequest
 * \brief The RegisterDevicesRequest class provides an interface for SageMaker RegisterDevices requests.
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
 * \sa SageMakerClient::registerDevices
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterDevicesRequest::RegisterDevicesRequest(const RegisterDevicesRequest &other)
    : SageMakerRequest(new RegisterDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterDevicesRequest object.
 */
RegisterDevicesRequest::RegisterDevicesRequest()
    : SageMakerRequest(new RegisterDevicesRequestPrivate(SageMakerRequest::RegisterDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterDevicesRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::RegisterDevicesRequestPrivate
 * \brief The RegisterDevicesRequestPrivate class provides private implementation for RegisterDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RegisterDevicesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
RegisterDevicesRequestPrivate::RegisterDevicesRequestPrivate(
    const SageMakerRequest::Action action, RegisterDevicesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterDevicesRequest
 * class' copy constructor.
 */
RegisterDevicesRequestPrivate::RegisterDevicesRequestPrivate(
    const RegisterDevicesRequestPrivate &other, RegisterDevicesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
