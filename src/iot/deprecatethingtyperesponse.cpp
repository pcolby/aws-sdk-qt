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

#include "deprecatethingtyperesponse.h"
#include "deprecatethingtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeprecateThingTypeResponse
 *
 * @brief  Handles IoT DeprecateThingType responses.
 *
 * @see    IoTClient::deprecateThingType
 */

/**
 * @brief  Constructs a new DeprecateThingTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeprecateThingTypeResponse::DeprecateThingTypeResponse(
        const DeprecateThingTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeprecateThingTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateThingTypeRequest(request));
    setReply(reply);
}

const DeprecateThingTypeRequest * DeprecateThingTypeResponse::request() const
{
    Q_D(const DeprecateThingTypeResponse);
    return static_cast<const DeprecateThingTypeRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeprecateThingType response.
 *
 * @param  response  Response to parse.
 */
void DeprecateThingTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeprecateThingTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeprecateThingTypeResponsePrivate
 *
 * @brief  Private implementation for DeprecateThingTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateThingTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeprecateThingTypeResponse instance.
 */
DeprecateThingTypeResponsePrivate::DeprecateThingTypeResponsePrivate(
    DeprecateThingTypeResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeprecateThingTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeprecateThingTypeResponsePrivate::parseDeprecateThingTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateThingTypeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
