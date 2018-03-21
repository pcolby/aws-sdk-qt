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

#include "deleteservercatalogresponse.h"
#include "deleteservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  DeleteServerCatalogResponse
 *
 * @brief  Handles SMS DeleteServerCatalog responses.
 *
 * @see    SMSClient::deleteServerCatalog
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerCatalogResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new DeleteServerCatalogResponsePrivate(this), parent)
{
    setRequest(new DeleteServerCatalogRequest(request));
    setReply(reply);
}

const DeleteServerCatalogRequest * DeleteServerCatalogResponse::request() const
{
    Q_D(const DeleteServerCatalogResponse);
    return static_cast<const DeleteServerCatalogRequest *>(d->request);
}

/**
 * @brief  Parse a SMS DeleteServerCatalog response.
 *
 * @param  response  Response to parse.
 */
void DeleteServerCatalogResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServerCatalogResponsePrivate
 *
 * @brief  Private implementation for DeleteServerCatalogResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCatalogResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServerCatalogResponse instance.
 */
DeleteServerCatalogResponsePrivate::DeleteServerCatalogResponsePrivate(
    DeleteServerCatalogQueueResponse * const q) : DeleteServerCatalogPrivate(q)
{

}

/**
 * @brief  Parse an SMS DeleteServerCatalogResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServerCatalogResponsePrivate::DeleteServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerCatalogResponse"));
    /// @todo
}

} // namespace SMS
} // namespace AWS
