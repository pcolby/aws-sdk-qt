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

#include "updatecontinuousbackupsresponse.h"
#include "updatecontinuousbackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  UpdateContinuousBackupsResponse
 *
 * @brief  Handles DynamoDB UpdateContinuousBackups responses.
 *
 * @see    DynamoDBClient::updateContinuousBackups
 */

/**
 * @brief  Constructs a new UpdateContinuousBackupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateContinuousBackupsResponse::UpdateContinuousBackupsResponse(
        const UpdateContinuousBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateContinuousBackupsResponsePrivate(this), parent)
{
    setRequest(new UpdateContinuousBackupsRequest(request));
    setReply(reply);
}

const UpdateContinuousBackupsRequest * UpdateContinuousBackupsResponse::request() const
{
    Q_D(const UpdateContinuousBackupsResponse);
    return static_cast<const UpdateContinuousBackupsRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB UpdateContinuousBackups response.
 *
 * @param  response  Response to parse.
 */
void UpdateContinuousBackupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateContinuousBackupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateContinuousBackupsResponsePrivate
 *
 * @brief  Private implementation for UpdateContinuousBackupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContinuousBackupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateContinuousBackupsResponse instance.
 */
UpdateContinuousBackupsResponsePrivate::UpdateContinuousBackupsResponsePrivate(
    UpdateContinuousBackupsResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB UpdateContinuousBackupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateContinuousBackupsResponsePrivate::parseUpdateContinuousBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContinuousBackupsResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
