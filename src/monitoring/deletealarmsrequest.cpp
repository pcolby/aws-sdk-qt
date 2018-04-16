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

#include "deletealarmsrequest.h"
#include "deletealarmsrequest_p.h"
#include "deletealarmsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteAlarmsRequest
 *
 * \brief The DeleteAlarmsRequest class provides an interface for CloudWatch DeleteAlarms requests.
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
 * \sa CloudWatchClient::deleteAlarms
 */

/*!
 * @brief  Constructs a new DeleteAlarmsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest(const DeleteAlarmsRequest &other)
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteAlarmsRequest object.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest()
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(CloudWatchRequest::DeleteAlarmsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlarmsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteAlarmsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAlarmsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlarmsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteAlarmsRequestPrivate
 *
 * @brief  Private implementation for DeleteAlarmsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAlarmsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DeleteAlarmsRequest instance.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteAlarmsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAlarmsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlarmsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAlarmsRequest instance.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const DeleteAlarmsRequestPrivate &other, DeleteAlarmsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
