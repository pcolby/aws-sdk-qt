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

#include "getidentitynotificationattributesresponse.h"
#include "getidentitynotificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityNotificationAttributesResponse
 *
 * @brief  Handles SES GetIdentityNotificationAttributes responses.
 *
 * @see    SESClient::getIdentityNotificationAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityNotificationAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetIdentityNotificationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityNotificationAttributesRequest(request));
    setReply(reply);
}

const GetIdentityNotificationAttributesRequest * GetIdentityNotificationAttributesResponse::request() const
{
    Q_D(const GetIdentityNotificationAttributesResponse);
    return static_cast<const GetIdentityNotificationAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetIdentityNotificationAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityNotificationAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityNotificationAttributesResponsePrivate
 *
 * @brief  Private implementation for GetIdentityNotificationAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityNotificationAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityNotificationAttributesResponse instance.
 */
GetIdentityNotificationAttributesResponsePrivate::GetIdentityNotificationAttributesResponsePrivate(
    GetIdentityNotificationAttributesQueueResponse * const q) : GetIdentityNotificationAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SES GetIdentityNotificationAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityNotificationAttributesResponsePrivate::GetIdentityNotificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityNotificationAttributesResponse"));
    /// @todo
}
