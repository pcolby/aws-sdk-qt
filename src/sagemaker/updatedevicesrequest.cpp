// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicesrequest.h"
#include "updatedevicesrequest_p.h"
#include "updatedevicesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDevicesRequest
 * \brief The UpdateDevicesRequest class provides an interface for SageMaker UpdateDevices requests.
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
 * \sa SageMakerClient::updateDevices
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDevicesRequest::UpdateDevicesRequest(const UpdateDevicesRequest &other)
    : SageMakerRequest(new UpdateDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDevicesRequest object.
 */
UpdateDevicesRequest::UpdateDevicesRequest()
    : SageMakerRequest(new UpdateDevicesRequestPrivate(SageMakerRequest::UpdateDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDevicesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateDevicesRequestPrivate
 * \brief The UpdateDevicesRequestPrivate class provides private implementation for UpdateDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDevicesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateDevicesRequestPrivate::UpdateDevicesRequestPrivate(
    const SageMakerRequest::Action action, UpdateDevicesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevicesRequest
 * class' copy constructor.
 */
UpdateDevicesRequestPrivate::UpdateDevicesRequestPrivate(
    const UpdateDevicesRequestPrivate &other, UpdateDevicesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
