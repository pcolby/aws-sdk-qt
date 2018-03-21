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

#include "rebootnoderequest.h"
#include "rebootnoderequest_p.h"
#include "rebootnoderesponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  RebootNodeRequest
 *
 * @brief  Implements DAX RebootNode requests.
 *
 * @see    DAXClient::rebootNode
 */

/**
 * @brief  Constructs a new RebootNodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootNodeResponse::RebootNodeResponse(

/**
 * @brief  Constructs a new RebootNodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootNodeRequest::RebootNodeRequest(const RebootNodeRequest &other)
    : DAXRequest(new RebootNodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootNodeRequest object.
 */
RebootNodeRequest::RebootNodeRequest()
    : DAXRequest(new RebootNodeRequestPrivate(DAXRequest::RebootNodeAction, this))
{

}

bool RebootNodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootNodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootNodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * RebootNodeRequest::response(QNetworkReply * const reply) const
{
    return new RebootNodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootNodeRequestPrivate
 *
 * @brief  Private implementation for RebootNodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootNodeRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public RebootNodeRequest instance.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const DAXRequest::Action action, RebootNodeRequest * const q)
    : RebootNodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootNodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootNodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootNodeRequest instance.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const RebootNodeRequestPrivate &other, RebootNodeRequest * const q)
    : RebootNodePrivate(other, q)
{

}

} // namespace DAX
} // namespace AWS
