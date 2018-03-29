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

#include "getcoredefinitionversionresponse.h"
#include "getcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetCoreDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetCoreDefinitionVersion responses.
 *
 * @see    GreengrassClient::getCoreDefinitionVersion
 */

/**
 * @brief  Constructs a new GetCoreDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCoreDefinitionVersionResponse::GetCoreDefinitionVersionResponse(
        const GetCoreDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionVersionRequest(request));
    setReply(reply);
}

const GetCoreDefinitionVersionRequest * GetCoreDefinitionVersionResponse::request() const
{
    Q_D(const GetCoreDefinitionVersionResponse);
    return static_cast<const GetCoreDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetCoreDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCoreDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCoreDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetCoreDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCoreDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCoreDefinitionVersionResponse instance.
 */
GetCoreDefinitionVersionResponsePrivate::GetCoreDefinitionVersionResponsePrivate(
    GetCoreDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetCoreDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCoreDefinitionVersionResponsePrivate::parseGetCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
