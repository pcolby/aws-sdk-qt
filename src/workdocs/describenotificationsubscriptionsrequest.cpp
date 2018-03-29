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

#include "describenotificationsubscriptionsrequest.h"
#include "describenotificationsubscriptionsrequest_p.h"
#include "describenotificationsubscriptionsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeNotificationSubscriptionsRequest
 *
 * @brief  Implements WorkDocs DescribeNotificationSubscriptions requests.
 *
 * @see    WorkDocsClient::describeNotificationSubscriptions
 */

/**
 * @brief  Constructs a new DescribeNotificationSubscriptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNotificationSubscriptionsRequest::DescribeNotificationSubscriptionsRequest(const DescribeNotificationSubscriptionsRequest &other)
    : WorkDocsRequest(new DescribeNotificationSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNotificationSubscriptionsRequest object.
 */
DescribeNotificationSubscriptionsRequest::DescribeNotificationSubscriptionsRequest()
    : WorkDocsRequest(new DescribeNotificationSubscriptionsRequestPrivate(WorkDocsRequest::DescribeNotificationSubscriptionsAction, this))
{

}

bool DescribeNotificationSubscriptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNotificationSubscriptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNotificationSubscriptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeNotificationSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationSubscriptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNotificationSubscriptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeNotificationSubscriptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationSubscriptionsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeNotificationSubscriptionsRequest instance.
 */
DescribeNotificationSubscriptionsRequestPrivate::DescribeNotificationSubscriptionsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeNotificationSubscriptionsRequest * const q)
    : DescribeNotificationSubscriptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationSubscriptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationSubscriptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNotificationSubscriptionsRequest instance.
 */
DescribeNotificationSubscriptionsRequestPrivate::DescribeNotificationSubscriptionsRequestPrivate(
    const DescribeNotificationSubscriptionsRequestPrivate &other, DescribeNotificationSubscriptionsRequest * const q)
    : DescribeNotificationSubscriptionsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
