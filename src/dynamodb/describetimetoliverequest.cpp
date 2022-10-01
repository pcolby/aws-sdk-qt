// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetimetoliverequest.h"
#include "describetimetoliverequest_p.h"
#include "describetimetoliveresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeTimeToLiveRequest
 * \brief The DescribeTimeToLiveRequest class provides an interface for DynamoDb DescribeTimeToLive requests.
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
 * \sa DynamoDbClient::describeTimeToLive
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTimeToLiveRequest::DescribeTimeToLiveRequest(const DescribeTimeToLiveRequest &other)
    : DynamoDbRequest(new DescribeTimeToLiveRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTimeToLiveRequest object.
 */
DescribeTimeToLiveRequest::DescribeTimeToLiveRequest()
    : DynamoDbRequest(new DescribeTimeToLiveRequestPrivate(DynamoDbRequest::DescribeTimeToLiveAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTimeToLiveRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTimeToLiveResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTimeToLiveRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTimeToLiveResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::DescribeTimeToLiveRequestPrivate
 * \brief The DescribeTimeToLiveRequestPrivate class provides private implementation for DescribeTimeToLiveRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeTimeToLiveRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
DescribeTimeToLiveRequestPrivate::DescribeTimeToLiveRequestPrivate(
    const DynamoDbRequest::Action action, DescribeTimeToLiveRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTimeToLiveRequest
 * class' copy constructor.
 */
DescribeTimeToLiveRequestPrivate::DescribeTimeToLiveRequestPrivate(
    const DescribeTimeToLiveRequestPrivate &other, DescribeTimeToLiveRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
