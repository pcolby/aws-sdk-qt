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

#include "deleterealtimeendpointresponse.h"
#include "deleterealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  DeleteRealtimeEndpointResponse
 *
 * @brief  Handles MachineLearning DeleteRealtimeEndpoint responses.
 *
 * @see    MachineLearningClient::deleteRealtimeEndpoint
 */

/**
 * @brief  Constructs a new DeleteRealtimeEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRealtimeEndpointResponse::DeleteRealtimeEndpointResponse(
        const DeleteRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteRealtimeEndpointRequest(request));
    setReply(reply);
}

const DeleteRealtimeEndpointRequest * DeleteRealtimeEndpointResponse::request() const
{
    Q_D(const DeleteRealtimeEndpointResponse);
    return static_cast<const DeleteRealtimeEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DeleteRealtimeEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRealtimeEndpointResponsePrivate
 *
 * @brief  Private implementation for DeleteRealtimeEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRealtimeEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRealtimeEndpointResponse instance.
 */
DeleteRealtimeEndpointResponsePrivate::DeleteRealtimeEndpointResponsePrivate(
    DeleteRealtimeEndpointQueueResponse * const q) : DeleteRealtimeEndpointPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DeleteRealtimeEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRealtimeEndpointResponsePrivate::DeleteRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRealtimeEndpointResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
