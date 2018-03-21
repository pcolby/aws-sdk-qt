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

#include "copyoptiongrouprequest.h"
#include "copyoptiongrouprequest_p.h"
#include "copyoptiongroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CopyOptionGroupRequest
 *
 * @brief  Implements RDS CopyOptionGroup requests.
 *
 * @see    RDSClient::copyOptionGroup
 */

/**
 * @brief  Constructs a new CopyOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyOptionGroupResponse::CopyOptionGroupResponse(

/**
 * @brief  Constructs a new CopyOptionGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyOptionGroupRequest::CopyOptionGroupRequest(const CopyOptionGroupRequest &other)
    : RDSRequest(new CopyOptionGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyOptionGroupRequest object.
 */
CopyOptionGroupRequest::CopyOptionGroupRequest()
    : RDSRequest(new CopyOptionGroupRequestPrivate(RDSRequest::CopyOptionGroupAction, this))
{

}

bool CopyOptionGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyOptionGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyOptionGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CopyOptionGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyOptionGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyOptionGroupRequestPrivate
 *
 * @brief  Private implementation for CopyOptionGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyOptionGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CopyOptionGroupRequest instance.
 */
CopyOptionGroupRequestPrivate::CopyOptionGroupRequestPrivate(
    const RDSRequest::Action action, CopyOptionGroupRequest * const q)
    : CopyOptionGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyOptionGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyOptionGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyOptionGroupRequest instance.
 */
CopyOptionGroupRequestPrivate::CopyOptionGroupRequestPrivate(
    const CopyOptionGroupRequestPrivate &other, CopyOptionGroupRequest * const q)
    : CopyOptionGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
