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

#include "updatewebaclrequest.h"
#include "updatewebaclrequest_p.h"
#include "updatewebaclresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateWebACLRequest
 *
 * @brief  Implements WAF UpdateWebACL requests.
 *
 * @see    WAFClient::updateWebACL
 */

/**
 * @brief  Constructs a new UpdateWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateWebACLRequest::UpdateWebACLRequest(const UpdateWebACLRequest &other)
    : WAFRequest(new UpdateWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateWebACLRequest object.
 */
UpdateWebACLRequest::UpdateWebACLRequest()
    : WAFRequest(new UpdateWebACLRequestPrivate(WAFRequest::UpdateWebACLAction, this))
{

}

bool UpdateWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateWebACLResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWebACLRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateWebACLRequestPrivate
 *
 * @brief  Private implementation for UpdateWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebACLRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateWebACLRequest instance.
 */
UpdateWebACLRequestPrivate::UpdateWebACLRequestPrivate(
    const WAFRequest::Action action, UpdateWebACLRequest * const q)
    : UpdateWebACLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateWebACLRequest instance.
 */
UpdateWebACLRequestPrivate::UpdateWebACLRequestPrivate(
    const UpdateWebACLRequestPrivate &other, UpdateWebACLRequest * const q)
    : UpdateWebACLPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
