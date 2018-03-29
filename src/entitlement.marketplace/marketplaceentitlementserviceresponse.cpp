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

#include "marketplaceentitlementserviceresponse.h"
#include "marketplaceentitlementserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlementService {

/**
 * @class  MarketplaceEntitlementServiceResponse
 *
 * @brief  Handles MarketplaceEntitlementService MarketplaceEntitlementService responses.
 *
 * @see    MarketplaceEntitlementServiceClient::marketplaceEntitlementService
 */

/**
 * @brief  Constructs a new MarketplaceEntitlementServiceResponse object.
 *
 * @param  parent   This object's parent.
 */
MarketplaceEntitlementServiceResponse::MarketplaceEntitlementServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceEntitlementServiceResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void MarketplaceEntitlementServiceResponse::parseFailure(QIODevice &response)
{
    Q_D(MarketplaceEntitlementServiceResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  MarketplaceEntitlementServiceResponsePrivate
 *
 * @brief  Private implementation for MarketplaceEntitlementServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceEntitlementServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceEntitlementServiceResponse instance.
 */
MarketplaceEntitlementServiceResponsePrivate::MarketplaceEntitlementServiceResponsePrivate(
    MarketplaceEntitlementServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
