// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importtablerequest.h"
#include "importtablerequest_p.h"
#include "importtableresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::ImportTableRequest
 * \brief The ImportTableRequest class provides an interface for DynamoDb ImportTable requests.
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
 * \sa DynamoDbClient::importTable
 */

/*!
 * Constructs a copy of \a other.
 */
ImportTableRequest::ImportTableRequest(const ImportTableRequest &other)
    : DynamoDbRequest(new ImportTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportTableRequest object.
 */
ImportTableRequest::ImportTableRequest()
    : DynamoDbRequest(new ImportTableRequestPrivate(DynamoDbRequest::ImportTableAction, this))
{

}

/*!
 * \reimp
 */
bool ImportTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportTableRequest::response(QNetworkReply * const reply) const
{
    return new ImportTableResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::ImportTableRequestPrivate
 * \brief The ImportTableRequestPrivate class provides private implementation for ImportTableRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a ImportTableRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
ImportTableRequestPrivate::ImportTableRequestPrivate(
    const DynamoDbRequest::Action action, ImportTableRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportTableRequest
 * class' copy constructor.
 */
ImportTableRequestPrivate::ImportTableRequestPrivate(
    const ImportTableRequestPrivate &other, ImportTableRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
