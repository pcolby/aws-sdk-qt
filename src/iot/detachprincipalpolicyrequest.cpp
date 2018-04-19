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

#include "detachprincipalpolicyrequest.h"
#include "detachprincipalpolicyrequest_p.h"
#include "detachprincipalpolicyresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DetachPrincipalPolicyRequest
 * \brief The DetachPrincipalPolicyRequest class provides an interface for IoT DetachPrincipalPolicy requests.
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
 * \sa IoTClient::detachPrincipalPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DetachPrincipalPolicyRequest::DetachPrincipalPolicyRequest(const DetachPrincipalPolicyRequest &other)
    : IoTRequest(new DetachPrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachPrincipalPolicyRequest object.
 */
DetachPrincipalPolicyRequest::DetachPrincipalPolicyRequest()
    : IoTRequest(new DetachPrincipalPolicyRequestPrivate(IoTRequest::DetachPrincipalPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DetachPrincipalPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachPrincipalPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachPrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachPrincipalPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DetachPrincipalPolicyRequestPrivate
 * \brief The DetachPrincipalPolicyRequestPrivate class provides private implementation for DetachPrincipalPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DetachPrincipalPolicyRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DetachPrincipalPolicyRequestPrivate::DetachPrincipalPolicyRequestPrivate(
    const IoTRequest::Action action, DetachPrincipalPolicyRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachPrincipalPolicyRequest
 * class' copy constructor.
 */
DetachPrincipalPolicyRequestPrivate::DetachPrincipalPolicyRequestPrivate(
    const DetachPrincipalPolicyRequestPrivate &other, DetachPrincipalPolicyRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
