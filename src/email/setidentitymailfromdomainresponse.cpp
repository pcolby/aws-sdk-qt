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

#include "setidentitymailfromdomainresponse.h"
#include "setidentitymailfromdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityMailFromDomainResponse
 *
 * @brief  Handles SES SetIdentityMailFromDomain responses.
 *
 * @see    SESClient::setIdentityMailFromDomain
 */

/**
 * @brief  Constructs a new SetIdentityMailFromDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityMailFromDomainResponse::SetIdentityMailFromDomainResponse(
        const SetIdentityMailFromDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityMailFromDomainResponsePrivate(this), parent)
{
    setRequest(new SetIdentityMailFromDomainRequest(request));
    setReply(reply);
}

const SetIdentityMailFromDomainRequest * SetIdentityMailFromDomainResponse::request() const
{
    Q_D(const SetIdentityMailFromDomainResponse);
    return static_cast<const SetIdentityMailFromDomainRequest *>(d->request);
}

/**
 * @brief  Parse a SES SetIdentityMailFromDomain response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityMailFromDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityMailFromDomainResponsePrivate
 *
 * @brief  Private implementation for SetIdentityMailFromDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityMailFromDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityMailFromDomainResponse instance.
 */
SetIdentityMailFromDomainResponsePrivate::SetIdentityMailFromDomainResponsePrivate(
    SetIdentityMailFromDomainQueueResponse * const q) : SetIdentityMailFromDomainPrivate(q)
{

}

/**
 * @brief  Parse an SES SetIdentityMailFromDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityMailFromDomainResponsePrivate::SetIdentityMailFromDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityMailFromDomainResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
