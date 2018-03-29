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

#include "updatevpclinkresponse.h"
#include "updatevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateVpcLinkResponse
 *
 * @brief  Handles APIGateway UpdateVpcLink responses.
 *
 * @see    APIGatewayClient::updateVpcLink
 */

/**
 * @brief  Constructs a new UpdateVpcLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateVpcLinkResponse::UpdateVpcLinkResponse(
        const UpdateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateVpcLinkResponsePrivate(this), parent)
{
    setRequest(new UpdateVpcLinkRequest(request));
    setReply(reply);
}

const UpdateVpcLinkRequest * UpdateVpcLinkResponse::request() const
{
    Q_D(const UpdateVpcLinkResponse);
    return static_cast<const UpdateVpcLinkRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateVpcLink response.
 *
 * @param  response  Response to parse.
 */
void UpdateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateVpcLinkResponsePrivate
 *
 * @brief  Private implementation for UpdateVpcLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVpcLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateVpcLinkResponse instance.
 */
UpdateVpcLinkResponsePrivate::UpdateVpcLinkResponsePrivate(
    UpdateVpcLinkQueueResponse * const q) : UpdateVpcLinkPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateVpcLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateVpcLinkResponsePrivate::UpdateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVpcLinkResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
