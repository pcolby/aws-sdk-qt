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

#include "getconsoleoutputrequest.h"
#include "getconsoleoutputrequest_p.h"
#include "getconsoleoutputresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  GetConsoleOutputRequest
 *
 * @brief  Implements EC2 GetConsoleOutput requests.
 *
 * @see    EC2Client::getConsoleOutput
 */

/**
 * @brief  Constructs a new GetConsoleOutputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConsoleOutputRequest::GetConsoleOutputRequest(const GetConsoleOutputRequest &other)
    : EC2Request(new GetConsoleOutputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConsoleOutputRequest object.
 */
GetConsoleOutputRequest::GetConsoleOutputRequest()
    : EC2Request(new GetConsoleOutputRequestPrivate(EC2Request::GetConsoleOutputAction, this))
{

}

bool GetConsoleOutputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConsoleOutputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConsoleOutputResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * GetConsoleOutputRequest::response(QNetworkReply * const reply) const
{
    return new GetConsoleOutputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConsoleOutputRequestPrivate
 *
 * @brief  Private implementation for GetConsoleOutputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleOutputRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetConsoleOutputRequest instance.
 */
GetConsoleOutputRequestPrivate::GetConsoleOutputRequestPrivate(
    const EC2Request::Action action, GetConsoleOutputRequest * const q)
    : GetConsoleOutputPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleOutputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConsoleOutputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConsoleOutputRequest instance.
 */
GetConsoleOutputRequestPrivate::GetConsoleOutputRequestPrivate(
    const GetConsoleOutputRequestPrivate &other, GetConsoleOutputRequest * const q)
    : GetConsoleOutputPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
