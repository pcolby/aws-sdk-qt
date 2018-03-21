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

#include "deprecateactivitytyperequest.h"
#include "deprecateactivitytyperequest_p.h"
#include "deprecateactivitytyperesponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  DeprecateActivityTypeRequest
 *
 * @brief  Implements SWF DeprecateActivityType requests.
 *
 * @see    SWFClient::deprecateActivityType
 */

/**
 * @brief  Constructs a new DeprecateActivityTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeprecateActivityTypeRequest::DeprecateActivityTypeRequest(const DeprecateActivityTypeRequest &other)
    : SWFRequest(new DeprecateActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeprecateActivityTypeRequest object.
 */
DeprecateActivityTypeRequest::DeprecateActivityTypeRequest()
    : SWFRequest(new DeprecateActivityTypeRequestPrivate(SWFRequest::DeprecateActivityTypeAction, this))
{

}

bool DeprecateActivityTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeprecateActivityTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeprecateActivityTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * DeprecateActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateActivityTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeprecateActivityTypeRequestPrivate
 *
 * @brief  Private implementation for DeprecateActivityTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateActivityTypeRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DeprecateActivityTypeRequest instance.
 */
DeprecateActivityTypeRequestPrivate::DeprecateActivityTypeRequestPrivate(
    const SWFRequest::Action action, DeprecateActivityTypeRequest * const q)
    : DeprecateActivityTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateActivityTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeprecateActivityTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeprecateActivityTypeRequest instance.
 */
DeprecateActivityTypeRequestPrivate::DeprecateActivityTypeRequestPrivate(
    const DeprecateActivityTypeRequestPrivate &other, DeprecateActivityTypeRequest * const q)
    : DeprecateActivityTypePrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
