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

#include "uploadsshpublickeyresponse.h"
#include "uploadsshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UploadSSHPublicKeyResponse
 *
 * @brief  Handles IAM UploadSSHPublicKey responses.
 *
 * @see    IAMClient::uploadSSHPublicKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadSSHPublicKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UploadSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new UploadSSHPublicKeyRequest(request));
    setReply(reply);
}

const UploadSSHPublicKeyRequest * UploadSSHPublicKeyResponse::request() const
{
    Q_D(const UploadSSHPublicKeyResponse);
    return static_cast<const UploadSSHPublicKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UploadSSHPublicKey response.
 *
 * @param  response  Response to parse.
 */
void UploadSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadSSHPublicKeyResponsePrivate
 *
 * @brief  Private implementation for UploadSSHPublicKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadSSHPublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadSSHPublicKeyResponse instance.
 */
UploadSSHPublicKeyResponsePrivate::UploadSSHPublicKeyResponsePrivate(
    UploadSSHPublicKeyQueueResponse * const q) : UploadSSHPublicKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM UploadSSHPublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadSSHPublicKeyResponsePrivate::UploadSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadSSHPublicKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
