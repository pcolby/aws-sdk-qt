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

#include "deletemethodresponse.h"
#include "deletemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteMethodResponse
 *
 * @brief  Handles APIGateway DeleteMethod responses.
 *
 * @see    APIGatewayClient::deleteMethod
 */

/**
 * @brief  Constructs a new DeleteMethodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMethodResponse::DeleteMethodResponse(
        const DeleteMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteMethodResponsePrivate(this), parent)
{
    setRequest(new DeleteMethodRequest(request));
    setReply(reply);
}

const DeleteMethodRequest * DeleteMethodResponse::request() const
{
    Q_D(const DeleteMethodResponse);
    return static_cast<const DeleteMethodRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteMethod response.
 *
 * @param  response  Response to parse.
 */
void DeleteMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMethodResponsePrivate
 *
 * @brief  Private implementation for DeleteMethodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMethodResponse instance.
 */
DeleteMethodResponsePrivate::DeleteMethodResponsePrivate(
    DeleteMethodQueueResponse * const q) : DeleteMethodPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMethodResponsePrivate::DeleteMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
