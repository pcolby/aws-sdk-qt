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

#include "createroutetablerequest.h"
#include "createroutetablerequest_p.h"
#include "createroutetableresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateRouteTableRequest
 *
 * @brief  Implements EC2 CreateRouteTable requests.
 *
 * @see    EC2Client::createRouteTable
 */

/**
 * @brief  Constructs a new CreateRouteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRouteTableResponse::CreateRouteTableResponse(

/**
 * @brief  Constructs a new CreateRouteTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRouteTableRequest::CreateRouteTableRequest(const CreateRouteTableRequest &other)
    : EC2Request(new CreateRouteTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRouteTableRequest object.
 */
CreateRouteTableRequest::CreateRouteTableRequest()
    : EC2Request(new CreateRouteTableRequestPrivate(EC2Request::CreateRouteTableAction, this))
{

}

bool CreateRouteTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRouteTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRouteTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateRouteTableRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRouteTableRequestPrivate
 *
 * @brief  Private implementation for CreateRouteTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRouteTableRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateRouteTableRequest instance.
 */
CreateRouteTableRequestPrivate::CreateRouteTableRequestPrivate(
    const EC2Request::Action action, CreateRouteTableRequest * const q)
    : CreateRouteTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRouteTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRouteTableRequest instance.
 */
CreateRouteTableRequestPrivate::CreateRouteTableRequestPrivate(
    const CreateRouteTableRequestPrivate &other, CreateRouteTableRequest * const q)
    : CreateRouteTablePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
