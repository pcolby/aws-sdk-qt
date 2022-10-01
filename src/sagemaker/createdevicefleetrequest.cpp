// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicefleetrequest.h"
#include "createdevicefleetrequest_p.h"
#include "createdevicefleetresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateDeviceFleetRequest
 * \brief The CreateDeviceFleetRequest class provides an interface for SageMaker CreateDeviceFleet requests.
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
 * \sa SageMakerClient::createDeviceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceFleetRequest::CreateDeviceFleetRequest(const CreateDeviceFleetRequest &other)
    : SageMakerRequest(new CreateDeviceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceFleetRequest object.
 */
CreateDeviceFleetRequest::CreateDeviceFleetRequest()
    : SageMakerRequest(new CreateDeviceFleetRequestPrivate(SageMakerRequest::CreateDeviceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceFleetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateDeviceFleetRequestPrivate
 * \brief The CreateDeviceFleetRequestPrivate class provides private implementation for CreateDeviceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateDeviceFleetRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateDeviceFleetRequestPrivate::CreateDeviceFleetRequestPrivate(
    const SageMakerRequest::Action action, CreateDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceFleetRequest
 * class' copy constructor.
 */
CreateDeviceFleetRequestPrivate::CreateDeviceFleetRequestPrivate(
    const CreateDeviceFleetRequestPrivate &other, CreateDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
