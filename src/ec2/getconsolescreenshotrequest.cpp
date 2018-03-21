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

#include "getconsolescreenshotrequest.h"
#include "getconsolescreenshotrequest_p.h"
#include "getconsolescreenshotresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  GetConsoleScreenshotRequest
 *
 * @brief  Implements EC2 GetConsoleScreenshot requests.
 *
 * @see    EC2Client::getConsoleScreenshot
 */

/**
 * @brief  Constructs a new GetConsoleScreenshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConsoleScreenshotResponse::GetConsoleScreenshotResponse(

/**
 * @brief  Constructs a new GetConsoleScreenshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConsoleScreenshotRequest::GetConsoleScreenshotRequest(const GetConsoleScreenshotRequest &other)
    : EC2Request(new GetConsoleScreenshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConsoleScreenshotRequest object.
 */
GetConsoleScreenshotRequest::GetConsoleScreenshotRequest()
    : EC2Request(new GetConsoleScreenshotRequestPrivate(EC2Request::GetConsoleScreenshotAction, this))
{

}

bool GetConsoleScreenshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConsoleScreenshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConsoleScreenshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * GetConsoleScreenshotRequest::response(QNetworkReply * const reply) const
{
    return new GetConsoleScreenshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConsoleScreenshotRequestPrivate
 *
 * @brief  Private implementation for GetConsoleScreenshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleScreenshotRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetConsoleScreenshotRequest instance.
 */
GetConsoleScreenshotRequestPrivate::GetConsoleScreenshotRequestPrivate(
    const EC2Request::Action action, GetConsoleScreenshotRequest * const q)
    : GetConsoleScreenshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleScreenshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConsoleScreenshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConsoleScreenshotRequest instance.
 */
GetConsoleScreenshotRequestPrivate::GetConsoleScreenshotRequestPrivate(
    const GetConsoleScreenshotRequestPrivate &other, GetConsoleScreenshotRequest * const q)
    : GetConsoleScreenshotPrivate(other, q)
{

}
