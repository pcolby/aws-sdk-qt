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

#include "startcrawlerrequest.h"
#include "startcrawlerrequest_p.h"
#include "startcrawlerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  StartCrawlerRequest
 *
 * @brief  Implements Glue StartCrawler requests.
 *
 * @see    GlueClient::startCrawler
 */

/**
 * @brief  Constructs a new StartCrawlerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartCrawlerRequest::StartCrawlerRequest(const StartCrawlerRequest &other)
    : GlueRequest(new StartCrawlerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartCrawlerRequest object.
 */
StartCrawlerRequest::StartCrawlerRequest()
    : GlueRequest(new StartCrawlerRequestPrivate(GlueRequest::StartCrawlerAction, this))
{

}

bool StartCrawlerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartCrawlerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartCrawlerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * StartCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new StartCrawlerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartCrawlerRequestPrivate
 *
 * @brief  Private implementation for StartCrawlerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StartCrawlerRequest instance.
 */
StartCrawlerRequestPrivate::StartCrawlerRequestPrivate(
    const GlueRequest::Action action, StartCrawlerRequest * const q)
    : StartCrawlerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartCrawlerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartCrawlerRequest instance.
 */
StartCrawlerRequestPrivate::StartCrawlerRequestPrivate(
    const StartCrawlerRequestPrivate &other, StartCrawlerRequest * const q)
    : StartCrawlerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
