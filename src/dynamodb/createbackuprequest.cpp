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

#include "createbackuprequest.h"
#include "createbackuprequest_p.h"
#include "createbackupresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::CreateBackupRequest
 *
 * \brief The CreateBackupRequest class encapsulates DynamoDB CreateBackup requests.
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
 * \sa DynamoDBClient::createBackup
 */

/*!
 * @brief  Constructs a new CreateBackupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBackupRequest::CreateBackupRequest(const CreateBackupRequest &other)
    : DynamoDBRequest(new CreateBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateBackupRequest object.
 */
CreateBackupRequest::CreateBackupRequest()
    : DynamoDBRequest(new CreateBackupRequestPrivate(DynamoDBRequest::CreateBackupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateBackupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBackupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackupRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateBackupRequestPrivate
 *
 * @brief  Private implementation for CreateBackupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateBackupRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public CreateBackupRequest instance.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const DynamoDBRequest::Action action, CreateBackupRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateBackupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBackupRequest instance.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const CreateBackupRequestPrivate &other, CreateBackupRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
