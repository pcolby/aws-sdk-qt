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

#include "listportfoliosresponse.h"
#include "listportfoliosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPortfoliosResponse
 *
 * @brief  Handles ServiceCatalog ListPortfolios responses.
 *
 * @see    ServiceCatalogClient::listPortfolios
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPortfoliosResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfoliosResponsePrivate(this), parent)
{
    setRequest(new ListPortfoliosRequest(request));
    setReply(reply);
}

const ListPortfoliosRequest * ListPortfoliosResponse::request() const
{
    Q_D(const ListPortfoliosResponse);
    return static_cast<const ListPortfoliosRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListPortfolios response.
 *
 * @param  response  Response to parse.
 */
void ListPortfoliosResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPortfoliosResponsePrivate
 *
 * @brief  Private implementation for ListPortfoliosResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPortfoliosResponse instance.
 */
ListPortfoliosResponsePrivate::ListPortfoliosResponsePrivate(
    ListPortfoliosQueueResponse * const q) : ListPortfoliosPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListPortfoliosResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPortfoliosResponsePrivate::ListPortfoliosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfoliosResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
