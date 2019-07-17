/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatetimetoliverequest.h"
#include "updatetimetoliverequest_p.h"
#include "updatetimetoliveresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::UpdateTimeToLiveRequest
 * \brief The UpdateTimeToLiveRequest class provides an interface for DynamoDB UpdateTimeToLive requests.
 *
 * \inmodule QtAwsDynamoDB
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 *  scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 *  that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 *  cluster
 * 
 *  scaling>
 * 
 *  With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 *  request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 *  degradation, and use the AWS Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 *  built-in high availability and data durability.
 *
 * \sa DynamoDBClient::updateTimeToLive
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTimeToLiveRequest::UpdateTimeToLiveRequest(const UpdateTimeToLiveRequest &other)
    : DynamoDBRequest(new UpdateTimeToLiveRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTimeToLiveRequest object.
 */
UpdateTimeToLiveRequest::UpdateTimeToLiveRequest()
    : DynamoDBRequest(new UpdateTimeToLiveRequestPrivate(DynamoDBRequest::UpdateTimeToLiveAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTimeToLiveRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTimeToLiveResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTimeToLiveRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTimeToLiveResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::UpdateTimeToLiveRequestPrivate
 * \brief The UpdateTimeToLiveRequestPrivate class provides private implementation for UpdateTimeToLiveRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a UpdateTimeToLiveRequestPrivate object for DynamoDB \a action,
 * with public implementation \a q.
 */
UpdateTimeToLiveRequestPrivate::UpdateTimeToLiveRequestPrivate(
    const DynamoDBRequest::Action action, UpdateTimeToLiveRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTimeToLiveRequest
 * class' copy constructor.
 */
UpdateTimeToLiveRequestPrivate::UpdateTimeToLiveRequestPrivate(
    const UpdateTimeToLiveRequestPrivate &other, UpdateTimeToLiveRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
