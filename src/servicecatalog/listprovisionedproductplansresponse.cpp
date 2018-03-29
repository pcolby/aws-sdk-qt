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

#include "listprovisionedproductplansresponse.h"
#include "listprovisionedproductplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ListProvisionedProductPlansResponse
 *
 * @brief  Handles ServiceCatalog ListProvisionedProductPlans responses.
 *
 * @see    ServiceCatalogClient::listProvisionedProductPlans
 */

/**
 * @brief  Constructs a new ListProvisionedProductPlansResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProvisionedProductPlansResponse::ListProvisionedProductPlansResponse(
        const ListProvisionedProductPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisionedProductPlansResponsePrivate(this), parent)
{
    setRequest(new ListProvisionedProductPlansRequest(request));
    setReply(reply);
}

const ListProvisionedProductPlansRequest * ListProvisionedProductPlansResponse::request() const
{
    Q_D(const ListProvisionedProductPlansResponse);
    return static_cast<const ListProvisionedProductPlansRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListProvisionedProductPlans response.
 *
 * @param  response  Response to parse.
 */
void ListProvisionedProductPlansResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListProvisionedProductPlansResponsePrivate
 *
 * @brief  Private implementation for ListProvisionedProductPlansResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisionedProductPlansResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListProvisionedProductPlansResponse instance.
 */
ListProvisionedProductPlansResponsePrivate::ListProvisionedProductPlansResponsePrivate(
    ListProvisionedProductPlansQueueResponse * const q) : ListProvisionedProductPlansPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListProvisionedProductPlansResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListProvisionedProductPlansResponsePrivate::ListProvisionedProductPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisionedProductPlansResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
