// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetitemresponse.h"
#include "batchgetitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::BatchGetItemResponse
 * \brief The BatchGetItemResponse class provides an interace for DynamoDb BatchGetItem responses.
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
 * \sa DynamoDbClient::batchGetItem
 */

/*!
 * Constructs a BatchGetItemResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetItemResponse::BatchGetItemResponse(
        const BatchGetItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new BatchGetItemResponsePrivate(this), parent)
{
    setRequest(new BatchGetItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetItemRequest * BatchGetItemResponse::request() const
{
    Q_D(const BatchGetItemResponse);
    return static_cast<const BatchGetItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb BatchGetItem \a response.
 */
void BatchGetItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::BatchGetItemResponsePrivate
 * \brief The BatchGetItemResponsePrivate class provides private implementation for BatchGetItemResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a BatchGetItemResponsePrivate object with public implementation \a q.
 */
BatchGetItemResponsePrivate::BatchGetItemResponsePrivate(
    BatchGetItemResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb BatchGetItem response element from \a xml.
 */
void BatchGetItemResponsePrivate::parseBatchGetItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
