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

#include "generatedatakeyresponse.h"
#include "generatedatakeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GenerateDataKeyResponse
 *
 * @brief  Handles KMS GenerateDataKey responses.
 *
 * @see    KMSClient::generateDataKey
 */

/**
 * @brief  Constructs a new GenerateDataKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateDataKeyResponse::GenerateDataKeyResponse(
        const GenerateDataKeyRequest &request,
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
    Q_D(GenerateDataKeyResponse);
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
    GenerateDataKeyResponse * const q) : KMSResponsePrivate(q)
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
} // namespace QtAws
