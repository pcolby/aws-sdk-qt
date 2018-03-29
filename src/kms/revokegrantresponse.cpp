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

#include "revokegrantresponse.h"
#include "revokegrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  RevokeGrantResponse
 *
 * @brief  Handles KMS RevokeGrant responses.
 *
 * @see    KMSClient::revokeGrant
 */

/**
 * @brief  Constructs a new RevokeGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeGrantResponse::RevokeGrantResponse(
        const RevokeGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new RevokeGrantResponsePrivate(this), parent)
{
    setRequest(new RevokeGrantRequest(request));
    setReply(reply);
}

const RevokeGrantRequest * RevokeGrantResponse::request() const
{
    Q_D(const RevokeGrantResponse);
    return static_cast<const RevokeGrantRequest *>(d->request);
}

/**
 * @brief  Parse a KMS RevokeGrant response.
 *
 * @param  response  Response to parse.
 */
void RevokeGrantResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeGrantResponsePrivate
 *
 * @brief  Private implementation for RevokeGrantResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeGrantResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeGrantResponse instance.
 */
RevokeGrantResponsePrivate::RevokeGrantResponsePrivate(
    RevokeGrantResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS RevokeGrantResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeGrantResponsePrivate::RevokeGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeGrantResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
