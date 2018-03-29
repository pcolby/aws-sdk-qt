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

#include "updatelagresponse.h"
#include "updatelagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  UpdateLagResponse
 *
 * @brief  Handles DirectConnect UpdateLag responses.
 *
 * @see    DirectConnectClient::updateLag
 */

/**
 * @brief  Constructs a new UpdateLagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateLagResponse::UpdateLagResponse(
        const UpdateLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new UpdateLagResponsePrivate(this), parent)
{
    setRequest(new UpdateLagRequest(request));
    setReply(reply);
}

const UpdateLagRequest * UpdateLagResponse::request() const
{
    Q_D(const UpdateLagResponse);
    return static_cast<const UpdateLagRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect UpdateLag response.
 *
 * @param  response  Response to parse.
 */
void UpdateLagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateLagResponsePrivate
 *
 * @brief  Private implementation for UpdateLagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateLagResponse instance.
 */
UpdateLagResponsePrivate::UpdateLagResponsePrivate(
    UpdateLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect UpdateLagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateLagResponsePrivate::UpdateLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
