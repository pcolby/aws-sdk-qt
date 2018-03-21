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

#include "deletewebaclrequest.h"
#include "deletewebaclrequest_p.h"
#include "deletewebaclresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  DeleteWebACLRequest
 *
 * @brief  Implements WAF DeleteWebACL requests.
 *
 * @see    WAFClient::deleteWebACL
 */

/**
 * @brief  Constructs a new DeleteWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteWebACLResponse::DeleteWebACLResponse(

/**
 * @brief  Constructs a new DeleteWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteWebACLRequest::DeleteWebACLRequest(const DeleteWebACLRequest &other)
    : WAFRequest(new DeleteWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteWebACLRequest object.
 */
DeleteWebACLRequest::DeleteWebACLRequest()
    : WAFRequest(new DeleteWebACLRequestPrivate(WAFRequest::DeleteWebACLAction, this))
{

}

bool DeleteWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteWebACLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * DeleteWebACLRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteWebACLRequestPrivate
 *
 * @brief  Private implementation for DeleteWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebACLRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteWebACLRequest instance.
 */
DeleteWebACLRequestPrivate::DeleteWebACLRequestPrivate(
    const WAFRequest::Action action, DeleteWebACLRequest * const q)
    : DeleteWebACLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteWebACLRequest instance.
 */
DeleteWebACLRequestPrivate::DeleteWebACLRequestPrivate(
    const DeleteWebACLRequestPrivate &other, DeleteWebACLRequest * const q)
    : DeleteWebACLPrivate(other, q)
{

}
