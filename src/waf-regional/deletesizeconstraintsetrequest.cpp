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

#include "deletesizeconstraintsetrequest.h"
#include "deletesizeconstraintsetrequest_p.h"
#include "deletesizeconstraintsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteSizeConstraintSetRequest
 *
 * @brief  Implements WAFRegional DeleteSizeConstraintSet requests.
 *
 * @see    WAFRegionalClient::deleteSizeConstraintSet
 */

/**
 * @brief  Constructs a new DeleteSizeConstraintSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSizeConstraintSetRequest::DeleteSizeConstraintSetRequest(const DeleteSizeConstraintSetRequest &other)
    : WAFRegionalRequest(new DeleteSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSizeConstraintSetRequest object.
 */
DeleteSizeConstraintSetRequest::DeleteSizeConstraintSetRequest()
    : WAFRegionalRequest(new DeleteSizeConstraintSetRequestPrivate(WAFRegionalRequest::DeleteSizeConstraintSetAction, this))
{

}

bool DeleteSizeConstraintSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSizeConstraintSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSizeConstraintSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSizeConstraintSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSizeConstraintSetRequestPrivate
 *
 * @brief  Private implementation for DeleteSizeConstraintSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSizeConstraintSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteSizeConstraintSetRequest instance.
 */
DeleteSizeConstraintSetRequestPrivate::DeleteSizeConstraintSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteSizeConstraintSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSizeConstraintSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSizeConstraintSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSizeConstraintSetRequest instance.
 */
DeleteSizeConstraintSetRequestPrivate::DeleteSizeConstraintSetRequestPrivate(
    const DeleteSizeConstraintSetRequestPrivate &other, DeleteSizeConstraintSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
