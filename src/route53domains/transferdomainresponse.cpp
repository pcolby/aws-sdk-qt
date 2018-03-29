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

#include "transferdomainresponse.h"
#include "transferdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  TransferDomainResponse
 *
 * @brief  Handles Route53Domains TransferDomain responses.
 *
 * @see    Route53DomainsClient::transferDomain
 */

/**
 * @brief  Constructs a new TransferDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TransferDomainResponse::TransferDomainResponse(
        const TransferDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new TransferDomainResponsePrivate(this), parent)
{
    setRequest(new TransferDomainRequest(request));
    setReply(reply);
}

const TransferDomainRequest * TransferDomainResponse::request() const
{
    Q_D(const TransferDomainResponse);
    return static_cast<const TransferDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains TransferDomain response.
 *
 * @param  response  Response to parse.
 */
void TransferDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TransferDomainResponsePrivate
 *
 * @brief  Private implementation for TransferDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TransferDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TransferDomainResponse instance.
 */
TransferDomainResponsePrivate::TransferDomainResponsePrivate(
    TransferDomainQueueResponse * const q) : TransferDomainPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains TransferDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TransferDomainResponsePrivate::TransferDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransferDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS
