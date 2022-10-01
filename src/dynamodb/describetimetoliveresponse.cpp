// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetimetoliveresponse.h"
#include "describetimetoliveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeTimeToLiveResponse
 * \brief The DescribeTimeToLiveResponse class provides an interace for DynamoDb DescribeTimeToLive responses.
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
 * \sa DynamoDbClient::describeTimeToLive
 */

/*!
 * Constructs a DescribeTimeToLiveResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTimeToLiveResponse::DescribeTimeToLiveResponse(
        const DescribeTimeToLiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new DescribeTimeToLiveResponsePrivate(this), parent)
{
    setRequest(new DescribeTimeToLiveRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTimeToLiveRequest * DescribeTimeToLiveResponse::request() const
{
    Q_D(const DescribeTimeToLiveResponse);
    return static_cast<const DescribeTimeToLiveRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb DescribeTimeToLive \a response.
 */
void DescribeTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTimeToLiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::DescribeTimeToLiveResponsePrivate
 * \brief The DescribeTimeToLiveResponsePrivate class provides private implementation for DescribeTimeToLiveResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeTimeToLiveResponsePrivate object with public implementation \a q.
 */
DescribeTimeToLiveResponsePrivate::DescribeTimeToLiveResponsePrivate(
    DescribeTimeToLiveResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb DescribeTimeToLive response element from \a xml.
 */
void DescribeTimeToLiveResponsePrivate::parseDescribeTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTimeToLiveResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
