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

#include "renewdomainresponse.h"
#include "renewdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  RenewDomainResponse
 *
 * @brief  Handles Route53Domains RenewDomain responses.
 *
 * @see    Route53DomainsClient::renewDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RenewDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RenewDomainResponsePrivate(this), parent)
{
    setRequest(new RenewDomainRequest(request));
    setReply(reply);
}

const RenewDomainRequest * RenewDomainResponse::request() const
{
    Q_D(const RenewDomainResponse);
    return static_cast<const RenewDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains RenewDomain response.
 *
 * @param  response  Response to parse.
 */
void RenewDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RenewDomainResponsePrivate
 *
 * @brief  Private implementation for RenewDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RenewDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RenewDomainResponse instance.
 */
RenewDomainResponsePrivate::RenewDomainResponsePrivate(
    RenewDomainQueueResponse * const q) : RenewDomainPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains RenewDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RenewDomainResponsePrivate::RenewDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS
