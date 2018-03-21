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

#include "deletesshpublickeyresponse.h"
#include "deletesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteSSHPublicKeyResponse
 *
 * @brief  Handles IAM DeleteSSHPublicKey responses.
 *
 * @see    IAMClient::deleteSSHPublicKey
 */

/**
 * @brief  Constructs a new DeleteSSHPublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSSHPublicKeyResponse::DeleteSSHPublicKeyResponse(
        const DeleteSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteSSHPublicKeyRequest(request));
    setReply(reply);
}

const DeleteSSHPublicKeyRequest * DeleteSSHPublicKeyResponse::request() const
{
    Q_D(const DeleteSSHPublicKeyResponse);
    return static_cast<const DeleteSSHPublicKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteSSHPublicKey response.
 *
 * @param  response  Response to parse.
 */
void DeleteSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSSHPublicKeyResponsePrivate
 *
 * @brief  Private implementation for DeleteSSHPublicKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSSHPublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSSHPublicKeyResponse instance.
 */
DeleteSSHPublicKeyResponsePrivate::DeleteSSHPublicKeyResponsePrivate(
    DeleteSSHPublicKeyQueueResponse * const q) : DeleteSSHPublicKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteSSHPublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSSHPublicKeyResponsePrivate::DeleteSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSSHPublicKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
