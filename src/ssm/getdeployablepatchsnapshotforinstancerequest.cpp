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

#include "getdeployablepatchsnapshotforinstancerequest.h"
#include "getdeployablepatchsnapshotforinstancerequest_p.h"
#include "getdeployablepatchsnapshotforinstanceresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetDeployablePatchSnapshotForInstanceRequest
 *
 * @brief  Implements SSM GetDeployablePatchSnapshotForInstance requests.
 *
 * @see    SSMClient::getDeployablePatchSnapshotForInstance
 */

/**
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeployablePatchSnapshotForInstanceRequest::GetDeployablePatchSnapshotForInstanceRequest(const GetDeployablePatchSnapshotForInstanceRequest &other)
    : SSMRequest(new GetDeployablePatchSnapshotForInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceRequest object.
 */
GetDeployablePatchSnapshotForInstanceRequest::GetDeployablePatchSnapshotForInstanceRequest()
    : SSMRequest(new GetDeployablePatchSnapshotForInstanceRequestPrivate(SSMRequest::GetDeployablePatchSnapshotForInstanceAction, this))
{

}

bool GetDeployablePatchSnapshotForInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeployablePatchSnapshotForInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeployablePatchSnapshotForInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeployablePatchSnapshotForInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeployablePatchSnapshotForInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeployablePatchSnapshotForInstanceRequestPrivate
 *
 * @brief  Private implementation for GetDeployablePatchSnapshotForInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetDeployablePatchSnapshotForInstanceRequest instance.
 */
GetDeployablePatchSnapshotForInstanceRequestPrivate::GetDeployablePatchSnapshotForInstanceRequestPrivate(
    const SSMRequest::Action action, GetDeployablePatchSnapshotForInstanceRequest * const q)
    : GetDeployablePatchSnapshotForInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeployablePatchSnapshotForInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeployablePatchSnapshotForInstanceRequest instance.
 */
GetDeployablePatchSnapshotForInstanceRequestPrivate::GetDeployablePatchSnapshotForInstanceRequestPrivate(
    const GetDeployablePatchSnapshotForInstanceRequestPrivate &other, GetDeployablePatchSnapshotForInstanceRequest * const q)
    : GetDeployablePatchSnapshotForInstancePrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
