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

#include "updatecrawlerschedulerequest.h"
#include "updatecrawlerschedulerequest_p.h"
#include "updatecrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateCrawlerScheduleRequest
 *
 * @brief  Implements Glue UpdateCrawlerSchedule requests.
 *
 * @see    GlueClient::updateCrawlerSchedule
 */

/**
 * @brief  Constructs a new UpdateCrawlerScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCrawlerScheduleRequest::UpdateCrawlerScheduleRequest(const UpdateCrawlerScheduleRequest &other)
    : GlueRequest(new UpdateCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCrawlerScheduleRequest object.
 */
UpdateCrawlerScheduleRequest::UpdateCrawlerScheduleRequest()
    : GlueRequest(new UpdateCrawlerScheduleRequestPrivate(GlueRequest::UpdateCrawlerScheduleAction, this))
{

}

bool UpdateCrawlerScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCrawlerScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCrawlerScheduleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCrawlerScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCrawlerScheduleRequestPrivate
 *
 * @brief  Private implementation for UpdateCrawlerScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCrawlerScheduleRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateCrawlerScheduleRequest instance.
 */
UpdateCrawlerScheduleRequestPrivate::UpdateCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, UpdateCrawlerScheduleRequest * const q)
    : UpdateCrawlerSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCrawlerScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCrawlerScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCrawlerScheduleRequest instance.
 */
UpdateCrawlerScheduleRequestPrivate::UpdateCrawlerScheduleRequestPrivate(
    const UpdateCrawlerScheduleRequestPrivate &other, UpdateCrawlerScheduleRequest * const q)
    : UpdateCrawlerSchedulePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
