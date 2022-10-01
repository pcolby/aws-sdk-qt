// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicefleetrequest.h"
#include "deletedevicefleetrequest_p.h"
#include "deletedevicefleetresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetRequest
 * \brief The DeleteDeviceFleetRequest class provides an interface for SageMaker DeleteDeviceFleet requests.
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
 * \sa SageMakerClient::deleteDeviceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceFleetRequest::DeleteDeviceFleetRequest(const DeleteDeviceFleetRequest &other)
    : SageMakerRequest(new DeleteDeviceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceFleetRequest object.
 */
DeleteDeviceFleetRequest::DeleteDeviceFleetRequest()
    : SageMakerRequest(new DeleteDeviceFleetRequestPrivate(SageMakerRequest::DeleteDeviceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetRequestPrivate
 * \brief The DeleteDeviceFleetRequestPrivate class provides private implementation for DeleteDeviceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDeviceFleetRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteDeviceFleetRequestPrivate::DeleteDeviceFleetRequestPrivate(
    const SageMakerRequest::Action action, DeleteDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceFleetRequest
 * class' copy constructor.
 */
DeleteDeviceFleetRequestPrivate::DeleteDeviceFleetRequestPrivate(
    const DeleteDeviceFleetRequestPrivate &other, DeleteDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
