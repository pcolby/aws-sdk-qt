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

#include "createkeyresponse.h"
#include "createkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  CreateKeyResponse
 *
 * @brief  Handles KMS CreateKey responses.
 *
 * @see    KMSClient::createKey
 */

/**
 * @brief  Constructs a new CreateKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeyResponse::CreateKeyResponse(
        const CreateKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new CreateKeyResponsePrivate(this), parent)
{
    setRequest(new CreateKeyRequest(request));
    setReply(reply);
}

const CreateKeyRequest * CreateKeyResponse::request() const
{
    Q_D(const CreateKeyResponse);
    return static_cast<const CreateKeyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS CreateKey response.
 *
 * @param  response  Response to parse.
 */
void CreateKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateKeyResponsePrivate
 *
 * @brief  Private implementation for CreateKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateKeyResponse instance.
 */
CreateKeyResponsePrivate::CreateKeyResponsePrivate(
    CreateKeyResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS CreateKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateKeyResponsePrivate::CreateKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
