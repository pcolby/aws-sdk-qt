// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexportrequest.h"
#include "describeexportrequest_p.h"
#include "describeexportresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeExportRequest
 * \brief The DescribeExportRequest class provides an interface for DynamoDb DescribeExport requests.
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
 * \sa DynamoDbClient::describeExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExportRequest::DescribeExportRequest(const DescribeExportRequest &other)
    : DynamoDbRequest(new DescribeExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExportRequest object.
 */
DescribeExportRequest::DescribeExportRequest()
    : DynamoDbRequest(new DescribeExportRequestPrivate(DynamoDbRequest::DescribeExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExportResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::DescribeExportRequestPrivate
 * \brief The DescribeExportRequestPrivate class provides private implementation for DescribeExportRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeExportRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
DescribeExportRequestPrivate::DescribeExportRequestPrivate(
    const DynamoDbRequest::Action action, DescribeExportRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExportRequest
 * class' copy constructor.
 */
DescribeExportRequestPrivate::DescribeExportRequestPrivate(
    const DescribeExportRequestPrivate &other, DescribeExportRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
