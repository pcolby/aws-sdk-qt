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

#include "getbotaliasesresponse.h"
#include "getbotaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBotAliasesResponse
 *
 * @brief  Handles LexModelBuildingService GetBotAliases responses.
 *
 * @see    LexModelBuildingServiceClient::getBotAliases
 */

/**
 * @brief  Constructs a new GetBotAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBotAliasesResponse::GetBotAliasesResponse(
        const GetBotAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotAliasesResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasesRequest(request));
    setReply(reply);
}

const GetBotAliasesRequest * GetBotAliasesResponse::request() const
{
    Q_D(const GetBotAliasesResponse);
    return static_cast<const GetBotAliasesRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBotAliases response.
 *
 * @param  response  Response to parse.
 */
void GetBotAliasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBotAliasesResponsePrivate
 *
 * @brief  Private implementation for GetBotAliasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBotAliasesResponse instance.
 */
GetBotAliasesResponsePrivate::GetBotAliasesResponsePrivate(
    GetBotAliasesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBotAliasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBotAliasesResponsePrivate::GetBotAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasesResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
