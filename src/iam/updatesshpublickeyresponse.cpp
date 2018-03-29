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

#include "updatesshpublickeyresponse.h"
#include "updatesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateSSHPublicKeyResponse
 *
 * @brief  Handles IAM UpdateSSHPublicKey responses.
 *
 * @see    IAMClient::updateSSHPublicKey
 */

/**
 * @brief  Constructs a new UpdateSSHPublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSSHPublicKeyResponse::UpdateSSHPublicKeyResponse(
        const UpdateSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateSSHPublicKeyRequest(request));
    setReply(reply);
}

const UpdateSSHPublicKeyRequest * UpdateSSHPublicKeyResponse::request() const
{
    Q_D(const UpdateSSHPublicKeyResponse);
    return static_cast<const UpdateSSHPublicKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateSSHPublicKey response.
 *
 * @param  response  Response to parse.
 */
void UpdateSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSSHPublicKeyResponsePrivate
 *
 * @brief  Private implementation for UpdateSSHPublicKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSSHPublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSSHPublicKeyResponse instance.
 */
UpdateSSHPublicKeyResponsePrivate::UpdateSSHPublicKeyResponsePrivate(
    UpdateSSHPublicKeyQueueResponse * const q) : UpdateSSHPublicKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateSSHPublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSSHPublicKeyResponsePrivate::UpdateSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSSHPublicKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
