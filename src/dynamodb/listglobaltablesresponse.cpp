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

#include "listglobaltablesresponse.h"
#include "listglobaltablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::ListGlobalTablesResponse
 *
 * \brief The ListGlobalTablesResponse class encapsulates DynamoDB ListGlobalTables responses.
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
 * \sa DynamoDBClient::listGlobalTables
 */

/*!
 * @brief  Constructs a new ListGlobalTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGlobalTablesResponse::ListGlobalTablesResponse(
        const ListGlobalTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListGlobalTablesResponsePrivate(this), parent)
{
    setRequest(new ListGlobalTablesRequest(request));
    setReply(reply);
}

const ListGlobalTablesRequest * ListGlobalTablesResponse::request() const
{
    Q_D(const ListGlobalTablesResponse);
    return static_cast<const ListGlobalTablesRequest *>(d->request);
}

/*!
 * @brief  Parse a DynamoDB ListGlobalTables response.
 *
 * @param  response  Response to parse.
 */
void ListGlobalTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGlobalTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListGlobalTablesResponsePrivate
 *
 * \brief Private implementation for ListGlobalTablesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListGlobalTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGlobalTablesResponse instance.
 */
ListGlobalTablesResponsePrivate::ListGlobalTablesResponsePrivate(
    ListGlobalTablesResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DynamoDB ListGlobalTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGlobalTablesResponsePrivate::parseListGlobalTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGlobalTablesResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
