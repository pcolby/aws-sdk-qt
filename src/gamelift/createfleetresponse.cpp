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

#include "createfleetresponse.h"
#include "createfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateFleetResponse
 *
 * @brief  Handles GameLift CreateFleet responses.
 *
 * @see    GameLiftClient::createFleet
 */

/**
 * @brief  Constructs a new CreateFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFleetResponse::CreateFleetResponse(
        const CreateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateFleetResponsePrivate(this), parent)
{
    setRequest(new CreateFleetRequest(request));
    setReply(reply);
}

const CreateFleetRequest * CreateFleetResponse::request() const
{
    Q_D(const CreateFleetResponse);
    return static_cast<const CreateFleetRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateFleet response.
 *
 * @param  response  Response to parse.
 */
void CreateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFleetResponsePrivate
 *
 * @brief  Private implementation for CreateFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFleetResponse instance.
 */
CreateFleetResponsePrivate::CreateFleetResponsePrivate(
    CreateFleetQueueResponse * const q) : CreateFleetPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFleetResponsePrivate::CreateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFleetResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
