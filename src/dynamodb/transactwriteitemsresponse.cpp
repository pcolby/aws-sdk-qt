/*
    Copyright 2013-2019 Paul Colby

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

#include "transactwriteitemsresponse.h"
#include "transactwriteitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::TransactWriteItemsResponse
 * \brief The TransactWriteItemsResponse class provides an interace for DynamoDB TransactWriteItems responses.
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
 * \sa DynamoDBClient::transactWriteItems
 */

/*!
 * Constructs a TransactWriteItemsResponse object for \a reply to \a request, with parent \a parent.
 */
TransactWriteItemsResponse::TransactWriteItemsResponse(
        const TransactWriteItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new TransactWriteItemsResponsePrivate(this), parent)
{
    setRequest(new TransactWriteItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TransactWriteItemsRequest * TransactWriteItemsResponse::request() const
{
    Q_D(const TransactWriteItemsResponse);
    return static_cast<const TransactWriteItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDB TransactWriteItems \a response.
 */
void TransactWriteItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TransactWriteItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::TransactWriteItemsResponsePrivate
 * \brief The TransactWriteItemsResponsePrivate class provides private implementation for TransactWriteItemsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a TransactWriteItemsResponsePrivate object with public implementation \a q.
 */
TransactWriteItemsResponsePrivate::TransactWriteItemsResponsePrivate(
    TransactWriteItemsResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB TransactWriteItems response element from \a xml.
 */
void TransactWriteItemsResponsePrivate::parseTransactWriteItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransactWriteItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDB
} // namespace QtAws
