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

#include "addapplicationcloudwatchloggingoptionrequest.h"
#include "addapplicationcloudwatchloggingoptionrequest_p.h"
#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationCloudWatchLoggingOptionRequest
 *
 * @brief  Implements KinesisAnalytics AddApplicationCloudWatchLoggingOption requests.
 *
 * @see    KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption
 */

/**
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationCloudWatchLoggingOptionResponse::AddApplicationCloudWatchLoggingOptionResponse(

/**
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest(const AddApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionRequest object.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsRequest(new AddApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsRequest::AddApplicationCloudWatchLoggingOptionAction, this))
{

}

bool AddApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddApplicationCloudWatchLoggingOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddApplicationCloudWatchLoggingOptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * AddApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddApplicationCloudWatchLoggingOptionRequestPrivate
 *
 * @brief  Private implementation for AddApplicationCloudWatchLoggingOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public AddApplicationCloudWatchLoggingOptionRequest instance.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : AddApplicationCloudWatchLoggingOptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddApplicationCloudWatchLoggingOptionRequest instance.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const AddApplicationCloudWatchLoggingOptionRequestPrivate &other, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : AddApplicationCloudWatchLoggingOptionPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace AWS
