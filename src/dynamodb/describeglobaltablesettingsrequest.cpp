/*
    Copyright 2013-2018 Paul Colby

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

#include "describeglobaltablesettingsrequest.h"
#include "describeglobaltablesettingsrequest_p.h"
#include "describeglobaltablesettingsresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::DescribeGlobalTableSettingsRequest
 * \brief The DescribeGlobalTableSettingsRequest class provides an interface for DynamoDB DescribeGlobalTableSettings requests.
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
 * \sa DynamoDBClient::describeGlobalTableSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalTableSettingsRequest::DescribeGlobalTableSettingsRequest(const DescribeGlobalTableSettingsRequest &other)
    : DynamoDBRequest(new DescribeGlobalTableSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalTableSettingsRequest object.
 */
DescribeGlobalTableSettingsRequest::DescribeGlobalTableSettingsRequest()
    : DynamoDBRequest(new DescribeGlobalTableSettingsRequestPrivate(DynamoDBRequest::DescribeGlobalTableSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalTableSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalTableSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalTableSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalTableSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::DescribeGlobalTableSettingsRequestPrivate
 * \brief The DescribeGlobalTableSettingsRequestPrivate class provides private implementation for DescribeGlobalTableSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a DescribeGlobalTableSettingsRequestPrivate object for DynamoDB \a action,
 * with public implementation \a q.
 */
DescribeGlobalTableSettingsRequestPrivate::DescribeGlobalTableSettingsRequestPrivate(
    const DynamoDBRequest::Action action, DescribeGlobalTableSettingsRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalTableSettingsRequest
 * class' copy constructor.
 */
DescribeGlobalTableSettingsRequestPrivate::DescribeGlobalTableSettingsRequestPrivate(
    const DescribeGlobalTableSettingsRequestPrivate &other, DescribeGlobalTableSettingsRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
