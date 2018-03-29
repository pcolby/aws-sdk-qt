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

#include "assumerolewithwebidentityresponse.h"
#include "assumerolewithwebidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/**
 * @class  AssumeRoleWithWebIdentityResponse
 *
 * @brief  Handles STS AssumeRoleWithWebIdentity responses.
 *
 * @see    STSClient::assumeRoleWithWebIdentity
 */

/**
 * @brief  Constructs a new AssumeRoleWithWebIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssumeRoleWithWebIdentityResponse::AssumeRoleWithWebIdentityResponse(
        const AssumeRoleWithWebIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : STSResponse(new AssumeRoleWithWebIdentityResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleWithWebIdentityRequest(request));
    setReply(reply);
}

const AssumeRoleWithWebIdentityRequest * AssumeRoleWithWebIdentityResponse::request() const
{
    Q_D(const AssumeRoleWithWebIdentityResponse);
    return static_cast<const AssumeRoleWithWebIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a STS AssumeRoleWithWebIdentity response.
 *
 * @param  response  Response to parse.
 */
void AssumeRoleWithWebIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssumeRoleWithWebIdentityResponsePrivate
 *
 * @brief  Private implementation for AssumeRoleWithWebIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithWebIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssumeRoleWithWebIdentityResponse instance.
 */
AssumeRoleWithWebIdentityResponsePrivate::AssumeRoleWithWebIdentityResponsePrivate(
    AssumeRoleWithWebIdentityQueueResponse * const q) : AssumeRoleWithWebIdentityPrivate(q)
{

}

/**
 * @brief  Parse an STS AssumeRoleWithWebIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssumeRoleWithWebIdentityResponsePrivate::AssumeRoleWithWebIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleWithWebIdentityResponse"));
    /// @todo
}

} // namespace STS
} // namespace QtAws
