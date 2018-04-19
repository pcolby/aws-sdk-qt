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

#include "getitemrequest.h"
#include "getitemrequest_p.h"
#include "getitemresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::GetItemRequest
 * \brief The GetItemRequest class provides an interface for DynamoDB GetItem requests.
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
 * \sa DynamoDBClient::getItem
 */

/*!
 * Constructs a copy of \a other.
 */
GetItemRequest::GetItemRequest(const GetItemRequest &other)
    : DynamoDBRequest(new GetItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetItemRequest object.
 */
GetItemRequest::GetItemRequest()
    : DynamoDBRequest(new GetItemRequestPrivate(DynamoDBRequest::GetItemAction, this))
{

}

/*!
 * \reimp
 */
bool GetItemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetItemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetItemRequest::response(QNetworkReply * const reply) const
{
    return new GetItemResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::GetItemRequestPrivate
 * \brief The GetItemRequestPrivate class provides private implementation for GetItemRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a GetItemRequestPrivate object for DynamoDB \a action,
 * with public implementation \a q.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const DynamoDBRequest::Action action, GetItemRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetItemRequest
 * class' copy constructor.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const GetItemRequestPrivate &other, GetItemRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
