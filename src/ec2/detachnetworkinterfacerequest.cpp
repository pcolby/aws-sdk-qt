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

#include "detachnetworkinterfacerequest.h"
#include "detachnetworkinterfacerequest_p.h"
#include "detachnetworkinterfaceresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DetachNetworkInterfaceRequest
 *
 * @brief  Implements EC2 DetachNetworkInterface requests.
 *
 * @see    EC2Client::detachNetworkInterface
 */

/**
 * @brief  Constructs a new DetachNetworkInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest(const DetachNetworkInterfaceRequest &other)
    : EC2Request(new DetachNetworkInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachNetworkInterfaceRequest object.
 */
DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest()
    : EC2Request(new DetachNetworkInterfaceRequestPrivate(EC2Request::DetachNetworkInterfaceAction, this))
{

}

bool DetachNetworkInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachNetworkInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachNetworkInterfaceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DetachNetworkInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new DetachNetworkInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachNetworkInterfaceRequestPrivate
 *
 * @brief  Private implementation for DetachNetworkInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachNetworkInterfaceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DetachNetworkInterfaceRequest instance.
 */
DetachNetworkInterfaceRequestPrivate::DetachNetworkInterfaceRequestPrivate(
    const EC2Request::Action action, DetachNetworkInterfaceRequest * const q)
    : DetachNetworkInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachNetworkInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachNetworkInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachNetworkInterfaceRequest instance.
 */
DetachNetworkInterfaceRequestPrivate::DetachNetworkInterfaceRequestPrivate(
    const DetachNetworkInterfaceRequestPrivate &other, DetachNetworkInterfaceRequest * const q)
    : DetachNetworkInterfacePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
