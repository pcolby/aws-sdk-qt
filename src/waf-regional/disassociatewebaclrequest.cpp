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

#include "disassociatewebaclrequest.h"
#include "disassociatewebaclrequest_p.h"
#include "disassociatewebaclresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DisassociateWebACLRequest
 *
 * @brief  Implements WAFRegional DisassociateWebACL requests.
 *
 * @see    WAFRegionalClient::disassociateWebACL
 */

/**
 * @brief  Constructs a new DisassociateWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateWebACLResponse::DisassociateWebACLResponse(

/**
 * @brief  Constructs a new DisassociateWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateWebACLRequest::DisassociateWebACLRequest(const DisassociateWebACLRequest &other)
    : WAFRegionalRequest(new DisassociateWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateWebACLRequest object.
 */
DisassociateWebACLRequest::DisassociateWebACLRequest()
    : WAFRegionalRequest(new DisassociateWebACLRequestPrivate(WAFRegionalRequest::DisassociateWebACLAction, this))
{

}

bool DisassociateWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateWebACLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DisassociateWebACLRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateWebACLRequestPrivate
 *
 * @brief  Private implementation for DisassociateWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateWebACLRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DisassociateWebACLRequest instance.
 */
DisassociateWebACLRequestPrivate::DisassociateWebACLRequestPrivate(
    const WAFRegionalRequest::Action action, DisassociateWebACLRequest * const q)
    : DisassociateWebACLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateWebACLRequest instance.
 */
DisassociateWebACLRequestPrivate::DisassociateWebACLRequestPrivate(
    const DisassociateWebACLRequestPrivate &other, DisassociateWebACLRequest * const q)
    : DisassociateWebACLPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
