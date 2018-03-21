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

#include "deletethingshadowresponse.h"
#include "deletethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoTDataPlane {

/**
 * @class  DeleteThingShadowResponse
 *
 * @brief  Handles IoTDataPlane DeleteThingShadow responses.
 *
 * @see    IoTDataPlaneClient::deleteThingShadow
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingShadowResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new DeleteThingShadowResponsePrivate(this), parent)
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
    Q_D(Response);
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
    DeleteThingShadowQueueResponse * const q) : DeleteThingShadowPrivate(q)
{

}

/**
 * @brief  Parse an IoTDataPlane DeleteThingShadowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThingShadowResponsePrivate::DeleteThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingShadowResponse"));
    /// @todo
}
