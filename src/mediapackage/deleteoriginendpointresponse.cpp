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

#include "deleteoriginendpointresponse.h"
#include "deleteoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  DeleteOriginEndpointResponse
 *
 * @brief  Handles MediaPackage DeleteOriginEndpoint responses.
 *
 * @see    MediaPackageClient::deleteOriginEndpoint
 */

/**
 * @brief  Constructs a new DeleteOriginEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOriginEndpointResponse::DeleteOriginEndpointResponse(
        const DeleteOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteOriginEndpointResponse(new DeleteOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteOriginEndpointRequest(request));
    setReply(reply);
}

const DeleteOriginEndpointRequest * DeleteOriginEndpointResponse::request() const
{
    Q_D(const DeleteOriginEndpointResponse);
    return static_cast<const DeleteOriginEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage DeleteOriginEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOriginEndpointResponsePrivate
 *
 * @brief  Private implementation for DeleteOriginEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOriginEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOriginEndpointResponse instance.
 */
DeleteOriginEndpointResponsePrivate::DeleteOriginEndpointResponsePrivate(
    DeleteOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage DeleteOriginEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOriginEndpointResponsePrivate::parseDeleteOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOriginEndpointResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
