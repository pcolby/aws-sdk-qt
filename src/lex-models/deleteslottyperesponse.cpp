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

#include "deleteslottyperesponse.h"
#include "deleteslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  DeleteSlotTypeResponse
 *
 * @brief  Handles LexModelBuildingService DeleteSlotType responses.
 *
 * @see    LexModelBuildingServiceClient::deleteSlotType
 */

/**
 * @brief  Constructs a new DeleteSlotTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSlotTypeResponse::DeleteSlotTypeResponse(
        const DeleteSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteSlotTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeRequest(request));
    setReply(reply);
}

const DeleteSlotTypeRequest * DeleteSlotTypeResponse::request() const
{
    Q_D(const DeleteSlotTypeResponse);
    return static_cast<const DeleteSlotTypeRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteSlotType response.
 *
 * @param  response  Response to parse.
 */
void DeleteSlotTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSlotTypeResponsePrivate
 *
 * @brief  Private implementation for DeleteSlotTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSlotTypeResponse instance.
 */
DeleteSlotTypeResponsePrivate::DeleteSlotTypeResponsePrivate(
    DeleteSlotTypeResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteSlotTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSlotTypeResponsePrivate::DeleteSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
