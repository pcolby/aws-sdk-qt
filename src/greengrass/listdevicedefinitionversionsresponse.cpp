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

#include "listdevicedefinitionversionsresponse.h"
#include "listdevicedefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListDeviceDefinitionVersionsResponse
 *
 * @brief  Handles Greengrass ListDeviceDefinitionVersions responses.
 *
 * @see    GreengrassClient::listDeviceDefinitionVersions
 */

/**
 * @brief  Constructs a new ListDeviceDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeviceDefinitionVersionsResponse::ListDeviceDefinitionVersionsResponse(
        const ListDeviceDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeviceDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListDeviceDefinitionVersionsRequest * ListDeviceDefinitionVersionsResponse::request() const
{
    Q_D(const ListDeviceDefinitionVersionsResponse);
    return static_cast<const ListDeviceDefinitionVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListDeviceDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListDeviceDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeviceDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeviceDefinitionVersionsResponsePrivate
 *
 * @brief  Private implementation for ListDeviceDefinitionVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeviceDefinitionVersionsResponse instance.
 */
ListDeviceDefinitionVersionsResponsePrivate::ListDeviceDefinitionVersionsResponsePrivate(
    ListDeviceDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListDeviceDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeviceDefinitionVersionsResponsePrivate::ListDeviceDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
