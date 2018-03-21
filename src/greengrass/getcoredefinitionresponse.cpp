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

#include "getcoredefinitionresponse.h"
#include "getcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetCoreDefinitionResponse
 *
 * @brief  Handles Greengrass GetCoreDefinition responses.
 *
 * @see    GreengrassClient::getCoreDefinition
 */

/**
 * @brief  Constructs a new GetCoreDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCoreDefinitionResponse::GetCoreDefinitionResponse(
        const GetCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionRequest(request));
    setReply(reply);
}

const GetCoreDefinitionRequest * GetCoreDefinitionResponse::request() const
{
    Q_D(const GetCoreDefinitionResponse);
    return static_cast<const GetCoreDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetCoreDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCoreDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetCoreDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCoreDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCoreDefinitionResponse instance.
 */
GetCoreDefinitionResponsePrivate::GetCoreDefinitionResponsePrivate(
    GetCoreDefinitionQueueResponse * const q) : GetCoreDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetCoreDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCoreDefinitionResponsePrivate::GetCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
