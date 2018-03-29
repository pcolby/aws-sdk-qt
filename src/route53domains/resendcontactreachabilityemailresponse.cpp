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

#include "resendcontactreachabilityemailresponse.h"
#include "resendcontactreachabilityemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  ResendContactReachabilityEmailResponse
 *
 * @brief  Handles Route53Domains ResendContactReachabilityEmail responses.
 *
 * @see    Route53DomainsClient::resendContactReachabilityEmail
 */

/**
 * @brief  Constructs a new ResendContactReachabilityEmailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResendContactReachabilityEmailResponse::ResendContactReachabilityEmailResponse(
        const ResendContactReachabilityEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ResendContactReachabilityEmailResponsePrivate(this), parent)
{
    setRequest(new ResendContactReachabilityEmailRequest(request));
    setReply(reply);
}

const ResendContactReachabilityEmailRequest * ResendContactReachabilityEmailResponse::request() const
{
    Q_D(const ResendContactReachabilityEmailResponse);
    return static_cast<const ResendContactReachabilityEmailRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains ResendContactReachabilityEmail response.
 *
 * @param  response  Response to parse.
 */
void ResendContactReachabilityEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResendContactReachabilityEmailResponsePrivate
 *
 * @brief  Private implementation for ResendContactReachabilityEmailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendContactReachabilityEmailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResendContactReachabilityEmailResponse instance.
 */
ResendContactReachabilityEmailResponsePrivate::ResendContactReachabilityEmailResponsePrivate(
    ResendContactReachabilityEmailQueueResponse * const q) : ResendContactReachabilityEmailPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains ResendContactReachabilityEmailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResendContactReachabilityEmailResponsePrivate::ResendContactReachabilityEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendContactReachabilityEmailResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
