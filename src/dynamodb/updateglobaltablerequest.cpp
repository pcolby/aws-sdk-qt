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

#include "updateglobaltablerequest.h"
#include "updateglobaltablerequest_p.h"
#include "updateglobaltableresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::UpdateGlobalTableRequest
 * \brief The UpdateGlobalTableRequest class provides an interface for DynamoDB UpdateGlobalTable requests.
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
 * \sa DynamoDBClient::updateGlobalTable
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGlobalTableRequest::UpdateGlobalTableRequest(const UpdateGlobalTableRequest &other)
    : DynamoDBRequest(new UpdateGlobalTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGlobalTableRequest object.
 */
UpdateGlobalTableRequest::UpdateGlobalTableRequest()
    : DynamoDBRequest(new UpdateGlobalTableRequestPrivate(DynamoDBRequest::UpdateGlobalTableAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGlobalTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGlobalTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGlobalTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalTableResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDB::UpdateGlobalTableRequestPrivate
 * \brief The UpdateGlobalTableRequestPrivate class provides private implementation for UpdateGlobalTableRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a UpdateGlobalTableRequestPrivate object for DynamoDB \a action,
 * with public implementation \a q.
 */
UpdateGlobalTableRequestPrivate::UpdateGlobalTableRequestPrivate(
    const DynamoDBRequest::Action action, UpdateGlobalTableRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalTableRequest
 * class' copy constructor.
 */
UpdateGlobalTableRequestPrivate::UpdateGlobalTableRequestPrivate(
    const UpdateGlobalTableRequestPrivate &other, UpdateGlobalTableRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
