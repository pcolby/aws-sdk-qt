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

#include "cancelimporttaskrequest.h"
#include "cancelimporttaskrequest_p.h"
#include "cancelimporttaskresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CancelImportTaskRequest
 *
 * @brief  Implements EC2 CancelImportTask requests.
 *
 * @see    EC2Client::cancelImportTask
 */

/**
 * @brief  Constructs a new CancelImportTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelImportTaskRequest::CancelImportTaskRequest(const CancelImportTaskRequest &other)
    : EC2Request(new CancelImportTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelImportTaskRequest object.
 */
CancelImportTaskRequest::CancelImportTaskRequest()
    : EC2Request(new CancelImportTaskRequestPrivate(EC2Request::CancelImportTaskAction, this))
{

}

bool CancelImportTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelImportTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelImportTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CancelImportTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelImportTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelImportTaskRequestPrivate
 *
 * @brief  Private implementation for CancelImportTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelImportTaskRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelImportTaskRequest instance.
 */
CancelImportTaskRequestPrivate::CancelImportTaskRequestPrivate(
    const EC2Request::Action action, CancelImportTaskRequest * const q)
    : CancelImportTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelImportTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelImportTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelImportTaskRequest instance.
 */
CancelImportTaskRequestPrivate::CancelImportTaskRequestPrivate(
    const CancelImportTaskRequestPrivate &other, CancelImportTaskRequest * const q)
    : CancelImportTaskPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
