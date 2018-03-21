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

#include "listcompliancesummariesrequest.h"
#include "listcompliancesummariesrequest_p.h"
#include "listcompliancesummariesresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListComplianceSummariesRequest
 *
 * @brief  Implements SSM ListComplianceSummaries requests.
 *
 * @see    SSMClient::listComplianceSummaries
 */

/**
 * @brief  Constructs a new ListComplianceSummariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListComplianceSummariesResponse::ListComplianceSummariesResponse(

/**
 * @brief  Constructs a new ListComplianceSummariesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListComplianceSummariesRequest::ListComplianceSummariesRequest(const ListComplianceSummariesRequest &other)
    : SSMRequest(new ListComplianceSummariesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListComplianceSummariesRequest object.
 */
ListComplianceSummariesRequest::ListComplianceSummariesRequest()
    : SSMRequest(new ListComplianceSummariesRequestPrivate(SSMRequest::ListComplianceSummariesAction, this))
{

}

bool ListComplianceSummariesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListComplianceSummariesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListComplianceSummariesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListComplianceSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListComplianceSummariesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListComplianceSummariesRequestPrivate
 *
 * @brief  Private implementation for ListComplianceSummariesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceSummariesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListComplianceSummariesRequest instance.
 */
ListComplianceSummariesRequestPrivate::ListComplianceSummariesRequestPrivate(
    const SSMRequest::Action action, ListComplianceSummariesRequest * const q)
    : ListComplianceSummariesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceSummariesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListComplianceSummariesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListComplianceSummariesRequest instance.
 */
ListComplianceSummariesRequestPrivate::ListComplianceSummariesRequestPrivate(
    const ListComplianceSummariesRequestPrivate &other, ListComplianceSummariesRequest * const q)
    : ListComplianceSummariesPrivate(other, q)
{

}
