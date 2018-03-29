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

#include "getbotaliasresponse.h"
#include "getbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBotAliasResponse
 *
 * @brief  Handles LexModelBuildingService GetBotAlias responses.
 *
 * @see    LexModelBuildingServiceClient::getBotAlias
 */

/**
 * @brief  Constructs a new GetBotAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBotAliasResponse::GetBotAliasResponse(
        const GetBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotAliasResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasRequest(request));
    setReply(reply);
}

const GetBotAliasRequest * GetBotAliasResponse::request() const
{
    Q_D(const GetBotAliasResponse);
    return static_cast<const GetBotAliasRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBotAlias response.
 *
 * @param  response  Response to parse.
 */
void GetBotAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBotAliasResponsePrivate
 *
 * @brief  Private implementation for GetBotAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBotAliasResponse instance.
 */
GetBotAliasResponsePrivate::GetBotAliasResponsePrivate(
    GetBotAliasResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBotAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBotAliasResponsePrivate::parseGetBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
