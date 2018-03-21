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

#include "deleteintentresponse.h"
#include "deleteintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteIntentResponse
 *
 * @brief  Handles LexModelBuildingService DeleteIntent responses.
 *
 * @see    LexModelBuildingServiceClient::deleteIntent
 */

/**
 * @brief  Constructs a new DeleteIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntentResponse::DeleteIntentResponse(
        const DeleteIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteIntentResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentRequest(request));
    setReply(reply);
}

const DeleteIntentRequest * DeleteIntentResponse::request() const
{
    Q_D(const DeleteIntentResponse);
    return static_cast<const DeleteIntentRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteIntent response.
 *
 * @param  response  Response to parse.
 */
void DeleteIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIntentResponsePrivate
 *
 * @brief  Private implementation for DeleteIntentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIntentResponse instance.
 */
DeleteIntentResponsePrivate::DeleteIntentResponsePrivate(
    DeleteIntentQueueResponse * const q) : DeleteIntentPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteIntentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIntentResponsePrivate::DeleteIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
