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

#include "updateuserdefinedfunctionresponse.h"
#include "updateuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  UpdateUserDefinedFunctionResponse
 *
 * @brief  Handles Glue UpdateUserDefinedFunction responses.
 *
 * @see    GlueClient::updateUserDefinedFunction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserDefinedFunctionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateUserDefinedFunctionRequest(request));
    setReply(reply);
}

const UpdateUserDefinedFunctionRequest * UpdateUserDefinedFunctionResponse::request() const
{
    Q_D(const UpdateUserDefinedFunctionResponse);
    return static_cast<const UpdateUserDefinedFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateUserDefinedFunction response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserDefinedFunctionResponsePrivate
 *
 * @brief  Private implementation for UpdateUserDefinedFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserDefinedFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserDefinedFunctionResponse instance.
 */
UpdateUserDefinedFunctionResponsePrivate::UpdateUserDefinedFunctionResponsePrivate(
    UpdateUserDefinedFunctionQueueResponse * const q) : UpdateUserDefinedFunctionPrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateUserDefinedFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserDefinedFunctionResponsePrivate::UpdateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserDefinedFunctionResponse"));
    /// @todo
}
