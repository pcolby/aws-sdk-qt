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

#include "getlaunchtemplatedatarequest.h"
#include "getlaunchtemplatedatarequest_p.h"
#include "getlaunchtemplatedataresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  GetLaunchTemplateDataRequest
 *
 * @brief  Implements EC2 GetLaunchTemplateData requests.
 *
 * @see    EC2Client::getLaunchTemplateData
 */

/**
 * @brief  Constructs a new GetLaunchTemplateDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLaunchTemplateDataRequest::GetLaunchTemplateDataRequest(const GetLaunchTemplateDataRequest &other)
    : EC2Request(new GetLaunchTemplateDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLaunchTemplateDataRequest object.
 */
GetLaunchTemplateDataRequest::GetLaunchTemplateDataRequest()
    : EC2Request(new GetLaunchTemplateDataRequestPrivate(EC2Request::GetLaunchTemplateDataAction, this))
{

}

bool GetLaunchTemplateDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLaunchTemplateDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLaunchTemplateDataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * GetLaunchTemplateDataRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchTemplateDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLaunchTemplateDataRequestPrivate
 *
 * @brief  Private implementation for GetLaunchTemplateDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLaunchTemplateDataRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetLaunchTemplateDataRequest instance.
 */
GetLaunchTemplateDataRequestPrivate::GetLaunchTemplateDataRequestPrivate(
    const EC2Request::Action action, GetLaunchTemplateDataRequest * const q)
    : GetLaunchTemplateDataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLaunchTemplateDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchTemplateDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLaunchTemplateDataRequest instance.
 */
GetLaunchTemplateDataRequestPrivate::GetLaunchTemplateDataRequestPrivate(
    const GetLaunchTemplateDataRequestPrivate &other, GetLaunchTemplateDataRequest * const q)
    : GetLaunchTemplateDataPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
