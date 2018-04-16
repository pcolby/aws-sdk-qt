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

#include "queryrequest.h"
#include "queryrequest_p.h"
#include "queryresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::QueryRequest
 *
 * \brief The QueryRequest class encapsulates DynamoDB Query requests.
 *
 * \ingroup DynamoDB
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
 * \sa DynamoDBClient::query
 */

/*!
 * @brief  Constructs a new QueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
QueryRequest::QueryRequest(const QueryRequest &other)
    : DynamoDBRequest(new QueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new QueryRequest object.
 */
QueryRequest::QueryRequest()
    : DynamoDBRequest(new QueryRequestPrivate(DynamoDBRequest::QueryAction, this))
{

}

/*!
 * \reimp
 */
bool QueryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an QueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An QueryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryRequest::response(QNetworkReply * const reply) const
{
    return new QueryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  QueryRequestPrivate
 *
 * @brief  Private implementation for QueryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new QueryRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public QueryRequest instance.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const DynamoDBRequest::Action action, QueryRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new QueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the QueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public QueryRequest instance.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const QueryRequestPrivate &other, QueryRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
