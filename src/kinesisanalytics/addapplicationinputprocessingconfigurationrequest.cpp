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

#include "addapplicationinputprocessingconfigurationrequest.h"
#include "addapplicationinputprocessingconfigurationrequest_p.h"
#include "addapplicationinputprocessingconfigurationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationInputProcessingConfigurationRequest
 *
 * @brief  Implements KinesisAnalytics AddApplicationInputProcessingConfiguration requests.
 *
 * @see    KinesisAnalyticsClient::addApplicationInputProcessingConfiguration
 */

/**
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationInputProcessingConfigurationResponse::AddApplicationInputProcessingConfigurationResponse(

/**
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest(const AddApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationRequest object.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsRequest(new AddApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsRequest::AddApplicationInputProcessingConfigurationAction, this))
{

}

bool AddApplicationInputProcessingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddApplicationInputProcessingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddApplicationInputProcessingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * AddApplicationInputProcessingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputProcessingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddApplicationInputProcessingConfigurationRequestPrivate
 *
 * @brief  Private implementation for AddApplicationInputProcessingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public AddApplicationInputProcessingConfigurationRequest instance.
 */
AddApplicationInputProcessingConfigurationRequestPrivate::AddApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationInputProcessingConfigurationRequest * const q)
    : AddApplicationInputProcessingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputProcessingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddApplicationInputProcessingConfigurationRequest instance.
 */
AddApplicationInputProcessingConfigurationRequestPrivate::AddApplicationInputProcessingConfigurationRequestPrivate(
    const AddApplicationInputProcessingConfigurationRequestPrivate &other, AddApplicationInputProcessingConfigurationRequest * const q)
    : AddApplicationInputProcessingConfigurationPrivate(other, q)
{

}
