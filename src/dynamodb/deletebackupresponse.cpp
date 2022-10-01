// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DeleteBackupResponse
 * \brief The DeleteBackupResponse class provides an interace for DynamoDb DeleteBackup responses.
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
 * \sa DynamoDbClient::deleteBackup
 */

/*!
 * Constructs a DeleteBackupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupResponse::DeleteBackupResponse(
        const DeleteBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    Q_D(const DeleteBackupResponse);
    return static_cast<const DeleteBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb DeleteBackup \a response.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::DeleteBackupResponsePrivate
 * \brief The DeleteBackupResponsePrivate class provides private implementation for DeleteBackupResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DeleteBackupResponsePrivate object with public implementation \a q.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb DeleteBackup response element from \a xml.
 */
void DeleteBackupResponsePrivate::parseDeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
