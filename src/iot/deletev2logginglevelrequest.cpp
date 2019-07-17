/*
    Copyright 2013-2019 Paul Colby

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

#include "deletev2logginglevelrequest.h"
#include "deletev2logginglevelrequest_p.h"
#include "deletev2logginglevelresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelRequest
 * \brief The DeleteV2LoggingLevelRequest class provides an interface for IoT DeleteV2LoggingLevel requests.
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
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::deleteV2LoggingLevel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest(const DeleteV2LoggingLevelRequest &other)
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteV2LoggingLevelRequest object.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest()
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(IoTRequest::DeleteV2LoggingLevelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteV2LoggingLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteV2LoggingLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteV2LoggingLevelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteV2LoggingLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelRequestPrivate
 * \brief The DeleteV2LoggingLevelRequestPrivate class provides private implementation for DeleteV2LoggingLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteV2LoggingLevelRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const IoTRequest::Action action, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteV2LoggingLevelRequest
 * class' copy constructor.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const DeleteV2LoggingLevelRequestPrivate &other, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
