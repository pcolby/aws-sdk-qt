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

#include "getidentityverificationattributesresponse.h"
#include "getidentityverificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  GetIdentityVerificationAttributesResponse
 *
 * @brief  Handles SES GetIdentityVerificationAttributes responses.
 *
 * @see    SESClient::getIdentityVerificationAttributes
 */

/**
 * @brief  Constructs a new GetIdentityVerificationAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityVerificationAttributesResponse::GetIdentityVerificationAttributesResponse(
        const GetIdentityVerificationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetIdentityVerificationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityVerificationAttributesRequest(request));
    setReply(reply);
}

const GetIdentityVerificationAttributesRequest * GetIdentityVerificationAttributesResponse::request() const
{
    Q_D(const GetIdentityVerificationAttributesResponse);
    return static_cast<const GetIdentityVerificationAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetIdentityVerificationAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityVerificationAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityVerificationAttributesResponsePrivate
 *
 * @brief  Private implementation for GetIdentityVerificationAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityVerificationAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityVerificationAttributesResponse instance.
 */
GetIdentityVerificationAttributesResponsePrivate::GetIdentityVerificationAttributesResponsePrivate(
    GetIdentityVerificationAttributesQueueResponse * const q) : GetIdentityVerificationAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SES GetIdentityVerificationAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityVerificationAttributesResponsePrivate::GetIdentityVerificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityVerificationAttributesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
