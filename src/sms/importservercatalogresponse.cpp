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

#include "importservercatalogresponse.h"
#include "importservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  ImportServerCatalogResponse
 *
 * @brief  Handles SMS ImportServerCatalog responses.
 *
 * @see    SMSClient::importServerCatalog
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportServerCatalogResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new ImportServerCatalogResponsePrivate(this), parent)
{
    setRequest(new ImportServerCatalogRequest(request));
    setReply(reply);
}

const ImportServerCatalogRequest * ImportServerCatalogResponse::request() const
{
    Q_D(const ImportServerCatalogResponse);
    return static_cast<const ImportServerCatalogRequest *>(d->request);
}

/**
 * @brief  Parse a SMS ImportServerCatalog response.
 *
 * @param  response  Response to parse.
 */
void ImportServerCatalogResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportServerCatalogResponsePrivate
 *
 * @brief  Private implementation for ImportServerCatalogResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportServerCatalogResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportServerCatalogResponse instance.
 */
ImportServerCatalogResponsePrivate::ImportServerCatalogResponsePrivate(
    ImportServerCatalogQueueResponse * const q) : ImportServerCatalogPrivate(q)
{

}

/**
 * @brief  Parse an SMS ImportServerCatalogResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportServerCatalogResponsePrivate::ImportServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportServerCatalogResponse"));
    /// @todo
}
