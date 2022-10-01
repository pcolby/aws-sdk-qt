// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getitemresponse.h"
#include "getitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::GetItemResponse
 * \brief The GetItemResponse class provides an interace for DynamoDb GetItem responses.
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
 * \sa DynamoDbClient::getItem
 */

/*!
 * Constructs a GetItemResponse object for \a reply to \a request, with parent \a parent.
 */
GetItemResponse::GetItemResponse(
        const GetItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new GetItemResponsePrivate(this), parent)
{
    setRequest(new GetItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetItemRequest * GetItemResponse::request() const
{
    Q_D(const GetItemResponse);
    return static_cast<const GetItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb GetItem \a response.
 */
void GetItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::GetItemResponsePrivate
 * \brief The GetItemResponsePrivate class provides private implementation for GetItemResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a GetItemResponsePrivate object with public implementation \a q.
 */
GetItemResponsePrivate::GetItemResponsePrivate(
    GetItemResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb GetItem response element from \a xml.
 */
void GetItemResponsePrivate::parseGetItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
