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

#include "addapplicationreferencedatasourcerequest.h"
#include "addapplicationreferencedatasourcerequest_p.h"
#include "addapplicationreferencedatasourceresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationReferenceDataSourceRequest
 *
 * @brief  Implements KinesisAnalytics AddApplicationReferenceDataSource requests.
 *
 * @see    KinesisAnalyticsClient::addApplicationReferenceDataSource
 */

/**
 * @brief  Constructs a new AddApplicationReferenceDataSourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationReferenceDataSourceResponse::AddApplicationReferenceDataSourceResponse(

/**
 * @brief  Constructs a new AddApplicationReferenceDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddApplicationReferenceDataSourceRequest::AddApplicationReferenceDataSourceRequest(const AddApplicationReferenceDataSourceRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationReferenceDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddApplicationReferenceDataSourceRequest object.
 */
AddApplicationReferenceDataSourceRequest::AddApplicationReferenceDataSourceRequest()
    : KinesisAnalyticsRequest(new AddApplicationReferenceDataSourceRequestPrivate(KinesisAnalyticsRequest::AddApplicationReferenceDataSourceAction, this))
{

}

bool AddApplicationReferenceDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddApplicationReferenceDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddApplicationReferenceDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * AddApplicationReferenceDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationReferenceDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddApplicationReferenceDataSourceRequestPrivate
 *
 * @brief  Private implementation for AddApplicationReferenceDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationReferenceDataSourceRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public AddApplicationReferenceDataSourceRequest instance.
 */
AddApplicationReferenceDataSourceRequestPrivate::AddApplicationReferenceDataSourceRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationReferenceDataSourceRequest * const q)
    : AddApplicationReferenceDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationReferenceDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationReferenceDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddApplicationReferenceDataSourceRequest instance.
 */
AddApplicationReferenceDataSourceRequestPrivate::AddApplicationReferenceDataSourceRequestPrivate(
    const AddApplicationReferenceDataSourceRequestPrivate &other, AddApplicationReferenceDataSourceRequest * const q)
    : AddApplicationReferenceDataSourcePrivate(other, q)
{

}
