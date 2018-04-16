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

#include "listindicesrequest.h"
#include "listindicesrequest_p.h"
#include "listindicesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListIndicesRequest
 *
 * \brief The ListIndicesRequest class provides an interface for IoT ListIndices requests.
 *
 * \ingroup IoT
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
 * \sa IoTClient::listIndices
 */

/*!
 * @brief  Constructs a new ListIndicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIndicesRequest::ListIndicesRequest(const ListIndicesRequest &other)
    : IoTRequest(new ListIndicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListIndicesRequest object.
 */
ListIndicesRequest::ListIndicesRequest()
    : IoTRequest(new ListIndicesRequestPrivate(IoTRequest::ListIndicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIndicesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListIndicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIndicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIndicesRequest::response(QNetworkReply * const reply) const
{
    return new ListIndicesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListIndicesRequestPrivate
 *
 * @brief  Private implementation for ListIndicesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListIndicesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListIndicesRequest instance.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const IoTRequest::Action action, ListIndicesRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListIndicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIndicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIndicesRequest instance.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const ListIndicesRequestPrivate &other, ListIndicesRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
