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

#include "createthreatintelsetrequest.h"
#include "createthreatintelsetrequest_p.h"
#include "createthreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  CreateThreatIntelSetRequest
 *
 * @brief  Implements GuardDuty CreateThreatIntelSet requests.
 *
 * @see    GuardDutyClient::createThreatIntelSet
 */

/**
 * @brief  Constructs a new CreateThreatIntelSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateThreatIntelSetRequest::CreateThreatIntelSetRequest(const CreateThreatIntelSetRequest &other)
    : GuardDutyRequest(new CreateThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateThreatIntelSetRequest object.
 */
CreateThreatIntelSetRequest::CreateThreatIntelSetRequest()
    : GuardDutyRequest(new CreateThreatIntelSetRequestPrivate(GuardDutyRequest::CreateThreatIntelSetAction, this))
{

}

bool CreateThreatIntelSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateThreatIntelSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateThreatIntelSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * CreateThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateThreatIntelSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateThreatIntelSetRequestPrivate
 *
 * @brief  Private implementation for CreateThreatIntelSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThreatIntelSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public CreateThreatIntelSetRequest instance.
 */
CreateThreatIntelSetRequestPrivate::CreateThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, CreateThreatIntelSetRequest * const q)
    : CreateThreatIntelSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateThreatIntelSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateThreatIntelSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateThreatIntelSetRequest instance.
 */
CreateThreatIntelSetRequestPrivate::CreateThreatIntelSetRequestPrivate(
    const CreateThreatIntelSetRequestPrivate &other, CreateThreatIntelSetRequest * const q)
    : CreateThreatIntelSetPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
