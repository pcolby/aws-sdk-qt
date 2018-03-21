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

#include "searchskillgroupsrequest.h"
#include "searchskillgroupsrequest_p.h"
#include "searchskillgroupsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SearchSkillGroupsRequest
 *
 * @brief  Implements AlexaForBusiness SearchSkillGroups requests.
 *
 * @see    AlexaForBusinessClient::searchSkillGroups
 */

/**
 * @brief  Constructs a new SearchSkillGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchSkillGroupsResponse::SearchSkillGroupsResponse(

/**
 * @brief  Constructs a new SearchSkillGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchSkillGroupsRequest::SearchSkillGroupsRequest(const SearchSkillGroupsRequest &other)
    : AlexaForBusinessRequest(new SearchSkillGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchSkillGroupsRequest object.
 */
SearchSkillGroupsRequest::SearchSkillGroupsRequest()
    : AlexaForBusinessRequest(new SearchSkillGroupsRequestPrivate(AlexaForBusinessRequest::SearchSkillGroupsAction, this))
{

}

bool SearchSkillGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchSkillGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchSkillGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * SearchSkillGroupsRequest::response(QNetworkReply * const reply) const
{
    return new SearchSkillGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchSkillGroupsRequestPrivate
 *
 * @brief  Private implementation for SearchSkillGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchSkillGroupsRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public SearchSkillGroupsRequest instance.
 */
SearchSkillGroupsRequestPrivate::SearchSkillGroupsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchSkillGroupsRequest * const q)
    : SearchSkillGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchSkillGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchSkillGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchSkillGroupsRequest instance.
 */
SearchSkillGroupsRequestPrivate::SearchSkillGroupsRequestPrivate(
    const SearchSkillGroupsRequestPrivate &other, SearchSkillGroupsRequest * const q)
    : SearchSkillGroupsPrivate(other, q)
{

}
