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

#include "enablekeyresponse.h"
#include "enablekeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  EnableKeyResponse
 *
 * @brief  Handles KMS EnableKey responses.
 *
 * @see    KMSClient::enableKey
 */

/**
 * @brief  Constructs a new EnableKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableKeyResponse::EnableKeyResponse(
        const EnableKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new EnableKeyResponsePrivate(this), parent)
{
    setRequest(new EnableKeyRequest(request));
    setReply(reply);
}

const EnableKeyRequest * EnableKeyResponse::request() const
{
    Q_D(const EnableKeyResponse);
    return static_cast<const EnableKeyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS EnableKey response.
 *
 * @param  response  Response to parse.
 */
void EnableKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableKeyResponsePrivate
 *
 * @brief  Private implementation for EnableKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableKeyResponse instance.
 */
EnableKeyResponsePrivate::EnableKeyResponsePrivate(
    EnableKeyResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS EnableKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableKeyResponsePrivate::EnableKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableKeyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
