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

#include "listgatewaysresponse.h"
#include "listgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListGatewaysResponse
 *
 * @brief  Handles StorageGateway ListGateways responses.
 *
 * @see    StorageGatewayClient::listGateways
 */

/**
 * @brief  Constructs a new ListGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGatewaysResponse::ListGatewaysResponse(
        const ListGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListGatewaysResponsePrivate(this), parent)
{
    setRequest(new ListGatewaysRequest(request));
    setReply(reply);
}

const ListGatewaysRequest * ListGatewaysResponse::request() const
{
    Q_D(const ListGatewaysResponse);
    return static_cast<const ListGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListGateways response.
 *
 * @param  response  Response to parse.
 */
void ListGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGatewaysResponsePrivate
 *
 * @brief  Private implementation for ListGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGatewaysResponse instance.
 */
ListGatewaysResponsePrivate::ListGatewaysResponsePrivate(
    ListGatewaysQueueResponse * const q) : ListGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGatewaysResponsePrivate::ListGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewaysResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
