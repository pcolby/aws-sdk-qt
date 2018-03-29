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

#include "route53domainsresponse.h"
#include "route53domainsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  Route53DomainsResponse
 *
 * @brief  Handles Route53Domains Route53Domains responses.
 *
 * @see    Route53DomainsClient::route53Domains
 */

/**
 * @brief  Constructs a new Route53DomainsResponse object.
 *
 * @param  parent   This object's parent.
 */
Route53DomainsResponse::Route53DomainsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53DomainsResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void Route53DomainsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
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
 * @class  Route53DomainsResponsePrivate
 *
 * @brief  Private implementation for Route53DomainsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Route53DomainsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Route53DomainsResponse instance.
 */
Route53DomainsResponsePrivate::Route53DomainsResponsePrivate(
    Route53DomainsQueueResponse * const q) : Route53DomainsPrivate(q)
{

}

} // namespace Route53Domains
} // namespace QtAws
