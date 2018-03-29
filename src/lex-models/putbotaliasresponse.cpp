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

#include "putbotaliasresponse.h"
#include "putbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  PutBotAliasResponse
 *
 * @brief  Handles LexModelBuildingService PutBotAlias responses.
 *
 * @see    LexModelBuildingServiceClient::putBotAlias
 */

/**
 * @brief  Constructs a new PutBotAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBotAliasResponse::PutBotAliasResponse(
        const PutBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutBotAliasResponsePrivate(this), parent)
{
    setRequest(new PutBotAliasRequest(request));
    setReply(reply);
}

const PutBotAliasRequest * PutBotAliasResponse::request() const
{
    Q_D(const PutBotAliasResponse);
    return static_cast<const PutBotAliasRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService PutBotAlias response.
 *
 * @param  response  Response to parse.
 */
void PutBotAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBotAliasResponsePrivate
 *
 * @brief  Private implementation for PutBotAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBotAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBotAliasResponse instance.
 */
PutBotAliasResponsePrivate::PutBotAliasResponsePrivate(
    PutBotAliasResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService PutBotAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBotAliasResponsePrivate::PutBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotAliasResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
