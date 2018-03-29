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

#include "createslottypeversionresponse.h"
#include "createslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  CreateSlotTypeVersionResponse
 *
 * @brief  Handles LexModelBuildingService CreateSlotTypeVersion responses.
 *
 * @see    LexModelBuildingServiceClient::createSlotTypeVersion
 */

/**
 * @brief  Constructs a new CreateSlotTypeVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSlotTypeVersionResponse::CreateSlotTypeVersionResponse(
        const CreateSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSlotTypeVersionRequest(request));
    setReply(reply);
}

const CreateSlotTypeVersionRequest * CreateSlotTypeVersionResponse::request() const
{
    Q_D(const CreateSlotTypeVersionResponse);
    return static_cast<const CreateSlotTypeVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService CreateSlotTypeVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSlotTypeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSlotTypeVersionResponsePrivate
 *
 * @brief  Private implementation for CreateSlotTypeVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSlotTypeVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSlotTypeVersionResponse instance.
 */
CreateSlotTypeVersionResponsePrivate::CreateSlotTypeVersionResponsePrivate(
    CreateSlotTypeVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService CreateSlotTypeVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSlotTypeVersionResponsePrivate::parseCreateSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSlotTypeVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
