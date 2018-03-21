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

#include "updatealiasresponse.h"
#include "updatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  UpdateAliasResponse
 *
 * @brief  Handles Lambda UpdateAlias responses.
 *
 * @see    LambdaClient::updateAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateAliasRequest(request));
    setReply(reply);
}

const UpdateAliasRequest * UpdateAliasResponse::request() const
{
    Q_D(const UpdateAliasResponse);
    return static_cast<const UpdateAliasRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda UpdateAlias response.
 *
 * @param  response  Response to parse.
 */
void UpdateAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAliasResponsePrivate
 *
 * @brief  Private implementation for UpdateAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAliasResponse instance.
 */
UpdateAliasResponsePrivate::UpdateAliasResponsePrivate(
    UpdateAliasQueueResponse * const q) : UpdateAliasPrivate(q)
{

}

/**
 * @brief  Parse an Lambda UpdateAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAliasResponsePrivate::UpdateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAliasResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
