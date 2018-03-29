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

#include "deletealarmsrequest.h"
#include "deletealarmsrequest_p.h"
#include "deletealarmsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DeleteAlarmsRequest
 *
 * @brief  Implements CloudWatch DeleteAlarms requests.
 *
 * @see    CloudWatchClient::deleteAlarms
 */

/**
 * @brief  Constructs a new DeleteAlarmsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest(const DeleteAlarmsRequest &other)
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAlarmsRequest object.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest()
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(CloudWatchRequest::DeleteAlarmsAction, this))
{

}

bool DeleteAlarmsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAlarmsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAlarmsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DeleteAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlarmsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAlarmsRequestPrivate
 *
 * @brief  Private implementation for DeleteAlarmsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAlarmsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DeleteAlarmsRequest instance.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteAlarmsRequest * const q)
    : DeleteAlarmsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAlarmsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlarmsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAlarmsRequest instance.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const DeleteAlarmsRequestPrivate &other, DeleteAlarmsRequest * const q)
    : DeleteAlarmsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
