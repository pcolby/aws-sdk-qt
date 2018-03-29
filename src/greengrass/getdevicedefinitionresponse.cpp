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

#include "getdevicedefinitionresponse.h"
#include "getdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetDeviceDefinitionResponse
 *
 * @brief  Handles Greengrass GetDeviceDefinition responses.
 *
 * @see    GreengrassClient::getDeviceDefinition
 */

/**
 * @brief  Constructs a new GetDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceDefinitionResponse::GetDeviceDefinitionResponse(
        const GetDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetDeviceDefinitionRequest(request));
    setReply(reply);
}

const GetDeviceDefinitionRequest * GetDeviceDefinitionResponse::request() const
{
    Q_D(const GetDeviceDefinitionResponse);
    return static_cast<const GetDeviceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetDeviceDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeviceDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetDeviceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeviceDefinitionResponse instance.
 */
GetDeviceDefinitionResponsePrivate::GetDeviceDefinitionResponsePrivate(
    GetDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetDeviceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeviceDefinitionResponsePrivate::GetDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
