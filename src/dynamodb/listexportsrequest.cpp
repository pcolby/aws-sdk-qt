/*
    Copyright 2013-2021 Paul Colby

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

#include "listexportsrequest.h"
#include "listexportsrequest_p.h"
#include "listexportsresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::ListExportsRequest
 * \brief The ListExportsRequest class provides an interface for DynamoDB ListExports requests.
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
 * \sa DynamoDBClient::listExports
 */

/*!
 * Constructs a copy of \a other.
 */
ListExportsRequest::ListExportsRequest(const ListExportsRequest &other)
    : DynamoDBRequest(new ListExportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExportsRequest object.
 */
ListExportsRequest::ListExportsRequest()
    : DynamoDBRequest(new ListExportsRequestPrivate(DynamoDBRequest::ListExportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListExportsResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::ListExportsRequestPrivate
 * \brief The ListExportsRequestPrivate class provides private implementation for ListExportsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a ListExportsRequestPrivate object for DynamoDB \a action,
 * with public implementation \a q.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const DynamoDBRequest::Action action, ListExportsRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExportsRequest
 * class' copy constructor.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const ListExportsRequestPrivate &other, ListExportsRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
