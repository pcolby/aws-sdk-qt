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

#include "updateitemresponse.h"
#include "updateitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::UpdateItemResponse
 *
 * \brief The UpdateItemResponse class provides an interace for DynamoDB UpdateItem responses.
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
 * \sa DynamoDBClient::updateItem
 */

/*!
 * @brief  Constructs a new UpdateItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateItemResponse::UpdateItemResponse(
        const UpdateItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateItemResponsePrivate(this), parent)
{
    setRequest(new UpdateItemRequest(request));
    setReply(reply);
}

const UpdateItemRequest * UpdateItemResponse::request() const
{
    Q_D(const UpdateItemResponse);
    return static_cast<const UpdateItemRequest *>(d->request);
}

/*!
 * @brief  Parse a DynamoDB UpdateItem response.
 *
 * @param  response  Response to parse.
 */
void UpdateItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateItemResponsePrivate
 *
 * \brief Private implementation for UpdateItemResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateItemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateItemResponse instance.
 */
UpdateItemResponsePrivate::UpdateItemResponsePrivate(
    UpdateItemResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DynamoDB UpdateItemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateItemResponsePrivate::parseUpdateItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
