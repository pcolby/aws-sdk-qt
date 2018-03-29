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

#include "cancelexporttaskrequest.h"
#include "cancelexporttaskrequest_p.h"
#include "cancelexporttaskresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CancelExportTaskRequest
 *
 * @brief  Implements EC2 CancelExportTask requests.
 *
 * @see    EC2Client::cancelExportTask
 */

/**
 * @brief  Constructs a new CancelExportTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelExportTaskRequest::CancelExportTaskRequest(const CancelExportTaskRequest &other)
    : EC2Request(new CancelExportTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelExportTaskRequest object.
 */
CancelExportTaskRequest::CancelExportTaskRequest()
    : EC2Request(new CancelExportTaskRequestPrivate(EC2Request::CancelExportTaskAction, this))
{

}

bool CancelExportTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelExportTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelExportTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CancelExportTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelExportTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelExportTaskRequestPrivate
 *
 * @brief  Private implementation for CancelExportTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelExportTaskRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelExportTaskRequest instance.
 */
CancelExportTaskRequestPrivate::CancelExportTaskRequestPrivate(
    const EC2Request::Action action, CancelExportTaskRequest * const q)
    : CancelExportTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelExportTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelExportTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelExportTaskRequest instance.
 */
CancelExportTaskRequestPrivate::CancelExportTaskRequestPrivate(
    const CancelExportTaskRequestPrivate &other, CancelExportTaskRequest * const q)
    : CancelExportTaskPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
