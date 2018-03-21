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

#include "createbytematchsetrequest.h"
#include "createbytematchsetrequest_p.h"
#include "createbytematchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateByteMatchSetRequest
 *
 * @brief  Implements WAFRegional CreateByteMatchSet requests.
 *
 * @see    WAFRegionalClient::createByteMatchSet
 */

/**
 * @brief  Constructs a new CreateByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateByteMatchSetRequest::CreateByteMatchSetRequest(const CreateByteMatchSetRequest &other)
    : WAFRegionalRequest(new CreateByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateByteMatchSetRequest object.
 */
CreateByteMatchSetRequest::CreateByteMatchSetRequest()
    : WAFRegionalRequest(new CreateByteMatchSetRequestPrivate(WAFRegionalRequest::CreateByteMatchSetAction, this))
{

}

bool CreateByteMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateByteMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateByteMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * CreateByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateByteMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateByteMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateByteMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateByteMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateByteMatchSetRequest instance.
 */
CreateByteMatchSetRequestPrivate::CreateByteMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateByteMatchSetRequest * const q)
    : CreateByteMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateByteMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateByteMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateByteMatchSetRequest instance.
 */
CreateByteMatchSetRequestPrivate::CreateByteMatchSetRequestPrivate(
    const CreateByteMatchSetRequestPrivate &other, CreateByteMatchSetRequest * const q)
    : CreateByteMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
