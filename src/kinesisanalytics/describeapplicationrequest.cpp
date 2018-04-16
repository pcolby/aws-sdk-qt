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

#include "describeapplicationrequest.h"
#include "describeapplicationrequest_p.h"
#include "describeapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationRequest
 *
 * \brief The DescribeApplicationRequest class provides an interface for KinesisAnalytics DescribeApplication requests.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::describeApplication
 */

/*!
 * @brief  Constructs a new DescribeApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeApplicationRequest::DescribeApplicationRequest(const DescribeApplicationRequest &other)
    : KinesisAnalyticsRequest(new DescribeApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeApplicationRequest object.
 */
DescribeApplicationRequest::DescribeApplicationRequest()
    : KinesisAnalyticsRequest(new DescribeApplicationRequestPrivate(KinesisAnalyticsRequest::DescribeApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeApplicationRequestPrivate
 *
 * @brief  Private implementation for DescribeApplicationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DescribeApplicationRequest instance.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DescribeApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeApplicationRequest instance.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const DescribeApplicationRequestPrivate &other, DescribeApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
