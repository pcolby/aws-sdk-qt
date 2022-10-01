// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateitemresponse.h"
#include "updateitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::UpdateItemResponse
 * \brief The UpdateItemResponse class provides an interace for DynamoDb UpdateItem responses.
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
 * \sa DynamoDbClient::updateItem
 */

/*!
 * Constructs a UpdateItemResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateItemResponse::UpdateItemResponse(
        const UpdateItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new UpdateItemResponsePrivate(this), parent)
{
    setRequest(new UpdateItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateItemRequest * UpdateItemResponse::request() const
{
    Q_D(const UpdateItemResponse);
    return static_cast<const UpdateItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb UpdateItem \a response.
 */
void UpdateItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::UpdateItemResponsePrivate
 * \brief The UpdateItemResponsePrivate class provides private implementation for UpdateItemResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a UpdateItemResponsePrivate object with public implementation \a q.
 */
UpdateItemResponsePrivate::UpdateItemResponsePrivate(
    UpdateItemResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb UpdateItem response element from \a xml.
 */
void UpdateItemResponsePrivate::parseUpdateItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
