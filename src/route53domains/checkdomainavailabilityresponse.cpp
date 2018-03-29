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

#include "checkdomainavailabilityresponse.h"
#include "checkdomainavailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  CheckDomainAvailabilityResponse
 *
 * @brief  Handles Route53Domains CheckDomainAvailability responses.
 *
 * @see    Route53DomainsClient::checkDomainAvailability
 */

/**
 * @brief  Constructs a new CheckDomainAvailabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CheckDomainAvailabilityResponse::CheckDomainAvailabilityResponse(
        const CheckDomainAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CheckDomainAvailabilityResponse(new CheckDomainAvailabilityResponsePrivate(this), parent)
{
    setRequest(new CheckDomainAvailabilityRequest(request));
    setReply(reply);
}

const CheckDomainAvailabilityRequest * CheckDomainAvailabilityResponse::request() const
{
    Q_D(const CheckDomainAvailabilityResponse);
    return static_cast<const CheckDomainAvailabilityRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains CheckDomainAvailability response.
 *
 * @param  response  Response to parse.
 */
void CheckDomainAvailabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(CheckDomainAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CheckDomainAvailabilityResponsePrivate
 *
 * @brief  Private implementation for CheckDomainAvailabilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainAvailabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CheckDomainAvailabilityResponse instance.
 */
CheckDomainAvailabilityResponsePrivate::CheckDomainAvailabilityResponsePrivate(
    CheckDomainAvailabilityResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains CheckDomainAvailabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CheckDomainAvailabilityResponsePrivate::parseCheckDomainAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckDomainAvailabilityResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
