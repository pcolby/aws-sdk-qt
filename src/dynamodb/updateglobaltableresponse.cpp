// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateglobaltableresponse.h"
#include "updateglobaltableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::UpdateGlobalTableResponse
 * \brief The UpdateGlobalTableResponse class provides an interace for DynamoDb UpdateGlobalTable responses.
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
 * \sa DynamoDbClient::updateGlobalTable
 */

/*!
 * Constructs a UpdateGlobalTableResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGlobalTableResponse::UpdateGlobalTableResponse(
        const UpdateGlobalTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new UpdateGlobalTableResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGlobalTableRequest * UpdateGlobalTableResponse::request() const
{
    Q_D(const UpdateGlobalTableResponse);
    return static_cast<const UpdateGlobalTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb UpdateGlobalTable \a response.
 */
void UpdateGlobalTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGlobalTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::UpdateGlobalTableResponsePrivate
 * \brief The UpdateGlobalTableResponsePrivate class provides private implementation for UpdateGlobalTableResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a UpdateGlobalTableResponsePrivate object with public implementation \a q.
 */
UpdateGlobalTableResponsePrivate::UpdateGlobalTableResponsePrivate(
    UpdateGlobalTableResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb UpdateGlobalTable response element from \a xml.
 */
void UpdateGlobalTableResponsePrivate::parseUpdateGlobalTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
