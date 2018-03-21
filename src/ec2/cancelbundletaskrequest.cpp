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

#include "cancelbundletaskrequest.h"
#include "cancelbundletaskrequest_p.h"
#include "cancelbundletaskresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CancelBundleTaskRequest
 *
 * @brief  Implements EC2 CancelBundleTask requests.
 *
 * @see    EC2Client::cancelBundleTask
 */

/**
 * @brief  Constructs a new CancelBundleTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelBundleTaskResponse::CancelBundleTaskResponse(

/**
 * @brief  Constructs a new CancelBundleTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelBundleTaskRequest::CancelBundleTaskRequest(const CancelBundleTaskRequest &other)
    : EC2Request(new CancelBundleTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelBundleTaskRequest object.
 */
CancelBundleTaskRequest::CancelBundleTaskRequest()
    : EC2Request(new CancelBundleTaskRequestPrivate(EC2Request::CancelBundleTaskAction, this))
{

}

bool CancelBundleTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelBundleTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelBundleTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CancelBundleTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelBundleTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelBundleTaskRequestPrivate
 *
 * @brief  Private implementation for CancelBundleTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelBundleTaskRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelBundleTaskRequest instance.
 */
CancelBundleTaskRequestPrivate::CancelBundleTaskRequestPrivate(
    const EC2Request::Action action, CancelBundleTaskRequest * const q)
    : CancelBundleTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelBundleTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelBundleTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelBundleTaskRequest instance.
 */
CancelBundleTaskRequestPrivate::CancelBundleTaskRequestPrivate(
    const CancelBundleTaskRequestPrivate &other, CancelBundleTaskRequest * const q)
    : CancelBundleTaskPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
