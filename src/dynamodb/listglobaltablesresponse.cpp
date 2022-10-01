// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listglobaltablesresponse.h"
#include "listglobaltablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::ListGlobalTablesResponse
 * \brief The ListGlobalTablesResponse class provides an interace for DynamoDb ListGlobalTables responses.
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
 * \sa DynamoDbClient::listGlobalTables
 */

/*!
 * Constructs a ListGlobalTablesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGlobalTablesResponse::ListGlobalTablesResponse(
        const ListGlobalTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new ListGlobalTablesResponsePrivate(this), parent)
{
    setRequest(new ListGlobalTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGlobalTablesRequest * ListGlobalTablesResponse::request() const
{
    Q_D(const ListGlobalTablesResponse);
    return static_cast<const ListGlobalTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb ListGlobalTables \a response.
 */
void ListGlobalTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGlobalTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::ListGlobalTablesResponsePrivate
 * \brief The ListGlobalTablesResponsePrivate class provides private implementation for ListGlobalTablesResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a ListGlobalTablesResponsePrivate object with public implementation \a q.
 */
ListGlobalTablesResponsePrivate::ListGlobalTablesResponsePrivate(
    ListGlobalTablesResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb ListGlobalTables response element from \a xml.
 */
void ListGlobalTablesResponsePrivate::parseListGlobalTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGlobalTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
