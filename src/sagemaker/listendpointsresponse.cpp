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

#include "listendpointsresponse.h"
#include "listendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  ListEndpointsResponse
 *
 * @brief  Handles SageMaker ListEndpoints responses.
 *
 * @see    SageMakerClient::listEndpoints
 */

/**
 * @brief  Constructs a new ListEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEndpointsResponse::ListEndpointsResponse(
        const ListEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsRequest(request));
    setReply(reply);
}

const ListEndpointsRequest * ListEndpointsResponse::request() const
{
    Q_D(const ListEndpointsResponse);
    return static_cast<const ListEndpointsRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker ListEndpoints response.
 *
 * @param  response  Response to parse.
 */
void ListEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEndpointsResponsePrivate
 *
 * @brief  Private implementation for ListEndpointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEndpointsResponse instance.
 */
ListEndpointsResponsePrivate::ListEndpointsResponsePrivate(
    ListEndpointsQueueResponse * const q) : ListEndpointsPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker ListEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEndpointsResponsePrivate::ListEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
