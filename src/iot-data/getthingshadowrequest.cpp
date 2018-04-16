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

#include "getthingshadowrequest.h"
#include "getthingshadowrequest_p.h"
#include "getthingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::GetThingShadowRequest
 *
 * \brief The GetThingShadowRequest class provides an interface for IoTDataPlane GetThingShadow requests.
 *
 * \ingroup IoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete thing shadows. A thing shadow is a persistent
 *  representation of your things and their state in the AWS
 *
 * \sa IoTDataPlaneClient::getThingShadow
 */

/*!
 * @brief  Constructs a new GetThingShadowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetThingShadowRequest::GetThingShadowRequest(const GetThingShadowRequest &other)
    : IoTDataPlaneRequest(new GetThingShadowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetThingShadowRequest object.
 */
GetThingShadowRequest::GetThingShadowRequest()
    : IoTDataPlaneRequest(new GetThingShadowRequestPrivate(IoTDataPlaneRequest::GetThingShadowAction, this))
{

}

/*!
 * \reimp
 */
bool GetThingShadowRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetThingShadowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetThingShadowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTDataPlaneClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new GetThingShadowResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetThingShadowRequestPrivate
 *
 * @brief  Private implementation for GetThingShadowRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetThingShadowRequestPrivate object.
 *
 * @param  action  IoTDataPlane action being performed.
 * @param  q       Pointer to this object's public GetThingShadowRequest instance.
 */
GetThingShadowRequestPrivate::GetThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, GetThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetThingShadowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetThingShadowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetThingShadowRequest instance.
 */
GetThingShadowRequestPrivate::GetThingShadowRequestPrivate(
    const GetThingShadowRequestPrivate &other, GetThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
