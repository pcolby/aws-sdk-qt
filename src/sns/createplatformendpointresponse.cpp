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

#include "createplatformendpointresponse.h"
#include "createplatformendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  CreatePlatformEndpointResponse
 *
 * @brief  Handles SNS CreatePlatformEndpoint responses.
 *
 * @see    SNSClient::createPlatformEndpoint
 */

/**
 * @brief  Constructs a new CreatePlatformEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlatformEndpointResponse::CreatePlatformEndpointResponse(
        const CreatePlatformEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new CreatePlatformEndpointResponsePrivate(this), parent)
{
    setRequest(new CreatePlatformEndpointRequest(request));
    setReply(reply);
}

const CreatePlatformEndpointRequest * CreatePlatformEndpointResponse::request() const
{
    Q_D(const CreatePlatformEndpointResponse);
    return static_cast<const CreatePlatformEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a SNS CreatePlatformEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreatePlatformEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlatformEndpointResponsePrivate
 *
 * @brief  Private implementation for CreatePlatformEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlatformEndpointResponse instance.
 */
CreatePlatformEndpointResponsePrivate::CreatePlatformEndpointResponsePrivate(
    CreatePlatformEndpointResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS CreatePlatformEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlatformEndpointResponsePrivate::CreatePlatformEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlatformEndpointResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
