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

#include "updateconnectionresponse.h"
#include "updateconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  UpdateConnectionResponse
 *
 * @brief  Handles Glue UpdateConnection responses.
 *
 * @see    GlueClient::updateConnection
 */

/**
 * @brief  Constructs a new UpdateConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConnectionResponse::UpdateConnectionResponse(
        const UpdateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateConnectionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectionRequest(request));
    setReply(reply);
}

const UpdateConnectionRequest * UpdateConnectionResponse::request() const
{
    Q_D(const UpdateConnectionResponse);
    return static_cast<const UpdateConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateConnection response.
 *
 * @param  response  Response to parse.
 */
void UpdateConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConnectionResponsePrivate
 *
 * @brief  Private implementation for UpdateConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConnectionResponse instance.
 */
UpdateConnectionResponsePrivate::UpdateConnectionResponsePrivate(
    UpdateConnectionQueueResponse * const q) : UpdateConnectionPrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConnectionResponsePrivate::UpdateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
