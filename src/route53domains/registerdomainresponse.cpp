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

#include "registerdomainresponse.h"
#include "registerdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  RegisterDomainResponse
 *
 * @brief  Handles Route53Domains RegisterDomain responses.
 *
 * @see    Route53DomainsClient::registerDomain
 */

/**
 * @brief  Constructs a new RegisterDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDomainResponse::RegisterDomainResponse(
        const RegisterDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RegisterDomainResponsePrivate(this), parent)
{
    setRequest(new RegisterDomainRequest(request));
    setReply(reply);
}

const RegisterDomainRequest * RegisterDomainResponse::request() const
{
    Q_D(const RegisterDomainResponse);
    return static_cast<const RegisterDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains RegisterDomain response.
 *
 * @param  response  Response to parse.
 */
void RegisterDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterDomainResponsePrivate
 *
 * @brief  Private implementation for RegisterDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterDomainResponse instance.
 */
RegisterDomainResponsePrivate::RegisterDomainResponsePrivate(
    RegisterDomainQueueResponse * const q) : RegisterDomainPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains RegisterDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterDomainResponsePrivate::RegisterDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS
