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

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  ListApplicationsRequest
 *
 * @brief  Implements KinesisAnalytics ListApplications requests.
 *
 * @see    KinesisAnalyticsClient::listApplications
 */

/**
 * @brief  Constructs a new ListApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : KinesisAnalyticsRequest(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : KinesisAnalyticsRequest(new ListApplicationsRequestPrivate(KinesisAnalyticsRequest::ListApplicationsAction, this))
{

}

bool ListApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListApplicationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * ListApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListApplicationsRequestPrivate
 *
 * @brief  Private implementation for ListApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public ListApplicationsRequest instance.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const KinesisAnalyticsRequest::Action action, ListApplicationsRequest * const q)
    : ListApplicationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListApplicationsRequest instance.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ListApplicationsRequestPrivate &other, ListApplicationsRequest * const q)
    : ListApplicationsPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
