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

#include "listglobaltablesrequest.h"
#include "listglobaltablesrequest_p.h"
#include "listglobaltablesresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::ListGlobalTablesRequest
 * \brief The ListGlobalTablesRequest class provides an interface for DynamoDB ListGlobalTables requests.
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
 * \sa DynamoDBClient::listGlobalTables
 */

/*!
 * Constructs a copy of \a other.
 */
ListGlobalTablesRequest::ListGlobalTablesRequest(const ListGlobalTablesRequest &other)
    : DynamoDBRequest(new ListGlobalTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGlobalTablesRequest object.
 */
ListGlobalTablesRequest::ListGlobalTablesRequest()
    : DynamoDBRequest(new ListGlobalTablesRequestPrivate(DynamoDBRequest::ListGlobalTablesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGlobalTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGlobalTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGlobalTablesRequest::response(QNetworkReply * const reply) const
{
    return new ListGlobalTablesResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::ListGlobalTablesRequestPrivate
 * \brief The ListGlobalTablesRequestPrivate class provides private implementation for ListGlobalTablesRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 *
 * Constructs a ListGlobalTablesRequestPrivate object for DynamoDB \a action with,
 * public implementation \a q.
 */
ListGlobalTablesRequestPrivate::ListGlobalTablesRequestPrivate(
    const DynamoDBRequest::Action action, ListGlobalTablesRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGlobalTablesRequest
 * class' copy constructor.
 */
ListGlobalTablesRequestPrivate::ListGlobalTablesRequestPrivate(
    const ListGlobalTablesRequestPrivate &other, ListGlobalTablesRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
