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

#include "createdimensionrequest.h"
#include "createdimensionrequest_p.h"
#include "createdimensionresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateDimensionRequest
 * \brief The CreateDimensionRequest class provides an interface for IoT CreateDimension requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::createDimension
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDimensionRequest::CreateDimensionRequest(const CreateDimensionRequest &other)
    : IoTRequest(new CreateDimensionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDimensionRequest object.
 */
CreateDimensionRequest::CreateDimensionRequest()
    : IoTRequest(new CreateDimensionRequestPrivate(IoTRequest::CreateDimensionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDimensionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDimensionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDimensionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDimensionResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::CreateDimensionRequestPrivate
 * \brief The CreateDimensionRequestPrivate class provides private implementation for CreateDimensionRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateDimensionRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
CreateDimensionRequestPrivate::CreateDimensionRequestPrivate(
    const IoTRequest::Action action, CreateDimensionRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDimensionRequest
 * class' copy constructor.
 */
CreateDimensionRequestPrivate::CreateDimensionRequestPrivate(
    const CreateDimensionRequestPrivate &other, CreateDimensionRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
