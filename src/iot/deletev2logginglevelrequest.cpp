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

#include "deletev2logginglevelrequest.h"
#include "deletev2logginglevelrequest_p.h"
#include "deletev2logginglevelresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteV2LoggingLevelRequest
 *
 * @brief  Implements IoT DeleteV2LoggingLevel requests.
 *
 * @see    IoTClient::deleteV2LoggingLevel
 */

/**
 * @brief  Constructs a new DeleteV2LoggingLevelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest(const DeleteV2LoggingLevelRequest &other)
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteV2LoggingLevelRequest object.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest()
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(IoTRequest::DeleteV2LoggingLevelAction, this))
{

}

bool DeleteV2LoggingLevelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteV2LoggingLevelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteV2LoggingLevelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteV2LoggingLevelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteV2LoggingLevelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteV2LoggingLevelRequestPrivate
 *
 * @brief  Private implementation for DeleteV2LoggingLevelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteV2LoggingLevelRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteV2LoggingLevelRequest instance.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const IoTRequest::Action action, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteV2LoggingLevelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteV2LoggingLevelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteV2LoggingLevelRequest instance.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const DeleteV2LoggingLevelRequestPrivate &other, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
