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

#include "listskillsrequest.h"
#include "listskillsrequest_p.h"
#include "listskillsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  ListSkillsRequest
 *
 * @brief  Implements AlexaForBusiness ListSkills requests.
 *
 * @see    AlexaForBusinessClient::listSkills
 */

/**
 * @brief  Constructs a new ListSkillsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSkillsRequest::ListSkillsRequest(const ListSkillsRequest &other)
    : AlexaForBusinessRequest(new ListSkillsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSkillsRequest object.
 */
ListSkillsRequest::ListSkillsRequest()
    : AlexaForBusinessRequest(new ListSkillsRequestPrivate(AlexaForBusinessRequest::ListSkillsAction, this))
{

}

bool ListSkillsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSkillsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSkillsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * ListSkillsRequest::response(QNetworkReply * const reply) const
{
    return new ListSkillsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSkillsRequestPrivate
 *
 * @brief  Private implementation for ListSkillsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSkillsRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public ListSkillsRequest instance.
 */
ListSkillsRequestPrivate::ListSkillsRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListSkillsRequest * const q)
    : ListSkillsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSkillsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSkillsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSkillsRequest instance.
 */
ListSkillsRequestPrivate::ListSkillsRequestPrivate(
    const ListSkillsRequestPrivate &other, ListSkillsRequest * const q)
    : ListSkillsPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
