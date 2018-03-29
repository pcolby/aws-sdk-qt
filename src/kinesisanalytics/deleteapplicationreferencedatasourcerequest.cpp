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

#include "deleteapplicationreferencedatasourcerequest.h"
#include "deleteapplicationreferencedatasourcerequest_p.h"
#include "deleteapplicationreferencedatasourceresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationReferenceDataSourceRequest
 *
 * @brief  Implements KinesisAnalytics DeleteApplicationReferenceDataSource requests.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationReferenceDataSource
 */

/**
 * @brief  Constructs a new DeleteApplicationReferenceDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest(const DeleteApplicationReferenceDataSourceRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationReferenceDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationReferenceDataSourceRequest object.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationReferenceDataSourceRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationReferenceDataSourceAction, this))
{

}

bool DeleteApplicationReferenceDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationReferenceDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationReferenceDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * DeleteApplicationReferenceDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationReferenceDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationReferenceDataSourceRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationReferenceDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationReferenceDataSourceRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationReferenceDataSourceRequest instance.
 */
DeleteApplicationReferenceDataSourceRequestPrivate::DeleteApplicationReferenceDataSourceRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationReferenceDataSourceRequest * const q)
    : DeleteApplicationReferenceDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationReferenceDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationReferenceDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationReferenceDataSourceRequest instance.
 */
DeleteApplicationReferenceDataSourceRequestPrivate::DeleteApplicationReferenceDataSourceRequestPrivate(
    const DeleteApplicationReferenceDataSourceRequestPrivate &other, DeleteApplicationReferenceDataSourceRequest * const q)
    : DeleteApplicationReferenceDataSourcePrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
