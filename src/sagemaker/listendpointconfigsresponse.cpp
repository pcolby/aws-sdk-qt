/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listendpointconfigsresponse.h"
#include "listendpointconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  ListEndpointConfigsResponse
 *
 * @brief  Handles SageMaker ListEndpointConfigs responses.
 *
 * @see    SageMakerClient::listEndpointConfigs
 */

/**
 * @brief  Constructs a new ListEndpointConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEndpointConfigsResponse::ListEndpointConfigsResponse(
        const ListEndpointConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointConfigsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointConfigsRequest(request));
    setReply(reply);
}

const ListEndpointConfigsRequest * ListEndpointConfigsResponse::request() const
{
    Q_D(const ListEndpointConfigsResponse);
    return static_cast<const ListEndpointConfigsRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker ListEndpointConfigs response.
 *
 * @param  response  Response to parse.
 */
void ListEndpointConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEndpointConfigsResponsePrivate
 *
 * @brief  Private implementation for ListEndpointConfigsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEndpointConfigsResponse instance.
 */
ListEndpointConfigsResponsePrivate::ListEndpointConfigsResponsePrivate(
    ListEndpointConfigsQueueResponse * const q) : ListEndpointConfigsPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker ListEndpointConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEndpointConfigsResponsePrivate::ListEndpointConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointConfigsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
