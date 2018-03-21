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

#include "createdhcpoptionsrequest.h"
#include "createdhcpoptionsrequest_p.h"
#include "createdhcpoptionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateDhcpOptionsRequest
 *
 * @brief  Implements EC2 CreateDhcpOptions requests.
 *
 * @see    EC2Client::createDhcpOptions
 */

/**
 * @brief  Constructs a new CreateDhcpOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDhcpOptionsResponse::CreateDhcpOptionsResponse(

/**
 * @brief  Constructs a new CreateDhcpOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDhcpOptionsRequest::CreateDhcpOptionsRequest(const CreateDhcpOptionsRequest &other)
    : EC2Request(new CreateDhcpOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDhcpOptionsRequest object.
 */
CreateDhcpOptionsRequest::CreateDhcpOptionsRequest()
    : EC2Request(new CreateDhcpOptionsRequestPrivate(EC2Request::CreateDhcpOptionsAction, this))
{

}

bool CreateDhcpOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDhcpOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDhcpOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateDhcpOptionsRequest::response(QNetworkReply * const reply) const
{
    return new CreateDhcpOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDhcpOptionsRequestPrivate
 *
 * @brief  Private implementation for CreateDhcpOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDhcpOptionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateDhcpOptionsRequest instance.
 */
CreateDhcpOptionsRequestPrivate::CreateDhcpOptionsRequestPrivate(
    const EC2Request::Action action, CreateDhcpOptionsRequest * const q)
    : CreateDhcpOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDhcpOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDhcpOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDhcpOptionsRequest instance.
 */
CreateDhcpOptionsRequestPrivate::CreateDhcpOptionsRequestPrivate(
    const CreateDhcpOptionsRequestPrivate &other, CreateDhcpOptionsRequest * const q)
    : CreateDhcpOptionsPrivate(other, q)
{

}
