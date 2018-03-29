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

#include "disabledomaintransferlockresponse.h"
#include "disabledomaintransferlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  DisableDomainTransferLockResponse
 *
 * @brief  Handles Route53Domains DisableDomainTransferLock responses.
 *
 * @see    Route53DomainsClient::disableDomainTransferLock
 */

/**
 * @brief  Constructs a new DisableDomainTransferLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableDomainTransferLockResponse::DisableDomainTransferLockResponse(
        const DisableDomainTransferLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DisableDomainTransferLockResponsePrivate(this), parent)
{
    setRequest(new DisableDomainTransferLockRequest(request));
    setReply(reply);
}

const DisableDomainTransferLockRequest * DisableDomainTransferLockResponse::request() const
{
    Q_D(const DisableDomainTransferLockResponse);
    return static_cast<const DisableDomainTransferLockRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains DisableDomainTransferLock response.
 *
 * @param  response  Response to parse.
 */
void DisableDomainTransferLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableDomainTransferLockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableDomainTransferLockResponsePrivate
 *
 * @brief  Private implementation for DisableDomainTransferLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableDomainTransferLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableDomainTransferLockResponse instance.
 */
DisableDomainTransferLockResponsePrivate::DisableDomainTransferLockResponsePrivate(
    DisableDomainTransferLockResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains DisableDomainTransferLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableDomainTransferLockResponsePrivate::DisableDomainTransferLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDomainTransferLockResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
