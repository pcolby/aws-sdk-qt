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

#include "putitemrequest.h"
#include "putitemrequest_p.h"
#include "putitemresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::PutItemRequest
 *
 * \brief The PutItemRequest class provides an interface for DynamoDB PutItem requests.
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
 * \sa DynamoDBClient::putItem
 */

/*!
 * @brief  Constructs a new PutItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutItemRequest::PutItemRequest(const PutItemRequest &other)
    : DynamoDBRequest(new PutItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutItemRequest object.
 */
PutItemRequest::PutItemRequest()
    : DynamoDBRequest(new PutItemRequestPrivate(DynamoDBRequest::PutItemAction, this))
{

}

/*!
 * \reimp
 */
bool PutItemRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutItemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * PutItemRequest::response(QNetworkReply * const reply) const
{
    return new PutItemResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutItemRequestPrivate
 *
 * @brief  Private implementation for PutItemRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public PutItemRequest instance.
 */
PutItemRequestPrivate::PutItemRequestPrivate(
    const DynamoDBRequest::Action action, PutItemRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutItemRequest instance.
 */
PutItemRequestPrivate::PutItemRequestPrivate(
    const PutItemRequestPrivate &other, PutItemRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
