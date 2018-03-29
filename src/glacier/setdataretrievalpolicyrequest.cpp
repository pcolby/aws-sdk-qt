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

#include "setdataretrievalpolicyrequest.h"
#include "setdataretrievalpolicyrequest_p.h"
#include "setdataretrievalpolicyresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  SetDataRetrievalPolicyRequest
 *
 * @brief  Implements Glacier SetDataRetrievalPolicy requests.
 *
 * @see    GlacierClient::setDataRetrievalPolicy
 */

/**
 * @brief  Constructs a new SetDataRetrievalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetDataRetrievalPolicyRequest::SetDataRetrievalPolicyRequest(const SetDataRetrievalPolicyRequest &other)
    : GlacierRequest(new SetDataRetrievalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetDataRetrievalPolicyRequest object.
 */
SetDataRetrievalPolicyRequest::SetDataRetrievalPolicyRequest()
    : GlacierRequest(new SetDataRetrievalPolicyRequestPrivate(GlacierRequest::SetDataRetrievalPolicyAction, this))
{

}

bool SetDataRetrievalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetDataRetrievalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetDataRetrievalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * SetDataRetrievalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SetDataRetrievalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetDataRetrievalPolicyRequestPrivate
 *
 * @brief  Private implementation for SetDataRetrievalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetDataRetrievalPolicyRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public SetDataRetrievalPolicyRequest instance.
 */
SetDataRetrievalPolicyRequestPrivate::SetDataRetrievalPolicyRequestPrivate(
    const GlacierRequest::Action action, SetDataRetrievalPolicyRequest * const q)
    : SetDataRetrievalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetDataRetrievalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetDataRetrievalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetDataRetrievalPolicyRequest instance.
 */
SetDataRetrievalPolicyRequestPrivate::SetDataRetrievalPolicyRequestPrivate(
    const SetDataRetrievalPolicyRequestPrivate &other, SetDataRetrievalPolicyRequest * const q)
    : SetDataRetrievalPolicyPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
