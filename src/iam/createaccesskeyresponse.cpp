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

#include "createaccesskeyresponse.h"
#include "createaccesskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateAccessKeyResponse
 *
 * @brief  Handles IAM CreateAccessKey responses.
 *
 * @see    IAMClient::createAccessKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAccessKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateAccessKeyResponsePrivate(this), parent)
{
    setRequest(new CreateAccessKeyRequest(request));
    setReply(reply);
}

const CreateAccessKeyRequest * CreateAccessKeyResponse::request() const
{
    Q_D(const CreateAccessKeyResponse);
    return static_cast<const CreateAccessKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateAccessKey response.
 *
 * @param  response  Response to parse.
 */
void CreateAccessKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAccessKeyResponsePrivate
 *
 * @brief  Private implementation for CreateAccessKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccessKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAccessKeyResponse instance.
 */
CreateAccessKeyResponsePrivate::CreateAccessKeyResponsePrivate(
    CreateAccessKeyQueueResponse * const q) : CreateAccessKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateAccessKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAccessKeyResponsePrivate::CreateAccessKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
