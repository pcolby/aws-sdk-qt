// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontributorinsightsrequest.h"
#include "describecontributorinsightsrequest_p.h"
#include "describecontributorinsightsresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeContributorInsightsRequest
 * \brief The DescribeContributorInsightsRequest class provides an interface for DynamoDb DescribeContributorInsights requests.
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
 * \sa DynamoDbClient::describeContributorInsights
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContributorInsightsRequest::DescribeContributorInsightsRequest(const DescribeContributorInsightsRequest &other)
    : DynamoDbRequest(new DescribeContributorInsightsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContributorInsightsRequest object.
 */
DescribeContributorInsightsRequest::DescribeContributorInsightsRequest()
    : DynamoDbRequest(new DescribeContributorInsightsRequestPrivate(DynamoDbRequest::DescribeContributorInsightsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContributorInsightsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContributorInsightsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContributorInsightsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContributorInsightsResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::DescribeContributorInsightsRequestPrivate
 * \brief The DescribeContributorInsightsRequestPrivate class provides private implementation for DescribeContributorInsightsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeContributorInsightsRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
DescribeContributorInsightsRequestPrivate::DescribeContributorInsightsRequestPrivate(
    const DynamoDbRequest::Action action, DescribeContributorInsightsRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContributorInsightsRequest
 * class' copy constructor.
 */
DescribeContributorInsightsRequestPrivate::DescribeContributorInsightsRequestPrivate(
    const DescribeContributorInsightsRequestPrivate &other, DescribeContributorInsightsRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
