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

#include "putbotresponse.h"
#include "putbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  PutBotResponse
 *
 * @brief  Handles LexModelBuildingService PutBot responses.
 *
 * @see    LexModelBuildingServiceClient::putBot
 */

/**
 * @brief  Constructs a new PutBotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBotResponse::PutBotResponse(
        const PutBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutBotResponsePrivate(this), parent)
{
    setRequest(new PutBotRequest(request));
    setReply(reply);
}

const PutBotRequest * PutBotResponse::request() const
{
    Q_D(const PutBotResponse);
    return static_cast<const PutBotRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService PutBot response.
 *
 * @param  response  Response to parse.
 */
void PutBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBotResponsePrivate
 *
 * @brief  Private implementation for PutBotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBotResponse instance.
 */
PutBotResponsePrivate::PutBotResponsePrivate(
    PutBotQueueResponse * const q) : PutBotPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService PutBotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBotResponsePrivate::PutBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
