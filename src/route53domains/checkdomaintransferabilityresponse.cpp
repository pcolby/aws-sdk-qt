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

#include "checkdomaintransferabilityresponse.h"
#include "checkdomaintransferabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  CheckDomainTransferabilityResponse
 *
 * @brief  Handles Route53Domains CheckDomainTransferability responses.
 *
 * @see    Route53DomainsClient::checkDomainTransferability
 */

/**
 * @brief  Constructs a new CheckDomainTransferabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CheckDomainTransferabilityResponse::CheckDomainTransferabilityResponse(
        const CheckDomainTransferabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new CheckDomainTransferabilityResponsePrivate(this), parent)
{
    setRequest(new CheckDomainTransferabilityRequest(request));
    setReply(reply);
}

const CheckDomainTransferabilityRequest * CheckDomainTransferabilityResponse::request() const
{
    Q_D(const CheckDomainTransferabilityResponse);
    return static_cast<const CheckDomainTransferabilityRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains CheckDomainTransferability response.
 *
 * @param  response  Response to parse.
 */
void CheckDomainTransferabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CheckDomainTransferabilityResponsePrivate
 *
 * @brief  Private implementation for CheckDomainTransferabilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainTransferabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CheckDomainTransferabilityResponse instance.
 */
CheckDomainTransferabilityResponsePrivate::CheckDomainTransferabilityResponsePrivate(
    CheckDomainTransferabilityQueueResponse * const q) : CheckDomainTransferabilityPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains CheckDomainTransferabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CheckDomainTransferabilityResponsePrivate::CheckDomainTransferabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckDomainTransferabilityResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS
