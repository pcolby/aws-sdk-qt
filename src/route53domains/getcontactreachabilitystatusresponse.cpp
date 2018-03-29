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

#include "getcontactreachabilitystatusresponse.h"
#include "getcontactreachabilitystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  GetContactReachabilityStatusResponse
 *
 * @brief  Handles Route53Domains GetContactReachabilityStatus responses.
 *
 * @see    Route53DomainsClient::getContactReachabilityStatus
 */

/**
 * @brief  Constructs a new GetContactReachabilityStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetContactReachabilityStatusResponse::GetContactReachabilityStatusResponse(
        const GetContactReachabilityStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetContactReachabilityStatusResponsePrivate(this), parent)
{
    setRequest(new GetContactReachabilityStatusRequest(request));
    setReply(reply);
}

const GetContactReachabilityStatusRequest * GetContactReachabilityStatusResponse::request() const
{
    Q_D(const GetContactReachabilityStatusResponse);
    return static_cast<const GetContactReachabilityStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains GetContactReachabilityStatus response.
 *
 * @param  response  Response to parse.
 */
void GetContactReachabilityStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetContactReachabilityStatusResponsePrivate
 *
 * @brief  Private implementation for GetContactReachabilityStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContactReachabilityStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetContactReachabilityStatusResponse instance.
 */
GetContactReachabilityStatusResponsePrivate::GetContactReachabilityStatusResponsePrivate(
    GetContactReachabilityStatusQueueResponse * const q) : GetContactReachabilityStatusPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains GetContactReachabilityStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetContactReachabilityStatusResponsePrivate::GetContactReachabilityStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactReachabilityStatusResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS
