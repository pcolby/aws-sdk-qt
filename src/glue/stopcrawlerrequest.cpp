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

#include "stopcrawlerrequest.h"
#include "stopcrawlerrequest_p.h"
#include "stopcrawlerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  StopCrawlerRequest
 *
 * @brief  Implements Glue StopCrawler requests.
 *
 * @see    GlueClient::stopCrawler
 */

/**
 * @brief  Constructs a new StopCrawlerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopCrawlerRequest::StopCrawlerRequest(const StopCrawlerRequest &other)
    : GlueRequest(new StopCrawlerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopCrawlerRequest object.
 */
StopCrawlerRequest::StopCrawlerRequest()
    : GlueRequest(new StopCrawlerRequestPrivate(GlueRequest::StopCrawlerAction, this))
{

}

bool StopCrawlerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopCrawlerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopCrawlerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * StopCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new StopCrawlerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopCrawlerRequestPrivate
 *
 * @brief  Private implementation for StopCrawlerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StopCrawlerRequest instance.
 */
StopCrawlerRequestPrivate::StopCrawlerRequestPrivate(
    const GlueRequest::Action action, StopCrawlerRequest * const q)
    : StopCrawlerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopCrawlerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopCrawlerRequest instance.
 */
StopCrawlerRequestPrivate::StopCrawlerRequestPrivate(
    const StopCrawlerRequestPrivate &other, StopCrawlerRequest * const q)
    : StopCrawlerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
