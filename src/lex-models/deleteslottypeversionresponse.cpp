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

#include "deleteslottypeversionresponse.h"
#include "deleteslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteSlotTypeVersionResponse
 *
 * @brief  Handles LexModelBuildingService DeleteSlotTypeVersion responses.
 *
 * @see    LexModelBuildingServiceClient::deleteSlotTypeVersion
 */

/**
 * @brief  Constructs a new DeleteSlotTypeVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSlotTypeVersionResponse::DeleteSlotTypeVersionResponse(
        const DeleteSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeVersionRequest(request));
    setReply(reply);
}

const DeleteSlotTypeVersionRequest * DeleteSlotTypeVersionResponse::request() const
{
    Q_D(const DeleteSlotTypeVersionResponse);
    return static_cast<const DeleteSlotTypeVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteSlotTypeVersion response.
 *
 * @param  response  Response to parse.
 */
void DeleteSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSlotTypeVersionResponsePrivate
 *
 * @brief  Private implementation for DeleteSlotTypeVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSlotTypeVersionResponse instance.
 */
DeleteSlotTypeVersionResponsePrivate::DeleteSlotTypeVersionResponsePrivate(
    DeleteSlotTypeVersionQueueResponse * const q) : DeleteSlotTypeVersionPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteSlotTypeVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSlotTypeVersionResponsePrivate::DeleteSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
