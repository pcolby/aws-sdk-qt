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

#include "verifydomainidentityresponse.h"
#include "verifydomainidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  VerifyDomainIdentityResponse
 *
 * @brief  Handles SES VerifyDomainIdentity responses.
 *
 * @see    SESClient::verifyDomainIdentity
 */

/**
 * @brief  Constructs a new VerifyDomainIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyDomainIdentityResponse::VerifyDomainIdentityResponse(
        const VerifyDomainIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new VerifyDomainIdentityResponsePrivate(this), parent)
{
    setRequest(new VerifyDomainIdentityRequest(request));
    setReply(reply);
}

const VerifyDomainIdentityRequest * VerifyDomainIdentityResponse::request() const
{
    Q_D(const VerifyDomainIdentityResponse);
    return static_cast<const VerifyDomainIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a SES VerifyDomainIdentity response.
 *
 * @param  response  Response to parse.
 */
void VerifyDomainIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  VerifyDomainIdentityResponsePrivate
 *
 * @brief  Private implementation for VerifyDomainIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyDomainIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public VerifyDomainIdentityResponse instance.
 */
VerifyDomainIdentityResponsePrivate::VerifyDomainIdentityResponsePrivate(
    VerifyDomainIdentityQueueResponse * const q) : VerifyDomainIdentityPrivate(q)
{

}

/**
 * @brief  Parse an SES VerifyDomainIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void VerifyDomainIdentityResponsePrivate::VerifyDomainIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyDomainIdentityResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
