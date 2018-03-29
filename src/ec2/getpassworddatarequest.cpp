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

#include "getpassworddatarequest.h"
#include "getpassworddatarequest_p.h"
#include "getpassworddataresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  GetPasswordDataRequest
 *
 * @brief  Implements EC2 GetPasswordData requests.
 *
 * @see    EC2Client::getPasswordData
 */

/**
 * @brief  Constructs a new GetPasswordDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPasswordDataRequest::GetPasswordDataRequest(const GetPasswordDataRequest &other)
    : EC2Request(new GetPasswordDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPasswordDataRequest object.
 */
GetPasswordDataRequest::GetPasswordDataRequest()
    : EC2Request(new GetPasswordDataRequestPrivate(EC2Request::GetPasswordDataAction, this))
{

}

bool GetPasswordDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPasswordDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPasswordDataResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * GetPasswordDataRequest::response(QNetworkReply * const reply) const
{
    return new GetPasswordDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPasswordDataRequestPrivate
 *
 * @brief  Private implementation for GetPasswordDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPasswordDataRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetPasswordDataRequest instance.
 */
GetPasswordDataRequestPrivate::GetPasswordDataRequestPrivate(
    const EC2Request::Action action, GetPasswordDataRequest * const q)
    : GetPasswordDataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPasswordDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPasswordDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPasswordDataRequest instance.
 */
GetPasswordDataRequestPrivate::GetPasswordDataRequestPrivate(
    const GetPasswordDataRequestPrivate &other, GetPasswordDataRequest * const q)
    : GetPasswordDataPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
