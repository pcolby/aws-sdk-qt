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

#include "listthreatintelsetsrequest.h"
#include "listthreatintelsetsrequest_p.h"
#include "listthreatintelsetsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  ListThreatIntelSetsRequest
 *
 * @brief  Implements GuardDuty ListThreatIntelSets requests.
 *
 * @see    GuardDutyClient::listThreatIntelSets
 */

/**
 * @brief  Constructs a new ListThreatIntelSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThreatIntelSetsRequest::ListThreatIntelSetsRequest(const ListThreatIntelSetsRequest &other)
    : GuardDutyRequest(new ListThreatIntelSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThreatIntelSetsRequest object.
 */
ListThreatIntelSetsRequest::ListThreatIntelSetsRequest()
    : GuardDutyRequest(new ListThreatIntelSetsRequestPrivate(GuardDutyRequest::ListThreatIntelSetsAction, this))
{

}

bool ListThreatIntelSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThreatIntelSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThreatIntelSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThreatIntelSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListThreatIntelSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThreatIntelSetsRequestPrivate
 *
 * @brief  Private implementation for ListThreatIntelSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThreatIntelSetsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ListThreatIntelSetsRequest instance.
 */
ListThreatIntelSetsRequestPrivate::ListThreatIntelSetsRequestPrivate(
    const GuardDutyRequest::Action action, ListThreatIntelSetsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThreatIntelSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThreatIntelSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThreatIntelSetsRequest instance.
 */
ListThreatIntelSetsRequestPrivate::ListThreatIntelSetsRequestPrivate(
    const ListThreatIntelSetsRequestPrivate &other, ListThreatIntelSetsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
