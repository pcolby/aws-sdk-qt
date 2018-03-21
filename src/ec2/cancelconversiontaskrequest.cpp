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

#include "cancelconversiontaskrequest.h"
#include "cancelconversiontaskrequest_p.h"
#include "cancelconversiontaskresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CancelConversionTaskRequest
 *
 * @brief  Implements EC2 CancelConversionTask requests.
 *
 * @see    EC2Client::cancelConversionTask
 */

/**
 * @brief  Constructs a new CancelConversionTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelConversionTaskResponse::CancelConversionTaskResponse(

/**
 * @brief  Constructs a new CancelConversionTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelConversionTaskRequest::CancelConversionTaskRequest(const CancelConversionTaskRequest &other)
    : EC2Request(new CancelConversionTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelConversionTaskRequest object.
 */
CancelConversionTaskRequest::CancelConversionTaskRequest()
    : EC2Request(new CancelConversionTaskRequestPrivate(EC2Request::CancelConversionTaskAction, this))
{

}

bool CancelConversionTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelConversionTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelConversionTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CancelConversionTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelConversionTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelConversionTaskRequestPrivate
 *
 * @brief  Private implementation for CancelConversionTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelConversionTaskRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelConversionTaskRequest instance.
 */
CancelConversionTaskRequestPrivate::CancelConversionTaskRequestPrivate(
    const EC2Request::Action action, CancelConversionTaskRequest * const q)
    : CancelConversionTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelConversionTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelConversionTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelConversionTaskRequest instance.
 */
CancelConversionTaskRequestPrivate::CancelConversionTaskRequestPrivate(
    const CancelConversionTaskRequestPrivate &other, CancelConversionTaskRequest * const q)
    : CancelConversionTaskPrivate(other, q)
{

}
