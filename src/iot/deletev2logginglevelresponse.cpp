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

#include "deletev2logginglevelresponse.h"
#include "deletev2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteV2LoggingLevelResponse
 *
 * @brief  Handles IoT DeleteV2LoggingLevel responses.
 *
 * @see    IoTClient::deleteV2LoggingLevel
 */

/**
 * @brief  Constructs a new DeleteV2LoggingLevelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteV2LoggingLevelResponse::DeleteV2LoggingLevelResponse(
        const DeleteV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new DeleteV2LoggingLevelRequest(request));
    setReply(reply);
}

const DeleteV2LoggingLevelRequest * DeleteV2LoggingLevelResponse::request() const
{
    Q_D(const DeleteV2LoggingLevelResponse);
    return static_cast<const DeleteV2LoggingLevelRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteV2LoggingLevel response.
 *
 * @param  response  Response to parse.
 */
void DeleteV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteV2LoggingLevelResponsePrivate
 *
 * @brief  Private implementation for DeleteV2LoggingLevelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteV2LoggingLevelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteV2LoggingLevelResponse instance.
 */
DeleteV2LoggingLevelResponsePrivate::DeleteV2LoggingLevelResponsePrivate(
    DeleteV2LoggingLevelQueueResponse * const q) : DeleteV2LoggingLevelPrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteV2LoggingLevelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteV2LoggingLevelResponsePrivate::DeleteV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteV2LoggingLevelResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
