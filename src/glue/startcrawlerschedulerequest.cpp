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

#include "startcrawlerschedulerequest.h"
#include "startcrawlerschedulerequest_p.h"
#include "startcrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  StartCrawlerScheduleRequest
 *
 * @brief  Implements Glue StartCrawlerSchedule requests.
 *
 * @see    GlueClient::startCrawlerSchedule
 */

/**
 * @brief  Constructs a new StartCrawlerScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartCrawlerScheduleRequest::StartCrawlerScheduleRequest(const StartCrawlerScheduleRequest &other)
    : GlueRequest(new StartCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartCrawlerScheduleRequest object.
 */
StartCrawlerScheduleRequest::StartCrawlerScheduleRequest()
    : GlueRequest(new StartCrawlerScheduleRequestPrivate(GlueRequest::StartCrawlerScheduleAction, this))
{

}

bool StartCrawlerScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartCrawlerScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartCrawlerScheduleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * StartCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StartCrawlerScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartCrawlerScheduleRequestPrivate
 *
 * @brief  Private implementation for StartCrawlerScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerScheduleRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StartCrawlerScheduleRequest instance.
 */
StartCrawlerScheduleRequestPrivate::StartCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, StartCrawlerScheduleRequest * const q)
    : StartCrawlerSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartCrawlerScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartCrawlerScheduleRequest instance.
 */
StartCrawlerScheduleRequestPrivate::StartCrawlerScheduleRequestPrivate(
    const StartCrawlerScheduleRequestPrivate &other, StartCrawlerScheduleRequest * const q)
    : StartCrawlerSchedulePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
