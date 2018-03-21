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

#include "updatebuildresponse.h"
#include "updatebuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateBuildResponse
 *
 * @brief  Handles GameLift UpdateBuild responses.
 *
 * @see    GameLiftClient::updateBuild
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBuildResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateBuildResponsePrivate(this), parent)
{
    setRequest(new UpdateBuildRequest(request));
    setReply(reply);
}

const UpdateBuildRequest * UpdateBuildResponse::request() const
{
    Q_D(const UpdateBuildResponse);
    return static_cast<const UpdateBuildRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateBuild response.
 *
 * @param  response  Response to parse.
 */
void UpdateBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBuildResponsePrivate
 *
 * @brief  Private implementation for UpdateBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBuildResponse instance.
 */
UpdateBuildResponsePrivate::UpdateBuildResponsePrivate(
    UpdateBuildQueueResponse * const q) : UpdateBuildPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBuildResponsePrivate::UpdateBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBuildResponse"));
    /// @todo
}
