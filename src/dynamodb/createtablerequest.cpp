// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtablerequest.h"
#include "createtablerequest_p.h"
#include "createtableresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::CreateTableRequest
 * \brief The CreateTableRequest class provides an interface for DynamoDb CreateTable requests.
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
 * \sa DynamoDbClient::createTable
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTableRequest::CreateTableRequest(const CreateTableRequest &other)
    : DynamoDbRequest(new CreateTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTableRequest object.
 */
CreateTableRequest::CreateTableRequest()
    : DynamoDbRequest(new CreateTableRequestPrivate(DynamoDbRequest::CreateTableAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTableRequest::response(QNetworkReply * const reply) const
{
    return new CreateTableResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDb::CreateTableRequestPrivate
 * \brief The CreateTableRequestPrivate class provides private implementation for CreateTableRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a CreateTableRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const DynamoDbRequest::Action action, CreateTableRequest * const q)
    : DynamoDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTableRequest
 * class' copy constructor.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const CreateTableRequestPrivate &other, CreateTableRequest * const q)
    : DynamoDbRequestPrivate(other, q)
{

}

} // namespace DynamoDb
} // namespace QtAws
