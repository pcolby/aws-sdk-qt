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

#include "putintentresponse.h"
#include "putintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  PutIntentResponse
 *
 * @brief  Handles LexModelBuildingService PutIntent responses.
 *
 * @see    LexModelBuildingServiceClient::putIntent
 */

/**
 * @brief  Constructs a new PutIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutIntentResponse::PutIntentResponse(
        const PutIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutIntentResponsePrivate(this), parent)
{
    setRequest(new PutIntentRequest(request));
    setReply(reply);
}

const PutIntentRequest * PutIntentResponse::request() const
{
    Q_D(const PutIntentResponse);
    return static_cast<const PutIntentRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService PutIntent response.
 *
 * @param  response  Response to parse.
 */
void PutIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutIntentResponsePrivate
 *
 * @brief  Private implementation for PutIntentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIntentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutIntentResponse instance.
 */
PutIntentResponsePrivate::PutIntentResponsePrivate(
    PutIntentQueueResponse * const q) : PutIntentPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService PutIntentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutIntentResponsePrivate::PutIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
