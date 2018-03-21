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

#include "generatedatakeyresponse.h"
#include "generatedatakeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  GenerateDataKeyResponse
 *
 * @brief  Handles KMS GenerateDataKey responses.
 *
 * @see    KMSClient::generateDataKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateDataKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GenerateDataKeyResponsePrivate(this), parent)
{
    setRequest(new GenerateDataKeyRequest(request));
    setReply(reply);
}

const GenerateDataKeyRequest * GenerateDataKeyResponse::request() const
{
    Q_D(const GenerateDataKeyResponse);
    return static_cast<const GenerateDataKeyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GenerateDataKey response.
 *
 * @param  response  Response to parse.
 */
void GenerateDataKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateDataKeyResponsePrivate
 *
 * @brief  Private implementation for GenerateDataKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateDataKeyResponse instance.
 */
GenerateDataKeyResponsePrivate::GenerateDataKeyResponsePrivate(
    GenerateDataKeyQueueResponse * const q) : GenerateDataKeyPrivate(q)
{

}

/**
 * @brief  Parse an KMS GenerateDataKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateDataKeyResponsePrivate::GenerateDataKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateDataKeyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
