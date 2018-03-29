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

#include "getloggerdefinitionresponse.h"
#include "getloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetLoggerDefinitionResponse
 *
 * @brief  Handles Greengrass GetLoggerDefinition responses.
 *
 * @see    GreengrassClient::getLoggerDefinition
 */

/**
 * @brief  Constructs a new GetLoggerDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoggerDefinitionResponse::GetLoggerDefinitionResponse(
        const GetLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionRequest(request));
    setReply(reply);
}

const GetLoggerDefinitionRequest * GetLoggerDefinitionResponse::request() const
{
    Q_D(const GetLoggerDefinitionResponse);
    return static_cast<const GetLoggerDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetLoggerDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoggerDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetLoggerDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggerDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoggerDefinitionResponse instance.
 */
GetLoggerDefinitionResponsePrivate::GetLoggerDefinitionResponsePrivate(
    GetLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetLoggerDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoggerDefinitionResponsePrivate::GetLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
