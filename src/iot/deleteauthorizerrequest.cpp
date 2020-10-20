/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteauthorizerrequest.h"
#include "deleteauthorizerrequest_p.h"
#include "deleteauthorizerresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteAuthorizerRequest
 * \brief The DeleteAuthorizerRequest class provides an interface for IoT DeleteAuthorizer requests.
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
 * \sa IoTClient::deleteAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other)
    : IoTRequest(new DeleteAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAuthorizerRequest object.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest()
    : IoTRequest(new DeleteAuthorizerRequestPrivate(IoTRequest::DeleteAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteAuthorizerRequestPrivate
 * \brief The DeleteAuthorizerRequestPrivate class provides private implementation for DeleteAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteAuthorizerRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const IoTRequest::Action action, DeleteAuthorizerRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAuthorizerRequest
 * class' copy constructor.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const DeleteAuthorizerRequestPrivate &other, DeleteAuthorizerRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
