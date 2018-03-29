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

#include "createrealtimeendpointresponse.h"
#include "createrealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  CreateRealtimeEndpointResponse
 *
 * @brief  Handles MachineLearning CreateRealtimeEndpoint responses.
 *
 * @see    MachineLearningClient::createRealtimeEndpoint
 */

/**
 * @brief  Constructs a new CreateRealtimeEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRealtimeEndpointResponse::CreateRealtimeEndpointResponse(
        const CreateRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateRealtimeEndpointRequest(request));
    setReply(reply);
}

const CreateRealtimeEndpointRequest * CreateRealtimeEndpointResponse::request() const
{
    Q_D(const CreateRealtimeEndpointResponse);
    return static_cast<const CreateRealtimeEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateRealtimeEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRealtimeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRealtimeEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateRealtimeEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRealtimeEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRealtimeEndpointResponse instance.
 */
CreateRealtimeEndpointResponsePrivate::CreateRealtimeEndpointResponsePrivate(
    CreateRealtimeEndpointResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateRealtimeEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRealtimeEndpointResponsePrivate::parseCreateRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRealtimeEndpointResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
