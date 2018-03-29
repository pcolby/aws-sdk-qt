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

#include "updatedomainnameserversresponse.h"
#include "updatedomainnameserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  UpdateDomainNameserversResponse
 *
 * @brief  Handles Route53Domains UpdateDomainNameservers responses.
 *
 * @see    Route53DomainsClient::updateDomainNameservers
 */

/**
 * @brief  Constructs a new UpdateDomainNameserversResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainNameserversResponse::UpdateDomainNameserversResponse(
        const UpdateDomainNameserversRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainNameserversResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameserversRequest(request));
    setReply(reply);
}

const UpdateDomainNameserversRequest * UpdateDomainNameserversResponse::request() const
{
    Q_D(const UpdateDomainNameserversResponse);
    return static_cast<const UpdateDomainNameserversRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains UpdateDomainNameservers response.
 *
 * @param  response  Response to parse.
 */
void UpdateDomainNameserversResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDomainNameserversResponsePrivate
 *
 * @brief  Private implementation for UpdateDomainNameserversResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameserversResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDomainNameserversResponse instance.
 */
UpdateDomainNameserversResponsePrivate::UpdateDomainNameserversResponsePrivate(
    UpdateDomainNameserversQueueResponse * const q) : UpdateDomainNameserversPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains UpdateDomainNameserversResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDomainNameserversResponsePrivate::UpdateDomainNameserversResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameserversResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
