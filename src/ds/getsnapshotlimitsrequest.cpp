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

#include "getsnapshotlimitsrequest.h"
#include "getsnapshotlimitsrequest_p.h"
#include "getsnapshotlimitsresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  GetSnapshotLimitsRequest
 *
 * @brief  Implements DirectoryService GetSnapshotLimits requests.
 *
 * @see    DirectoryServiceClient::getSnapshotLimits
 */

/**
 * @brief  Constructs a new GetSnapshotLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSnapshotLimitsRequest::GetSnapshotLimitsRequest(const GetSnapshotLimitsRequest &other)
    : DirectoryServiceRequest(new GetSnapshotLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSnapshotLimitsRequest object.
 */
GetSnapshotLimitsRequest::GetSnapshotLimitsRequest()
    : DirectoryServiceRequest(new GetSnapshotLimitsRequestPrivate(DirectoryServiceRequest::GetSnapshotLimitsAction, this))
{

}

bool GetSnapshotLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSnapshotLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSnapshotLimitsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * GetSnapshotLimitsRequest::response(QNetworkReply * const reply) const
{
    return new GetSnapshotLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSnapshotLimitsRequestPrivate
 *
 * @brief  Private implementation for GetSnapshotLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSnapshotLimitsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public GetSnapshotLimitsRequest instance.
 */
GetSnapshotLimitsRequestPrivate::GetSnapshotLimitsRequestPrivate(
    const DirectoryServiceRequest::Action action, GetSnapshotLimitsRequest * const q)
    : GetSnapshotLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSnapshotLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSnapshotLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSnapshotLimitsRequest instance.
 */
GetSnapshotLimitsRequestPrivate::GetSnapshotLimitsRequestPrivate(
    const GetSnapshotLimitsRequestPrivate &other, GetSnapshotLimitsRequest * const q)
    : GetSnapshotLimitsPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
