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

#include "updatethreatintelsetrequest.h"
#include "updatethreatintelsetrequest_p.h"
#include "updatethreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  UpdateThreatIntelSetRequest
 *
 * @brief  Implements GuardDuty UpdateThreatIntelSet requests.
 *
 * @see    GuardDutyClient::updateThreatIntelSet
 */

/**
 * @brief  Constructs a new UpdateThreatIntelSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateThreatIntelSetRequest::UpdateThreatIntelSetRequest(const UpdateThreatIntelSetRequest &other)
    : GuardDutyRequest(new UpdateThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateThreatIntelSetRequest object.
 */
UpdateThreatIntelSetRequest::UpdateThreatIntelSetRequest()
    : GuardDutyRequest(new UpdateThreatIntelSetRequestPrivate(GuardDutyRequest::UpdateThreatIntelSetAction, this))
{

}

bool UpdateThreatIntelSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateThreatIntelSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateThreatIntelSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * UpdateThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThreatIntelSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateThreatIntelSetRequestPrivate
 *
 * @brief  Private implementation for UpdateThreatIntelSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThreatIntelSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public UpdateThreatIntelSetRequest instance.
 */
UpdateThreatIntelSetRequestPrivate::UpdateThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, UpdateThreatIntelSetRequest * const q)
    : UpdateThreatIntelSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThreatIntelSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateThreatIntelSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateThreatIntelSetRequest instance.
 */
UpdateThreatIntelSetRequestPrivate::UpdateThreatIntelSetRequestPrivate(
    const UpdateThreatIntelSetRequestPrivate &other, UpdateThreatIntelSetRequest * const q)
    : UpdateThreatIntelSetPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
