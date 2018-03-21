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

#include "cancelclusterrequest.h"
#include "cancelclusterrequest_p.h"
#include "cancelclusterresponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  CancelClusterRequest
 *
 * @brief  Implements Snowball CancelCluster requests.
 *
 * @see    SnowballClient::cancelCluster
 */

/**
 * @brief  Constructs a new CancelClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelClusterResponse::CancelClusterResponse(

/**
 * @brief  Constructs a new CancelClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelClusterRequest::CancelClusterRequest(const CancelClusterRequest &other)
    : SnowballRequest(new CancelClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelClusterRequest object.
 */
CancelClusterRequest::CancelClusterRequest()
    : SnowballRequest(new CancelClusterRequestPrivate(SnowballRequest::CancelClusterAction, this))
{

}

bool CancelClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * CancelClusterRequest::response(QNetworkReply * const reply) const
{
    return new CancelClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelClusterRequestPrivate
 *
 * @brief  Private implementation for CancelClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelClusterRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public CancelClusterRequest instance.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const SnowballRequest::Action action, CancelClusterRequest * const q)
    : CancelClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelClusterRequest instance.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const CancelClusterRequestPrivate &other, CancelClusterRequest * const q)
    : CancelClusterPrivate(other, q)
{

}

} // namespace Snowball
} // namespace AWS
