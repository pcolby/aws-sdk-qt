/*
    Copyright 2013-2021 Paul Colby

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

#include "describetimetoliveresponse.h"
#include "describetimetoliveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::DescribeTimeToLiveResponse
 * \brief The DescribeTimeToLiveResponse class provides an interace for DynamoDB DescribeTimeToLive responses.
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
 * \sa DynamoDBClient::describeTimeToLive
 */

/*!
 * Constructs a DescribeTimeToLiveResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTimeToLiveResponse::DescribeTimeToLiveResponse(
        const DescribeTimeToLiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeTimeToLiveResponsePrivate(this), parent)
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
 * Parses a successful DynamoDB DescribeTimeToLive \a response.
 */
void DescribeTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTimeToLiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::DescribeTimeToLiveResponsePrivate
 * \brief The DescribeTimeToLiveResponsePrivate class provides private implementation for DescribeTimeToLiveResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a DescribeTimeToLiveResponsePrivate object with public implementation \a q.
 */
DescribeTimeToLiveResponsePrivate::DescribeTimeToLiveResponsePrivate(
    DescribeTimeToLiveResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB DescribeTimeToLive response element from \a xml.
 */
void DescribeTimeToLiveResponsePrivate::parseDescribeTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTimeToLiveResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDB
} // namespace QtAws
