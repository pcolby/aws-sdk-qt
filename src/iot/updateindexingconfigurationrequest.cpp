/*
    Copyright 2013-2018 Paul Colby

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

#include "updateindexingconfigurationrequest.h"
#include "updateindexingconfigurationrequest_p.h"
#include "updateindexingconfigurationresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateIndexingConfigurationRequest
 * \brief The UpdateIndexingConfigurationRequest class provides an interface for IoT UpdateIndexingConfiguration requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::updateIndexingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIndexingConfigurationRequest::UpdateIndexingConfigurationRequest(const UpdateIndexingConfigurationRequest &other)
    : IoTRequest(new UpdateIndexingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIndexingConfigurationRequest object.
 */
UpdateIndexingConfigurationRequest::UpdateIndexingConfigurationRequest()
    : IoTRequest(new UpdateIndexingConfigurationRequestPrivate(IoTRequest::UpdateIndexingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIndexingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIndexingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIndexingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIndexingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::UpdateIndexingConfigurationRequestPrivate
 * \brief The UpdateIndexingConfigurationRequestPrivate class provides private implementation for UpdateIndexingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateIndexingConfigurationRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
UpdateIndexingConfigurationRequestPrivate::UpdateIndexingConfigurationRequestPrivate(
    const IoTRequest::Action action, UpdateIndexingConfigurationRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIndexingConfigurationRequest
 * class' copy constructor.
 */
UpdateIndexingConfigurationRequestPrivate::UpdateIndexingConfigurationRequestPrivate(
    const UpdateIndexingConfigurationRequestPrivate &other, UpdateIndexingConfigurationRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
