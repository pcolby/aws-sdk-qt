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

#include "describebackuprequest.h"
#include "describebackuprequest_p.h"
#include "describebackupresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::DescribeBackupRequest
 *
 * \brief The DescribeBackupRequest class provides an interface for DynamoDB DescribeBackup requests.
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
 * \sa DynamoDBClient::describeBackup
 */

/*!
 * @brief  Constructs a new DescribeBackupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBackupRequest::DescribeBackupRequest(const DescribeBackupRequest &other)
    : DynamoDBRequest(new DescribeBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeBackupRequest object.
 */
DescribeBackupRequest::DescribeBackupRequest()
    : DynamoDBRequest(new DescribeBackupRequestPrivate(DynamoDBRequest::DescribeBackupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeBackupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBackupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeBackupRequestPrivate
 *
 * @brief  Private implementation for DescribeBackupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBackupRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DescribeBackupRequest instance.
 */
DescribeBackupRequestPrivate::DescribeBackupRequestPrivate(
    const DynamoDBRequest::Action action, DescribeBackupRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBackupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBackupRequest instance.
 */
DescribeBackupRequestPrivate::DescribeBackupRequestPrivate(
    const DescribeBackupRequestPrivate &other, DescribeBackupRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
