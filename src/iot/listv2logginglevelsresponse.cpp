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

#include "listv2logginglevelsresponse.h"
#include "listv2logginglevelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListV2LoggingLevelsResponse
 *
 * @brief  Handles IoT ListV2LoggingLevels responses.
 *
 * @see    IoTClient::listV2LoggingLevels
 */

/**
 * @brief  Constructs a new ListV2LoggingLevelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListV2LoggingLevelsResponse::ListV2LoggingLevelsResponse(
        const ListV2LoggingLevelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListV2LoggingLevelsResponsePrivate(this), parent)
{
    setRequest(new ListV2LoggingLevelsRequest(request));
    setReply(reply);
}

const ListV2LoggingLevelsRequest * ListV2LoggingLevelsResponse::request() const
{
    Q_D(const ListV2LoggingLevelsResponse);
    return static_cast<const ListV2LoggingLevelsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListV2LoggingLevels response.
 *
 * @param  response  Response to parse.
 */
void ListV2LoggingLevelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListV2LoggingLevelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListV2LoggingLevelsResponsePrivate
 *
 * @brief  Private implementation for ListV2LoggingLevelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListV2LoggingLevelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListV2LoggingLevelsResponse instance.
 */
ListV2LoggingLevelsResponsePrivate::ListV2LoggingLevelsResponsePrivate(
    ListV2LoggingLevelsResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListV2LoggingLevelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListV2LoggingLevelsResponsePrivate::ListV2LoggingLevelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListV2LoggingLevelsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
