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

#include "updateserverengineattributesresponse.h"
#include "updateserverengineattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  UpdateServerEngineAttributesResponse
 *
 * @brief  Handles OpsWorksCM UpdateServerEngineAttributes responses.
 *
 * @see    OpsWorksCMClient::updateServerEngineAttributes
 */

/**
 * @brief  Constructs a new UpdateServerEngineAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServerEngineAttributesResponse::UpdateServerEngineAttributesResponse(
        const UpdateServerEngineAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateServerEngineAttributesResponse(new UpdateServerEngineAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateServerEngineAttributesRequest(request));
    setReply(reply);
}

const UpdateServerEngineAttributesRequest * UpdateServerEngineAttributesResponse::request() const
{
    Q_D(const UpdateServerEngineAttributesResponse);
    return static_cast<const UpdateServerEngineAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM UpdateServerEngineAttributes response.
 *
 * @param  response  Response to parse.
 */
void UpdateServerEngineAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateServerEngineAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServerEngineAttributesResponsePrivate
 *
 * @brief  Private implementation for UpdateServerEngineAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerEngineAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServerEngineAttributesResponse instance.
 */
UpdateServerEngineAttributesResponsePrivate::UpdateServerEngineAttributesResponsePrivate(
    UpdateServerEngineAttributesResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM UpdateServerEngineAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServerEngineAttributesResponsePrivate::parseUpdateServerEngineAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerEngineAttributesResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
