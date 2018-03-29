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

#include "stopapplicationrequest.h"
#include "stopapplicationrequest_p.h"
#include "stopapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  StopApplicationRequest
 *
 * @brief  Implements KinesisAnalytics StopApplication requests.
 *
 * @see    KinesisAnalyticsClient::stopApplication
 */

/**
 * @brief  Constructs a new StopApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopApplicationRequest::StopApplicationRequest(const StopApplicationRequest &other)
    : KinesisAnalyticsRequest(new StopApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopApplicationRequest object.
 */
StopApplicationRequest::StopApplicationRequest()
    : KinesisAnalyticsRequest(new StopApplicationRequestPrivate(KinesisAnalyticsRequest::StopApplicationAction, this))
{

}

bool StopApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * StopApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopApplicationRequestPrivate
 *
 * @brief  Private implementation for StopApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopApplicationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public StopApplicationRequest instance.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, StopApplicationRequest * const q)
    : StopApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopApplicationRequest instance.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const StopApplicationRequestPrivate &other, StopApplicationRequest * const q)
    : StopApplicationPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
