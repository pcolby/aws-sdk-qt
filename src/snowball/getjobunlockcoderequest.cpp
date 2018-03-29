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

#include "getjobunlockcoderequest.h"
#include "getjobunlockcoderequest_p.h"
#include "getjobunlockcoderesponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  GetJobUnlockCodeRequest
 *
 * @brief  Implements Snowball GetJobUnlockCode requests.
 *
 * @see    SnowballClient::getJobUnlockCode
 */

/**
 * @brief  Constructs a new GetJobUnlockCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobUnlockCodeRequest::GetJobUnlockCodeRequest(const GetJobUnlockCodeRequest &other)
    : SnowballRequest(new GetJobUnlockCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobUnlockCodeRequest object.
 */
GetJobUnlockCodeRequest::GetJobUnlockCodeRequest()
    : SnowballRequest(new GetJobUnlockCodeRequestPrivate(SnowballRequest::GetJobUnlockCodeAction, this))
{

}

bool GetJobUnlockCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobUnlockCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobUnlockCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * GetJobUnlockCodeRequest::response(QNetworkReply * const reply) const
{
    return new GetJobUnlockCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobUnlockCodeRequestPrivate
 *
 * @brief  Private implementation for GetJobUnlockCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobUnlockCodeRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public GetJobUnlockCodeRequest instance.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const SnowballRequest::Action action, GetJobUnlockCodeRequest * const q)
    : GetJobUnlockCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobUnlockCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobUnlockCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobUnlockCodeRequest instance.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const GetJobUnlockCodeRequestPrivate &other, GetJobUnlockCodeRequest * const q)
    : GetJobUnlockCodePrivate(other, q)
{

}

} // namespace Snowball
} // namespace AWS
