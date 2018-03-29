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

#include "enabledomaintransferlockresponse.h"
#include "enabledomaintransferlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  EnableDomainTransferLockResponse
 *
 * @brief  Handles Route53Domains EnableDomainTransferLock responses.
 *
 * @see    Route53DomainsClient::enableDomainTransferLock
 */

/**
 * @brief  Constructs a new EnableDomainTransferLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableDomainTransferLockResponse::EnableDomainTransferLockResponse(
        const EnableDomainTransferLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new EnableDomainTransferLockResponsePrivate(this), parent)
{
    setRequest(new EnableDomainTransferLockRequest(request));
    setReply(reply);
}

const EnableDomainTransferLockRequest * EnableDomainTransferLockResponse::request() const
{
    Q_D(const EnableDomainTransferLockResponse);
    return static_cast<const EnableDomainTransferLockRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains EnableDomainTransferLock response.
 *
 * @param  response  Response to parse.
 */
void EnableDomainTransferLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableDomainTransferLockResponsePrivate
 *
 * @brief  Private implementation for EnableDomainTransferLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainTransferLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableDomainTransferLockResponse instance.
 */
EnableDomainTransferLockResponsePrivate::EnableDomainTransferLockResponsePrivate(
    EnableDomainTransferLockQueueResponse * const q) : EnableDomainTransferLockPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains EnableDomainTransferLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableDomainTransferLockResponsePrivate::EnableDomainTransferLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDomainTransferLockResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
