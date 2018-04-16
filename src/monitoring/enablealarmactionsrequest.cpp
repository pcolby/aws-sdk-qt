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

#include "enablealarmactionsrequest.h"
#include "enablealarmactionsrequest_p.h"
#include "enablealarmactionsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsRequest
 *
 * \brief The EnableAlarmActionsRequest class provides an interface for CloudWatch EnableAlarmActions requests.
 *
 * \ingroup CloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::enableAlarmActions
 */

/*!
 * @brief  Constructs a new EnableAlarmActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest(const EnableAlarmActionsRequest &other)
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new EnableAlarmActionsRequest object.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest()
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(CloudWatchRequest::EnableAlarmActionsAction, this))
{

}

/*!
 * \reimp
 */
bool EnableAlarmActionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an EnableAlarmActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableAlarmActionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableAlarmActionsRequest::response(QNetworkReply * const reply) const
{
    return new EnableAlarmActionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  EnableAlarmActionsRequestPrivate
 *
 * @brief  Private implementation for EnableAlarmActionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableAlarmActionsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public EnableAlarmActionsRequest instance.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const CloudWatchRequest::Action action, EnableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new EnableAlarmActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableAlarmActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableAlarmActionsRequest instance.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const EnableAlarmActionsRequestPrivate &other, EnableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
