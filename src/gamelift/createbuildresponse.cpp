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

#include "createbuildresponse.h"
#include "createbuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreateBuildResponse
 *
 * @brief  Handles GameLift CreateBuild responses.
 *
 * @see    GameLiftClient::createBuild
 */

/**
 * @brief  Constructs a new CreateBuildResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBuildResponse::CreateBuildResponse(
        const CreateBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateBuildResponsePrivate(this), parent)
{
    setRequest(new CreateBuildRequest(request));
    setReply(reply);
}

const CreateBuildRequest * CreateBuildResponse::request() const
{
    Q_D(const CreateBuildResponse);
    return static_cast<const CreateBuildRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateBuild response.
 *
 * @param  response  Response to parse.
 */
void CreateBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBuildResponsePrivate
 *
 * @brief  Private implementation for CreateBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBuildResponse instance.
 */
CreateBuildResponsePrivate::CreateBuildResponsePrivate(
    CreateBuildQueueResponse * const q) : CreateBuildPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBuildResponsePrivate::CreateBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBuildResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
