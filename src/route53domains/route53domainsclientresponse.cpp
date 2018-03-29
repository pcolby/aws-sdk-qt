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

#include "route53domainsclientresponse.h"
#include "route53domainsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  Route53DomainsClientResponse
 *
 * @brief  Handles Route53Domains Route53DomainsClient responses.
 *
 * @see    Route53DomainsClient::route53DomainsClient
 */

/**
 * @brief  Constructs a new Route53DomainsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
Route53DomainsClientResponse::Route53DomainsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new Route53DomainsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Route53DomainsClientResponsePrivate
 *
 * @brief  Private implementation for Route53DomainsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Route53DomainsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Route53DomainsClientResponse instance.
 */
Route53DomainsClientResponsePrivate::Route53DomainsClientResponsePrivate(
    Route53DomainsClientQueueResponse * const q) : Route53DomainsClientPrivate(q)
{

}

} // namespace Route53Domains
} // namespace AWS
