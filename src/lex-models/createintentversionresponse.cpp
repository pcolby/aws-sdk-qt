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

#include "createintentversionresponse.h"
#include "createintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  CreateIntentVersionResponse
 *
 * @brief  Handles LexModelBuildingService CreateIntentVersion responses.
 *
 * @see    LexModelBuildingServiceClient::createIntentVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIntentVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateIntentVersionResponsePrivate(this), parent)
{
    setRequest(new CreateIntentVersionRequest(request));
    setReply(reply);
}

const CreateIntentVersionRequest * CreateIntentVersionResponse::request() const
{
    Q_D(const CreateIntentVersionResponse);
    return static_cast<const CreateIntentVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService CreateIntentVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateIntentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateIntentVersionResponsePrivate
 *
 * @brief  Private implementation for CreateIntentVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIntentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIntentVersionResponse instance.
 */
CreateIntentVersionResponsePrivate::CreateIntentVersionResponsePrivate(
    CreateIntentVersionQueueResponse * const q) : CreateIntentVersionPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService CreateIntentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIntentVersionResponsePrivate::CreateIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntentVersionResponse"));
    /// @todo
}
