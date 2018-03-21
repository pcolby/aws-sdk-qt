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

#include "createsizeconstraintsetrequest.h"
#include "createsizeconstraintsetrequest_p.h"
#include "createsizeconstraintsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateSizeConstraintSetRequest
 *
 * @brief  Implements WAFRegional CreateSizeConstraintSet requests.
 *
 * @see    WAFRegionalClient::createSizeConstraintSet
 */

/**
 * @brief  Constructs a new CreateSizeConstraintSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSizeConstraintSetResponse::CreateSizeConstraintSetResponse(

/**
 * @brief  Constructs a new CreateSizeConstraintSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSizeConstraintSetRequest::CreateSizeConstraintSetRequest(const CreateSizeConstraintSetRequest &other)
    : WAFRegionalRequest(new CreateSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSizeConstraintSetRequest object.
 */
CreateSizeConstraintSetRequest::CreateSizeConstraintSetRequest()
    : WAFRegionalRequest(new CreateSizeConstraintSetRequestPrivate(WAFRegionalRequest::CreateSizeConstraintSetAction, this))
{

}

bool CreateSizeConstraintSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSizeConstraintSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSizeConstraintSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * CreateSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateSizeConstraintSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSizeConstraintSetRequestPrivate
 *
 * @brief  Private implementation for CreateSizeConstraintSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSizeConstraintSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateSizeConstraintSetRequest instance.
 */
CreateSizeConstraintSetRequestPrivate::CreateSizeConstraintSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateSizeConstraintSetRequest * const q)
    : CreateSizeConstraintSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSizeConstraintSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSizeConstraintSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSizeConstraintSetRequest instance.
 */
CreateSizeConstraintSetRequestPrivate::CreateSizeConstraintSetRequestPrivate(
    const CreateSizeConstraintSetRequestPrivate &other, CreateSizeConstraintSetRequest * const q)
    : CreateSizeConstraintSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
