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

#include "encryptresponse.h"
#include "encryptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  EncryptResponse
 *
 * @brief  Handles KMS Encrypt responses.
 *
 * @see    KMSClient::encrypt
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EncryptResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new EncryptResponsePrivate(this), parent)
{
    setRequest(new EncryptRequest(request));
    setReply(reply);
}

const EncryptRequest * EncryptResponse::request() const
{
    Q_D(const EncryptResponse);
    return static_cast<const EncryptRequest *>(d->request);
}

/**
 * @brief  Parse a KMS Encrypt response.
 *
 * @param  response  Response to parse.
 */
void EncryptResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EncryptResponsePrivate
 *
 * @brief  Private implementation for EncryptResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EncryptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EncryptResponse instance.
 */
EncryptResponsePrivate::EncryptResponsePrivate(
    EncryptQueueResponse * const q) : EncryptPrivate(q)
{

}

/**
 * @brief  Parse an KMS EncryptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EncryptResponsePrivate::EncryptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EncryptResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
