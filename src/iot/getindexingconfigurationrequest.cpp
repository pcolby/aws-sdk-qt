/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getindexingconfigurationrequest.h"
#include "getindexingconfigurationrequest_p.h"
#include "getindexingconfigurationresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetIndexingConfigurationRequest
 * \brief The GetIndexingConfigurationRequest class provides an interface for IoT GetIndexingConfiguration requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::getIndexingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIndexingConfigurationRequest::GetIndexingConfigurationRequest(const GetIndexingConfigurationRequest &other)
    : IoTRequest(new GetIndexingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIndexingConfigurationRequest object.
 */
GetIndexingConfigurationRequest::GetIndexingConfigurationRequest()
    : IoTRequest(new GetIndexingConfigurationRequestPrivate(IoTRequest::GetIndexingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIndexingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIndexingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIndexingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetIndexingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::GetIndexingConfigurationRequestPrivate
 * \brief The GetIndexingConfigurationRequestPrivate class provides private implementation for GetIndexingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetIndexingConfigurationRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
GetIndexingConfigurationRequestPrivate::GetIndexingConfigurationRequestPrivate(
    const IoTRequest::Action action, GetIndexingConfigurationRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIndexingConfigurationRequest
 * class' copy constructor.
 */
GetIndexingConfigurationRequestPrivate::GetIndexingConfigurationRequestPrivate(
    const GetIndexingConfigurationRequestPrivate &other, GetIndexingConfigurationRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
