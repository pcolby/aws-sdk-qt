/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
