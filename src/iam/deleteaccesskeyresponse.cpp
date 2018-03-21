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

#include "deleteaccesskeyresponse.h"
#include "deleteaccesskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteAccessKeyResponse
 *
 * @brief  Handles IAM DeleteAccessKey responses.
 *
 * @see    IAMClient::deleteAccessKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAccessKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteAccessKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessKeyRequest(request));
    setReply(reply);
}

const DeleteAccessKeyRequest * DeleteAccessKeyResponse::request() const
{
    Q_D(const DeleteAccessKeyResponse);
    return static_cast<const DeleteAccessKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteAccessKey response.
 *
 * @param  response  Response to parse.
 */
void DeleteAccessKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAccessKeyResponsePrivate
 *
 * @brief  Private implementation for DeleteAccessKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccessKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAccessKeyResponse instance.
 */
DeleteAccessKeyResponsePrivate::DeleteAccessKeyResponsePrivate(
    DeleteAccessKeyQueueResponse * const q) : DeleteAccessKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteAccessKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAccessKeyResponsePrivate::DeleteAccessKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
