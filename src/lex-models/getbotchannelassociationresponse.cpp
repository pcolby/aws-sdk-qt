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

#include "getbotchannelassociationresponse.h"
#include "getbotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBotChannelAssociationResponse
 *
 * @brief  Handles LexModelBuildingService GetBotChannelAssociation responses.
 *
 * @see    LexModelBuildingServiceClient::getBotChannelAssociation
 */

/**
 * @brief  Constructs a new GetBotChannelAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBotChannelAssociationResponse::GetBotChannelAssociationResponse(
        const GetBotChannelAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetBotChannelAssociationResponse(new GetBotChannelAssociationResponsePrivate(this), parent)
{
    setRequest(new GetBotChannelAssociationRequest(request));
    setReply(reply);
}

const GetBotChannelAssociationRequest * GetBotChannelAssociationResponse::request() const
{
    Q_D(const GetBotChannelAssociationResponse);
    return static_cast<const GetBotChannelAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBotChannelAssociation response.
 *
 * @param  response  Response to parse.
 */
void GetBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotChannelAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBotChannelAssociationResponsePrivate
 *
 * @brief  Private implementation for GetBotChannelAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotChannelAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBotChannelAssociationResponse instance.
 */
GetBotChannelAssociationResponsePrivate::GetBotChannelAssociationResponsePrivate(
    GetBotChannelAssociationResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBotChannelAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBotChannelAssociationResponsePrivate::parseGetBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotChannelAssociationResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
