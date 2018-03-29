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

#include "deletethingshadowresponse.h"
#include "deletethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/**
 * @class  DeleteThingShadowResponse
 *
 * @brief  Handles IoTDataPlane DeleteThingShadow responses.
 *
 * @see    IoTDataPlaneClient::deleteThingShadow
 */

/**
 * @brief  Constructs a new DeleteThingShadowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingShadowResponse::DeleteThingShadowResponse(
        const DeleteThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteThingShadowResponse(new DeleteThingShadowResponsePrivate(this), parent)
{
    setRequest(new DeleteThingShadowRequest(request));
    setReply(reply);
}

const DeleteThingShadowRequest * DeleteThingShadowResponse::request() const
{
    Q_D(const DeleteThingShadowResponse);
    return static_cast<const DeleteThingShadowRequest *>(d->request);
}

/**
 * @brief  Parse a IoTDataPlane DeleteThingShadow response.
 *
 * @param  response  Response to parse.
 */
void DeleteThingShadowResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteThingShadowResponsePrivate
 *
 * @brief  Private implementation for DeleteThingShadowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingShadowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteThingShadowResponse instance.
 */
DeleteThingShadowResponsePrivate::DeleteThingShadowResponsePrivate(
    DeleteThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoTDataPlane DeleteThingShadowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThingShadowResponsePrivate::parseDeleteThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingShadowResponse"));
    /// @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
