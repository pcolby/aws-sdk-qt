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

#include "generatedatakeywithoutplaintextresponse.h"
#include "generatedatakeywithoutplaintextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  GenerateDataKeyWithoutPlaintextResponse
 *
 * @brief  Handles KMS GenerateDataKeyWithoutPlaintext responses.
 *
 * @see    KMSClient::generateDataKeyWithoutPlaintext
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateDataKeyWithoutPlaintextResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GenerateDataKeyWithoutPlaintextResponsePrivate(this), parent)
{
    setRequest(new GenerateDataKeyWithoutPlaintextRequest(request));
    setReply(reply);
}

const GenerateDataKeyWithoutPlaintextRequest * GenerateDataKeyWithoutPlaintextResponse::request() const
{
    Q_D(const GenerateDataKeyWithoutPlaintextResponse);
    return static_cast<const GenerateDataKeyWithoutPlaintextRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GenerateDataKeyWithoutPlaintext response.
 *
 * @param  response  Response to parse.
 */
void GenerateDataKeyWithoutPlaintextResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateDataKeyWithoutPlaintextResponsePrivate
 *
 * @brief  Private implementation for GenerateDataKeyWithoutPlaintextResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateDataKeyWithoutPlaintextResponse instance.
 */
GenerateDataKeyWithoutPlaintextResponsePrivate::GenerateDataKeyWithoutPlaintextResponsePrivate(
    GenerateDataKeyWithoutPlaintextQueueResponse * const q) : GenerateDataKeyWithoutPlaintextPrivate(q)
{

}

/**
 * @brief  Parse an KMS GenerateDataKeyWithoutPlaintextResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateDataKeyWithoutPlaintextResponsePrivate::GenerateDataKeyWithoutPlaintextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateDataKeyWithoutPlaintextResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
