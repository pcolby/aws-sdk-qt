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

#include "getloggerdefinitionversionresponse.h"
#include "getloggerdefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetLoggerDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetLoggerDefinitionVersion responses.
 *
 * @see    GreengrassClient::getLoggerDefinitionVersion
 */

/**
 * @brief  Constructs a new GetLoggerDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoggerDefinitionVersionResponse::GetLoggerDefinitionVersionResponse(
        const GetLoggerDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionVersionRequest(request));
    setReply(reply);
}

const GetLoggerDefinitionVersionRequest * GetLoggerDefinitionVersionResponse::request() const
{
    Q_D(const GetLoggerDefinitionVersionResponse);
    return static_cast<const GetLoggerDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetLoggerDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetLoggerDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoggerDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetLoggerDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggerDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoggerDefinitionVersionResponse instance.
 */
GetLoggerDefinitionVersionResponsePrivate::GetLoggerDefinitionVersionResponsePrivate(
    GetLoggerDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetLoggerDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoggerDefinitionVersionResponsePrivate::GetLoggerDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
