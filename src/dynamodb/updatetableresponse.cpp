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

#include "updatetableresponse.h"
#include "updatetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  UpdateTableResponse
 *
 * @brief  Handles DynamoDB UpdateTable responses.
 *
 * @see    DynamoDBClient::updateTable
 */

/**
 * @brief  Constructs a new UpdateTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTableResponse::UpdateTableResponse(
        const UpdateTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateTableResponsePrivate(this), parent)
{
    setRequest(new UpdateTableRequest(request));
    setReply(reply);
}

const UpdateTableRequest * UpdateTableResponse::request() const
{
    Q_D(const UpdateTableResponse);
    return static_cast<const UpdateTableRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB UpdateTable response.
 *
 * @param  response  Response to parse.
 */
void UpdateTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTableResponsePrivate
 *
 * @brief  Private implementation for UpdateTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTableResponse instance.
 */
UpdateTableResponsePrivate::UpdateTableResponsePrivate(
    UpdateTableResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB UpdateTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTableResponsePrivate::UpdateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTableResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
