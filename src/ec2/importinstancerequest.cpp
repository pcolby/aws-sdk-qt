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

#include "importinstancerequest.h"
#include "importinstancerequest_p.h"
#include "importinstanceresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ImportInstanceRequest
 *
 * @brief  Implements EC2 ImportInstance requests.
 *
 * @see    EC2Client::importInstance
 */

/**
 * @brief  Constructs a new ImportInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportInstanceRequest::ImportInstanceRequest(const ImportInstanceRequest &other)
    : EC2Request(new ImportInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportInstanceRequest object.
 */
ImportInstanceRequest::ImportInstanceRequest()
    : EC2Request(new ImportInstanceRequestPrivate(EC2Request::ImportInstanceAction, this))
{

}

bool ImportInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ImportInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ImportInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportInstanceRequestPrivate
 *
 * @brief  Private implementation for ImportInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportInstanceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ImportInstanceRequest instance.
 */
ImportInstanceRequestPrivate::ImportInstanceRequestPrivate(
    const EC2Request::Action action, ImportInstanceRequest * const q)
    : ImportInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportInstanceRequest instance.
 */
ImportInstanceRequestPrivate::ImportInstanceRequestPrivate(
    const ImportInstanceRequestPrivate &other, ImportInstanceRequest * const q)
    : ImportInstancePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
