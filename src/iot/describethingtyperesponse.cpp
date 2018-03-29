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

#include "describethingtyperesponse.h"
#include "describethingtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingTypeResponse
 *
 * @brief  Handles IoT DescribeThingType responses.
 *
 * @see    IoTClient::describeThingType
 */

/**
 * @brief  Constructs a new DescribeThingTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeThingTypeResponse::DescribeThingTypeResponse(
        const DescribeThingTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeThingTypeResponse(new DescribeThingTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeThingTypeRequest(request));
    setReply(reply);
}

const DescribeThingTypeRequest * DescribeThingTypeResponse::request() const
{
    Q_D(const DescribeThingTypeResponse);
    return static_cast<const DescribeThingTypeRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeThingType response.
 *
 * @param  response  Response to parse.
 */
void DescribeThingTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeThingTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeThingTypeResponsePrivate
 *
 * @brief  Private implementation for DescribeThingTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeThingTypeResponse instance.
 */
DescribeThingTypeResponsePrivate::DescribeThingTypeResponsePrivate(
    DescribeThingTypeResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeThingTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeThingTypeResponsePrivate::parseDescribeThingTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingTypeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
