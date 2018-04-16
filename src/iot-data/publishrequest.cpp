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

#include "publishrequest.h"
#include "publishrequest_p.h"
#include "publishresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::PublishRequest
 *
 * \brief The PublishRequest class encapsulates IoTDataPlane Publish requests.
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
 * \sa IoTDataPlaneClient::publish
 */

/*!
 * @brief  Constructs a new PublishRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PublishRequest::PublishRequest(const PublishRequest &other)
    : IoTDataPlaneRequest(new PublishRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PublishRequest object.
 */
PublishRequest::PublishRequest()
    : IoTDataPlaneRequest(new PublishRequestPrivate(IoTDataPlaneRequest::PublishAction, this))
{

}

/*!
 * \reimp
 */
bool PublishRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PublishResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PublishResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTDataPlaneClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishRequest::response(QNetworkReply * const reply) const
{
    return new PublishResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PublishRequestPrivate
 *
 * @brief  Private implementation for PublishRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PublishRequestPrivate object.
 *
 * @param  action  IoTDataPlane action being performed.
 * @param  q       Pointer to this object's public PublishRequest instance.
 */
PublishRequestPrivate::PublishRequestPrivate(
    const IoTDataPlaneRequest::Action action, PublishRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PublishRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PublishRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PublishRequest instance.
 */
PublishRequestPrivate::PublishRequestPrivate(
    const PublishRequestPrivate &other, PublishRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
