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

#include "describeindexrequest.h"
#include "describeindexrequest_p.h"
#include "describeindexresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeIndexRequest
 *
 * \brief The DescribeIndexRequest class encapsulates IoT DescribeIndex requests.
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
 * \sa IoTClient::describeIndex
 */

/*!
 * @brief  Constructs a new DescribeIndexRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIndexRequest::DescribeIndexRequest(const DescribeIndexRequest &other)
    : IoTRequest(new DescribeIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeIndexRequest object.
 */
DescribeIndexRequest::DescribeIndexRequest()
    : IoTRequest(new DescribeIndexRequestPrivate(IoTRequest::DescribeIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIndexRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeIndexResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIndexResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIndexRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIndexResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeIndexRequestPrivate
 *
 * @brief  Private implementation for DescribeIndexRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeIndexRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeIndexRequest instance.
 */
DescribeIndexRequestPrivate::DescribeIndexRequestPrivate(
    const IoTRequest::Action action, DescribeIndexRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeIndexRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIndexRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIndexRequest instance.
 */
DescribeIndexRequestPrivate::DescribeIndexRequestPrivate(
    const DescribeIndexRequestPrivate &other, DescribeIndexRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
