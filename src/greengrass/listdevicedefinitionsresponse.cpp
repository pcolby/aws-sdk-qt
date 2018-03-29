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

#include "listdevicedefinitionsresponse.h"
#include "listdevicedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListDeviceDefinitionsResponse
 *
 * @brief  Handles Greengrass ListDeviceDefinitions responses.
 *
 * @see    GreengrassClient::listDeviceDefinitions
 */

/**
 * @brief  Constructs a new ListDeviceDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeviceDefinitionsResponse::ListDeviceDefinitionsResponse(
        const ListDeviceDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeviceDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceDefinitionsRequest(request));
    setReply(reply);
}

const ListDeviceDefinitionsRequest * ListDeviceDefinitionsResponse::request() const
{
    Q_D(const ListDeviceDefinitionsResponse);
    return static_cast<const ListDeviceDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListDeviceDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListDeviceDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeviceDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListDeviceDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeviceDefinitionsResponse instance.
 */
ListDeviceDefinitionsResponsePrivate::ListDeviceDefinitionsResponsePrivate(
    ListDeviceDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListDeviceDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeviceDefinitionsResponsePrivate::ListDeviceDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
