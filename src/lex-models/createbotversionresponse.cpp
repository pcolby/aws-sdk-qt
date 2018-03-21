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

#include "createbotversionresponse.h"
#include "createbotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  CreateBotVersionResponse
 *
 * @brief  Handles LexModelBuildingService CreateBotVersion responses.
 *
 * @see    LexModelBuildingServiceClient::createBotVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBotVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateBotVersionResponsePrivate(this), parent)
{
    setRequest(new CreateBotVersionRequest(request));
    setReply(reply);
}

const CreateBotVersionRequest * CreateBotVersionResponse::request() const
{
    Q_D(const CreateBotVersionResponse);
    return static_cast<const CreateBotVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService CreateBotVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateBotVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBotVersionResponsePrivate
 *
 * @brief  Private implementation for CreateBotVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBotVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBotVersionResponse instance.
 */
CreateBotVersionResponsePrivate::CreateBotVersionResponsePrivate(
    CreateBotVersionQueueResponse * const q) : CreateBotVersionPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService CreateBotVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBotVersionResponsePrivate::CreateBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotVersionResponse"));
    /// @todo
}
