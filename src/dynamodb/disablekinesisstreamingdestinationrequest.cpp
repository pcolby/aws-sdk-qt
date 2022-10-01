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

#include "disablekinesisstreamingdestinationrequest.h"
#include "disablekinesisstreamingdestinationrequest_p.h"
#include "disablekinesisstreamingdestinationresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DisableKinesisStreamingDestinationRequest
 * \brief The DisableKinesisStreamingDestinationRequest class provides an interface for DynamoDb DisableKinesisStreamingDestination requests.
 *
 * \inmodule QtAwsDynamoDb
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
 *  degradation, and use the Amazon Web Services Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an Amazon Web Services
 *  Region, providing built-in high availability and data
 *
 * \sa DynamoDbClient::disableKinesisStreamingDestination
 */

/*!
 * Constructs a copy of \a other.
 */
DisableKinesisStreamingDestinationRequest::DisableKinesisStreamingDestinationRequest(const DisableKinesisStreamingDestinationRequest &other)
    : DynamoDbRequest(new DisableKinesisStreamingDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableKinesisStreamingDestinationRequest object.
 */
DisableKinesisStreamingDestinationRequest::DisableKinesisStreamingDestinationRequest()
    : DynamoDbRequest(new DisableKinesisStreamingDestinationRequestPrivate(DynamoDbRequest::DisableKinesisStreamingDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool DisableKinesisStreamingDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableKinesisStreamingDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableKinesisStreamingDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DisableKinesisStreamingDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::DisableKinesisStreamingDestinationRequestPrivate
 * \brief The DisableKinesisStreamingDestinationRequestPrivate class provides private implementation for DisableKinesisStreamingDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DisableKinesisStreamingDestinationRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
DisableKinesisStreamingDestinationRequestPrivate::DisableKinesisStreamingDestinationRequestPrivate(
    const DynamoDbRequest::Action action, DisableKinesisStreamingDestinationRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableKinesisStreamingDestinationRequest
 * class' copy constructor.
 */
DisableKinesisStreamingDestinationRequestPrivate::DisableKinesisStreamingDestinationRequestPrivate(
    const DisableKinesisStreamingDestinationRequestPrivate &other, DisableKinesisStreamingDestinationRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
