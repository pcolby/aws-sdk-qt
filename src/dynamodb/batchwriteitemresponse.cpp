/*
    Copyright 2013-2018 Paul Colby

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

#include "batchwriteitemresponse.h"
#include "batchwriteitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::BatchWriteItemResponse
 * \brief The BatchWriteItemResponse class provides an interace for DynamoDB BatchWriteItem responses.
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
 * \sa DynamoDBClient::batchWriteItem
 */

/*!
 * Constructs a BatchWriteItemResponse object for \a reply to \a request, with parent \a parent.
 */
BatchWriteItemResponse::BatchWriteItemResponse(
        const BatchWriteItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new BatchWriteItemResponsePrivate(this), parent)
{
    setRequest(new BatchWriteItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchWriteItemRequest * BatchWriteItemResponse::request() const
{
    Q_D(const BatchWriteItemResponse);
    return static_cast<const BatchWriteItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDB BatchWriteItem \a response.
 */
void BatchWriteItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchWriteItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::BatchWriteItemResponsePrivate
 * \brief The BatchWriteItemResponsePrivate class provides private implementation for BatchWriteItemResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a BatchWriteItemResponsePrivate object with public implementation \a q.
 */
BatchWriteItemResponsePrivate::BatchWriteItemResponsePrivate(
    BatchWriteItemResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB BatchWriteItem response element from \a xml.
 */
void BatchWriteItemResponsePrivate::parseBatchWriteItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchWriteItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
