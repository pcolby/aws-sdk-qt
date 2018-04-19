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

#include "geteffectivepoliciesrequest.h"
#include "geteffectivepoliciesrequest_p.h"
#include "geteffectivepoliciesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetEffectivePoliciesRequest
 * \brief The GetEffectivePoliciesRequest class provides an interface for IoT GetEffectivePolicies requests.
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
 * \sa IoTClient::getEffectivePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetEffectivePoliciesRequest::GetEffectivePoliciesRequest(const GetEffectivePoliciesRequest &other)
    : IoTRequest(new GetEffectivePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEffectivePoliciesRequest object.
 */
GetEffectivePoliciesRequest::GetEffectivePoliciesRequest()
    : IoTRequest(new GetEffectivePoliciesRequestPrivate(IoTRequest::GetEffectivePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetEffectivePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEffectivePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEffectivePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetEffectivePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::GetEffectivePoliciesRequestPrivate
 * \brief The GetEffectivePoliciesRequestPrivate class provides private implementation for GetEffectivePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetEffectivePoliciesRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
GetEffectivePoliciesRequestPrivate::GetEffectivePoliciesRequestPrivate(
    const IoTRequest::Action action, GetEffectivePoliciesRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEffectivePoliciesRequest
 * class' copy constructor.
 */
GetEffectivePoliciesRequestPrivate::GetEffectivePoliciesRequestPrivate(
    const GetEffectivePoliciesRequestPrivate &other, GetEffectivePoliciesRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
