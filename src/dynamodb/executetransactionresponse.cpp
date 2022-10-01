// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executetransactionresponse.h"
#include "executetransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::ExecuteTransactionResponse
 * \brief The ExecuteTransactionResponse class provides an interace for DynamoDb ExecuteTransaction responses.
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
 * \sa DynamoDbClient::executeTransaction
 */

/*!
 * Constructs a ExecuteTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteTransactionResponse::ExecuteTransactionResponse(
        const ExecuteTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new ExecuteTransactionResponsePrivate(this), parent)
{
    setRequest(new ExecuteTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteTransactionRequest * ExecuteTransactionResponse::request() const
{
    Q_D(const ExecuteTransactionResponse);
    return static_cast<const ExecuteTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb ExecuteTransaction \a response.
 */
void ExecuteTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::ExecuteTransactionResponsePrivate
 * \brief The ExecuteTransactionResponsePrivate class provides private implementation for ExecuteTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a ExecuteTransactionResponsePrivate object with public implementation \a q.
 */
ExecuteTransactionResponsePrivate::ExecuteTransactionResponsePrivate(
    ExecuteTransactionResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb ExecuteTransaction response element from \a xml.
 */
void ExecuteTransactionResponsePrivate::parseExecuteTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
