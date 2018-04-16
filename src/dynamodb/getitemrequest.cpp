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
 *
 * \brief The GetItemRequest class encapsulates DynamoDB GetItem requests.
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
 * \sa DynamoDBClient::getItem
 */

/*!
 * @brief  Constructs a new GetItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetItemRequest::GetItemRequest(const GetItemRequest &other)
    : DynamoDBRequest(new GetItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetItemRequest object.
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
 * @brief  Construct an GetItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetItemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * GetItemRequest::response(QNetworkReply * const reply) const
{
    return new GetItemResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetItemRequestPrivate
 *
 * @brief  Private implementation for GetItemRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public GetItemRequest instance.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const DynamoDBRequest::Action action, GetItemRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetItemRequest instance.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const GetItemRequestPrivate &other, GetItemRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
