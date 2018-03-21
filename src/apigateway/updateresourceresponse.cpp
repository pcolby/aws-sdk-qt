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

#include "updateresourceresponse.h"
#include "updateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateResourceResponse
 *
 * @brief  Handles APIGateway UpdateResource responses.
 *
 * @see    APIGatewayClient::updateResource
 */

/**
 * @brief  Constructs a new UpdateResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResourceResponse::UpdateResourceResponse(
        const UpdateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceRequest(request));
    setReply(reply);
}

const UpdateResourceRequest * UpdateResourceResponse::request() const
{
    Q_D(const UpdateResourceResponse);
    return static_cast<const UpdateResourceRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateResource response.
 *
 * @param  response  Response to parse.
 */
void UpdateResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateResourceResponsePrivate
 *
 * @brief  Private implementation for UpdateResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateResourceResponse instance.
 */
UpdateResourceResponsePrivate::UpdateResourceResponsePrivate(
    UpdateResourceQueueResponse * const q) : UpdateResourcePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateResourceResponsePrivate::UpdateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
