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

#include "updatefleetresponse.h"
#include "updatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  UpdateFleetResponse
 *
 * @brief  Handles AppStream UpdateFleet responses.
 *
 * @see    AppStreamClient::updateFleet
 */

/**
 * @brief  Constructs a new UpdateFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFleetResponse::UpdateFleetResponse(
        const UpdateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new UpdateFleetResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetRequest(request));
    setReply(reply);
}

const UpdateFleetRequest * UpdateFleetResponse::request() const
{
    Q_D(const UpdateFleetResponse);
    return static_cast<const UpdateFleetRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream UpdateFleet response.
 *
 * @param  response  Response to parse.
 */
void UpdateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFleetResponsePrivate
 *
 * @brief  Private implementation for UpdateFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFleetResponse instance.
 */
UpdateFleetResponsePrivate::UpdateFleetResponsePrivate(
    UpdateFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppStream UpdateFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFleetResponsePrivate::parseUpdateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
