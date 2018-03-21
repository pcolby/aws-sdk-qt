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

#include "listtagoptionsresponse.h"
#include "listtagoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListTagOptionsResponse
 *
 * @brief  Handles ServiceCatalog ListTagOptions responses.
 *
 * @see    ServiceCatalogClient::listTagOptions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagOptionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListTagOptionsResponsePrivate(this), parent)
{
    setRequest(new ListTagOptionsRequest(request));
    setReply(reply);
}

const ListTagOptionsRequest * ListTagOptionsResponse::request() const
{
    Q_D(const ListTagOptionsResponse);
    return static_cast<const ListTagOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListTagOptions response.
 *
 * @param  response  Response to parse.
 */
void ListTagOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagOptionsResponsePrivate
 *
 * @brief  Private implementation for ListTagOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagOptionsResponse instance.
 */
ListTagOptionsResponsePrivate::ListTagOptionsResponsePrivate(
    ListTagOptionsQueueResponse * const q) : ListTagOptionsPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListTagOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagOptionsResponsePrivate::ListTagOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagOptionsResponse"));
    /// @todo
}
