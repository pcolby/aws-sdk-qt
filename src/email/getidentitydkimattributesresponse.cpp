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

#include "getidentitydkimattributesresponse.h"
#include "getidentitydkimattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityDkimAttributesResponse
 *
 * @brief  Handles SES GetIdentityDkimAttributes responses.
 *
 * @see    SESClient::getIdentityDkimAttributes
 */

/**
 * @brief  Constructs a new GetIdentityDkimAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityDkimAttributesResponse::GetIdentityDkimAttributesResponse(
        const GetIdentityDkimAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetIdentityDkimAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityDkimAttributesRequest(request));
    setReply(reply);
}

const GetIdentityDkimAttributesRequest * GetIdentityDkimAttributesResponse::request() const
{
    Q_D(const GetIdentityDkimAttributesResponse);
    return static_cast<const GetIdentityDkimAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetIdentityDkimAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityDkimAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityDkimAttributesResponsePrivate
 *
 * @brief  Private implementation for GetIdentityDkimAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityDkimAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityDkimAttributesResponse instance.
 */
GetIdentityDkimAttributesResponsePrivate::GetIdentityDkimAttributesResponsePrivate(
    GetIdentityDkimAttributesQueueResponse * const q) : GetIdentityDkimAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SES GetIdentityDkimAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityDkimAttributesResponsePrivate::GetIdentityDkimAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityDkimAttributesResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
