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

#include "deleteapplicationcloudwatchloggingoptionrequest.h"
#include "deleteapplicationcloudwatchloggingoptionrequest_p.h"
#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationCloudWatchLoggingOptionRequest
 *
 * @brief  Implements KinesisAnalytics DeleteApplicationCloudWatchLoggingOption requests.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption
 */

/**
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationCloudWatchLoggingOptionResponse::DeleteApplicationCloudWatchLoggingOptionResponse(

/**
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionRequest object.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationCloudWatchLoggingOptionAction, this))
{

}

bool DeleteApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationCloudWatchLoggingOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationCloudWatchLoggingOptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * DeleteApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationCloudWatchLoggingOptionRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationCloudWatchLoggingOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationCloudWatchLoggingOptionRequest instance.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : DeleteApplicationCloudWatchLoggingOptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationCloudWatchLoggingOptionRequest instance.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const DeleteApplicationCloudWatchLoggingOptionRequestPrivate &other, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : DeleteApplicationCloudWatchLoggingOptionPrivate(other, q)
{

}
