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

#include "createendpointresponse.h"
#include "createendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreateEndpointResponse
 *
 * @brief  Handles SageMaker CreateEndpoint responses.
 *
 * @see    SageMakerClient::createEndpoint
 */

/**
 * @brief  Constructs a new CreateEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEndpointResponse::CreateEndpointResponse(
        const CreateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointRequest(request));
    setReply(reply);
}

const CreateEndpointRequest * CreateEndpointResponse::request() const
{
    Q_D(const CreateEndpointResponse);
    return static_cast<const CreateEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreateEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEndpointResponse instance.
 */
CreateEndpointResponsePrivate::CreateEndpointResponsePrivate(
    CreateEndpointResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreateEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEndpointResponsePrivate::parseCreateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
