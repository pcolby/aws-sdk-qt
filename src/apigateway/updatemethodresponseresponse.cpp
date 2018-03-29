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

#include "updatemethodresponseresponse.h"
#include "updatemethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateMethodResponseResponse
 *
 * @brief  Handles APIGateway UpdateMethodResponse responses.
 *
 * @see    APIGatewayClient::updateMethodResponse
 */

/**
 * @brief  Constructs a new UpdateMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMethodResponseResponse::UpdateMethodResponseResponse(
        const UpdateMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateMethodResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateMethodResponseRequest(request));
    setReply(reply);
}

const UpdateMethodResponseRequest * UpdateMethodResponseResponse::request() const
{
    Q_D(const UpdateMethodResponseResponse);
    return static_cast<const UpdateMethodResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateMethodResponse response.
 *
 * @param  response  Response to parse.
 */
void UpdateMethodResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMethodResponseResponsePrivate
 *
 * @brief  Private implementation for UpdateMethodResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMethodResponseResponse instance.
 */
UpdateMethodResponseResponsePrivate::UpdateMethodResponseResponsePrivate(
    UpdateMethodResponseQueueResponse * const q) : UpdateMethodResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateMethodResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMethodResponseResponsePrivate::UpdateMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMethodResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
