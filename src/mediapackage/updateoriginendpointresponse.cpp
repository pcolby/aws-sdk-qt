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

#include "updateoriginendpointresponse.h"
#include "updateoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  UpdateOriginEndpointResponse
 *
 * @brief  Handles MediaPackage UpdateOriginEndpoint responses.
 *
 * @see    MediaPackageClient::updateOriginEndpoint
 */

/**
 * @brief  Constructs a new UpdateOriginEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateOriginEndpointResponse::UpdateOriginEndpointResponse(
        const UpdateOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new UpdateOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateOriginEndpointRequest(request));
    setReply(reply);
}

const UpdateOriginEndpointRequest * UpdateOriginEndpointResponse::request() const
{
    Q_D(const UpdateOriginEndpointResponse);
    return static_cast<const UpdateOriginEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage UpdateOriginEndpoint response.
 *
 * @param  response  Response to parse.
 */
void UpdateOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateOriginEndpointResponsePrivate
 *
 * @brief  Private implementation for UpdateOriginEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOriginEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateOriginEndpointResponse instance.
 */
UpdateOriginEndpointResponsePrivate::UpdateOriginEndpointResponsePrivate(
    UpdateOriginEndpointQueueResponse * const q) : UpdateOriginEndpointPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage UpdateOriginEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateOriginEndpointResponsePrivate::UpdateOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOriginEndpointResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
