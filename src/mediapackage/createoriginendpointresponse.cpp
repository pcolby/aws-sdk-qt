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

#include "createoriginendpointresponse.h"
#include "createoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  CreateOriginEndpointResponse
 *
 * @brief  Handles MediaPackage CreateOriginEndpoint responses.
 *
 * @see    MediaPackageClient::createOriginEndpoint
 */

/**
 * @brief  Constructs a new CreateOriginEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOriginEndpointResponse::CreateOriginEndpointResponse(
        const CreateOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateOriginEndpointResponse(new CreateOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateOriginEndpointRequest(request));
    setReply(reply);
}

const CreateOriginEndpointRequest * CreateOriginEndpointResponse::request() const
{
    Q_D(const CreateOriginEndpointResponse);
    return static_cast<const CreateOriginEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage CreateOriginEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOriginEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateOriginEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOriginEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOriginEndpointResponse instance.
 */
CreateOriginEndpointResponsePrivate::CreateOriginEndpointResponsePrivate(
    CreateOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage CreateOriginEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOriginEndpointResponsePrivate::parseCreateOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOriginEndpointResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
