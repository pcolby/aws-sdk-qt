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

#include "getcalleridentityresponse.h"
#include "getcalleridentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace STS {

/**
 * @class  GetCallerIdentityResponse
 *
 * @brief  Handles STS GetCallerIdentity responses.
 *
 * @see    STSClient::getCallerIdentity
 */

/**
 * @brief  Constructs a new GetCallerIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCallerIdentityResponse::GetCallerIdentityResponse(
        const GetCallerIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : STSResponse(new GetCallerIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCallerIdentityRequest(request));
    setReply(reply);
}

const GetCallerIdentityRequest * GetCallerIdentityResponse::request() const
{
    Q_D(const GetCallerIdentityResponse);
    return static_cast<const GetCallerIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a STS GetCallerIdentity response.
 *
 * @param  response  Response to parse.
 */
void GetCallerIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCallerIdentityResponsePrivate
 *
 * @brief  Private implementation for GetCallerIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCallerIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCallerIdentityResponse instance.
 */
GetCallerIdentityResponsePrivate::GetCallerIdentityResponsePrivate(
    GetCallerIdentityQueueResponse * const q) : GetCallerIdentityPrivate(q)
{

}

/**
 * @brief  Parse an STS GetCallerIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCallerIdentityResponsePrivate::GetCallerIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCallerIdentityResponse"));
    /// @todo
}

} // namespace STS
} // namespace AWS
