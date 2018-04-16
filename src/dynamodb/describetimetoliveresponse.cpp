/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The DescribeTimeToLiveResponse class provides an interace for DynamoDB DescribeTimeToLive responses.
 *
 * \ingroup DynamoDB
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
 * @brief  Constructs a new DescribeTimeToLiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DescribeTimeToLiveRequest * DescribeTimeToLiveResponse::request() const
{
    Q_D(const DescribeTimeToLiveResponse);
    return static_cast<const DescribeTimeToLiveRequest *>(d->request);
}

/*!
 * @brief  Parse a DynamoDB DescribeTimeToLive response.
 *
 * @param  response  Response to parse.
 */
void DescribeTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTimeToLiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeTimeToLiveResponsePrivate
 *
 * \brief Private implementation for DescribeTimeToLiveResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTimeToLiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTimeToLiveResponse instance.
 */
DescribeTimeToLiveResponsePrivate::DescribeTimeToLiveResponsePrivate(
    DescribeTimeToLiveResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DynamoDB DescribeTimeToLiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTimeToLiveResponsePrivate::parseDescribeTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTimeToLiveResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
