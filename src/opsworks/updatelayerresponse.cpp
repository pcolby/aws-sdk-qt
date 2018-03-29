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

#include "updatelayerresponse.h"
#include "updatelayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateLayerResponse
 *
 * @brief  Handles OpsWorks UpdateLayer responses.
 *
 * @see    OpsWorksClient::updateLayer
 */

/**
 * @brief  Constructs a new UpdateLayerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateLayerResponse::UpdateLayerResponse(
        const UpdateLayerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateLayerResponsePrivate(this), parent)
{
    setRequest(new UpdateLayerRequest(request));
    setReply(reply);
}

const UpdateLayerRequest * UpdateLayerResponse::request() const
{
    Q_D(const UpdateLayerResponse);
    return static_cast<const UpdateLayerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateLayer response.
 *
 * @param  response  Response to parse.
 */
void UpdateLayerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateLayerResponsePrivate
 *
 * @brief  Private implementation for UpdateLayerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLayerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateLayerResponse instance.
 */
UpdateLayerResponsePrivate::UpdateLayerResponsePrivate(
    UpdateLayerQueueResponse * const q) : UpdateLayerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateLayerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateLayerResponsePrivate::UpdateLayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLayerResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
