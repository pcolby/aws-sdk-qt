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

#include "rotateencryptionkeyresponse.h"
#include "rotateencryptionkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  RotateEncryptionKeyResponse
 *
 * @brief  Handles Redshift RotateEncryptionKey responses.
 *
 * @see    RedshiftClient::rotateEncryptionKey
 */

/**
 * @brief  Constructs a new RotateEncryptionKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RotateEncryptionKeyResponse::RotateEncryptionKeyResponse(
        const RotateEncryptionKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RotateEncryptionKeyResponsePrivate(this), parent)
{
    setRequest(new RotateEncryptionKeyRequest(request));
    setReply(reply);
}

const RotateEncryptionKeyRequest * RotateEncryptionKeyResponse::request() const
{
    Q_D(const RotateEncryptionKeyResponse);
    return static_cast<const RotateEncryptionKeyRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RotateEncryptionKey response.
 *
 * @param  response  Response to parse.
 */
void RotateEncryptionKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RotateEncryptionKeyResponsePrivate
 *
 * @brief  Private implementation for RotateEncryptionKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateEncryptionKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RotateEncryptionKeyResponse instance.
 */
RotateEncryptionKeyResponsePrivate::RotateEncryptionKeyResponsePrivate(
    RotateEncryptionKeyQueueResponse * const q) : RotateEncryptionKeyPrivate(q)
{

}

/**
 * @brief  Parse an Redshift RotateEncryptionKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RotateEncryptionKeyResponsePrivate::RotateEncryptionKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateEncryptionKeyResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
