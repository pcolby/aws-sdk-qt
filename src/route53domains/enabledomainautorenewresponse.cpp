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

#include "enabledomainautorenewresponse.h"
#include "enabledomainautorenewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  EnableDomainAutoRenewResponse
 *
 * @brief  Handles Route53Domains EnableDomainAutoRenew responses.
 *
 * @see    Route53DomainsClient::enableDomainAutoRenew
 */

/**
 * @brief  Constructs a new EnableDomainAutoRenewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableDomainAutoRenewResponse::EnableDomainAutoRenewResponse(
        const EnableDomainAutoRenewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new EnableDomainAutoRenewResponsePrivate(this), parent)
{
    setRequest(new EnableDomainAutoRenewRequest(request));
    setReply(reply);
}

const EnableDomainAutoRenewRequest * EnableDomainAutoRenewResponse::request() const
{
    Q_D(const EnableDomainAutoRenewResponse);
    return static_cast<const EnableDomainAutoRenewRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains EnableDomainAutoRenew response.
 *
 * @param  response  Response to parse.
 */
void EnableDomainAutoRenewResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableDomainAutoRenewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableDomainAutoRenewResponsePrivate
 *
 * @brief  Private implementation for EnableDomainAutoRenewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainAutoRenewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableDomainAutoRenewResponse instance.
 */
EnableDomainAutoRenewResponsePrivate::EnableDomainAutoRenewResponsePrivate(
    EnableDomainAutoRenewResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains EnableDomainAutoRenewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableDomainAutoRenewResponsePrivate::parseEnableDomainAutoRenewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDomainAutoRenewResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
