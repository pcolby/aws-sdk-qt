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

#include "updatethingshadowresponse.h"
#include "updatethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/**
 * @class  UpdateThingShadowResponse
 *
 * @brief  Handles IoTDataPlane UpdateThingShadow responses.
 *
 * @see    IoTDataPlaneClient::updateThingShadow
 */

/**
 * @brief  Constructs a new UpdateThingShadowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThingShadowResponse::UpdateThingShadowResponse(
        const UpdateThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateThingShadowResponse(new UpdateThingShadowResponsePrivate(this), parent)
{
    setRequest(new UpdateThingShadowRequest(request));
    setReply(reply);
}

const UpdateThingShadowRequest * UpdateThingShadowResponse::request() const
{
    Q_D(const UpdateThingShadowResponse);
    return static_cast<const UpdateThingShadowRequest *>(d->request);
}

/**
 * @brief  Parse a IoTDataPlane UpdateThingShadow response.
 *
 * @param  response  Response to parse.
 */
void UpdateThingShadowResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateThingShadowResponsePrivate
 *
 * @brief  Private implementation for UpdateThingShadowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingShadowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateThingShadowResponse instance.
 */
UpdateThingShadowResponsePrivate::UpdateThingShadowResponsePrivate(
    UpdateThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoTDataPlane UpdateThingShadowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateThingShadowResponsePrivate::parseUpdateThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingShadowResponse"));
    /// @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
