/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listv2logginglevelsrequest.h"
#include "listv2logginglevelsrequest_p.h"
#include "listv2logginglevelsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListV2LoggingLevelsRequest
 *
 * @brief  Implements IoT ListV2LoggingLevels requests.
 *
 * @see    IoTClient::listV2LoggingLevels
 */

/**
 * @brief  Constructs a new ListV2LoggingLevelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListV2LoggingLevelsResponse::ListV2LoggingLevelsResponse(

/**
 * @brief  Constructs a new ListV2LoggingLevelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListV2LoggingLevelsRequest::ListV2LoggingLevelsRequest(const ListV2LoggingLevelsRequest &other)
    : IoTRequest(new ListV2LoggingLevelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListV2LoggingLevelsRequest object.
 */
ListV2LoggingLevelsRequest::ListV2LoggingLevelsRequest()
    : IoTRequest(new ListV2LoggingLevelsRequestPrivate(IoTRequest::ListV2LoggingLevelsAction, this))
{

}

bool ListV2LoggingLevelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListV2LoggingLevelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListV2LoggingLevelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListV2LoggingLevelsRequest::response(QNetworkReply * const reply) const
{
    return new ListV2LoggingLevelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListV2LoggingLevelsRequestPrivate
 *
 * @brief  Private implementation for ListV2LoggingLevelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListV2LoggingLevelsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListV2LoggingLevelsRequest instance.
 */
ListV2LoggingLevelsRequestPrivate::ListV2LoggingLevelsRequestPrivate(
    const IoTRequest::Action action, ListV2LoggingLevelsRequest * const q)
    : ListV2LoggingLevelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListV2LoggingLevelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListV2LoggingLevelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListV2LoggingLevelsRequest instance.
 */
ListV2LoggingLevelsRequestPrivate::ListV2LoggingLevelsRequestPrivate(
    const ListV2LoggingLevelsRequestPrivate &other, ListV2LoggingLevelsRequest * const q)
    : ListV2LoggingLevelsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
