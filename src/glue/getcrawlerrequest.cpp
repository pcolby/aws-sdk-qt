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

#include "getcrawlerrequest.h"
#include "getcrawlerrequest_p.h"
#include "getcrawlerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetCrawlerRequest
 *
 * @brief  Implements Glue GetCrawler requests.
 *
 * @see    GlueClient::getCrawler
 */

/**
 * @brief  Constructs a new GetCrawlerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCrawlerRequest::GetCrawlerRequest(const GetCrawlerRequest &other)
    : GlueRequest(new GetCrawlerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCrawlerRequest object.
 */
GetCrawlerRequest::GetCrawlerRequest()
    : GlueRequest(new GetCrawlerRequestPrivate(GlueRequest::GetCrawlerAction, this))
{

}

bool GetCrawlerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCrawlerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCrawlerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCrawlerRequestPrivate
 *
 * @brief  Private implementation for GetCrawlerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetCrawlerRequest instance.
 */
GetCrawlerRequestPrivate::GetCrawlerRequestPrivate(
    const GlueRequest::Action action, GetCrawlerRequest * const q)
    : GetCrawlerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCrawlerRequest instance.
 */
GetCrawlerRequestPrivate::GetCrawlerRequestPrivate(
    const GetCrawlerRequestPrivate &other, GetCrawlerRequest * const q)
    : GetCrawlerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
