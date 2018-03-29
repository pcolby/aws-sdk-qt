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

#include "resolvecustomerresponse.h"
#include "resolvecustomerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/**
 * @class  ResolveCustomerResponse
 *
 * @brief  Handles MarketplaceMetering ResolveCustomer responses.
 *
 * @see    MarketplaceMeteringClient::resolveCustomer
 */

/**
 * @brief  Constructs a new ResolveCustomerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveCustomerResponse::ResolveCustomerResponse(
        const ResolveCustomerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new ResolveCustomerResponsePrivate(this), parent)
{
    setRequest(new ResolveCustomerRequest(request));
    setReply(reply);
}

const ResolveCustomerRequest * ResolveCustomerResponse::request() const
{
    Q_D(const ResolveCustomerResponse);
    return static_cast<const ResolveCustomerRequest *>(d->request);
}

/**
 * @brief  Parse a MarketplaceMetering ResolveCustomer response.
 *
 * @param  response  Response to parse.
 */
void ResolveCustomerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResolveCustomerResponsePrivate
 *
 * @brief  Private implementation for ResolveCustomerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCustomerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResolveCustomerResponse instance.
 */
ResolveCustomerResponsePrivate::ResolveCustomerResponsePrivate(
    ResolveCustomerQueueResponse * const q) : ResolveCustomerPrivate(q)
{

}

/**
 * @brief  Parse an MarketplaceMetering ResolveCustomerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResolveCustomerResponsePrivate::ResolveCustomerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveCustomerResponse"));
    /// @todo
}

} // namespace MarketplaceMetering
} // namespace QtAws
