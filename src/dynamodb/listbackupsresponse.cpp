/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listbackupsresponse.h"
#include "listbackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  ListBackupsResponse
 *
 * @brief  Handles DynamoDB ListBackups responses.
 *
 * @see    DynamoDBClient::listBackups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBackupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListBackupsResponsePrivate(this), parent)
{
    setRequest(new ListBackupsRequest(request));
    setReply(reply);
}

const ListBackupsRequest * ListBackupsResponse::request() const
{
    Q_D(const ListBackupsResponse);
    return static_cast<const ListBackupsRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB ListBackups response.
 *
 * @param  response  Response to parse.
 */
void ListBackupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBackupsResponsePrivate
 *
 * @brief  Private implementation for ListBackupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBackupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBackupsResponse instance.
 */
ListBackupsResponsePrivate::ListBackupsResponsePrivate(
    ListBackupsQueueResponse * const q) : ListBackupsPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ListBackupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBackupsResponsePrivate::ListBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupsResponse"));
    /// @todo
}
