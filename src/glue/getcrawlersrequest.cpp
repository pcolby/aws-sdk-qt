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

#include "getcrawlersrequest.h"
#include "getcrawlersrequest_p.h"
#include "getcrawlersresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetCrawlersRequest
 *
 * @brief  Implements Glue GetCrawlers requests.
 *
 * @see    GlueClient::getCrawlers
 */

/**
 * @brief  Constructs a new GetCrawlersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCrawlersRequest::GetCrawlersRequest(const GetCrawlersRequest &other)
    : GlueRequest(new GetCrawlersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCrawlersRequest object.
 */
GetCrawlersRequest::GetCrawlersRequest()
    : GlueRequest(new GetCrawlersRequestPrivate(GlueRequest::GetCrawlersAction, this))
{

}

bool GetCrawlersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCrawlersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCrawlersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetCrawlersRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCrawlersRequestPrivate
 *
 * @brief  Private implementation for GetCrawlersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlersRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetCrawlersRequest instance.
 */
GetCrawlersRequestPrivate::GetCrawlersRequestPrivate(
    const GlueRequest::Action action, GetCrawlersRequest * const q)
    : GetCrawlersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCrawlersRequest instance.
 */
GetCrawlersRequestPrivate::GetCrawlersRequestPrivate(
    const GetCrawlersRequestPrivate &other, GetCrawlersRequest * const q)
    : GetCrawlersPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
