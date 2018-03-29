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

#include "decryptresponse.h"
#include "decryptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  DecryptResponse
 *
 * @brief  Handles KMS Decrypt responses.
 *
 * @see    KMSClient::decrypt
 */

/**
 * @brief  Constructs a new DecryptResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DecryptResponse::DecryptResponse(
        const DecryptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new DecryptResponsePrivate(this), parent)
{
    setRequest(new DecryptRequest(request));
    setReply(reply);
}

const DecryptRequest * DecryptResponse::request() const
{
    Q_D(const DecryptResponse);
    return static_cast<const DecryptRequest *>(d->request);
}

/**
 * @brief  Parse a KMS Decrypt response.
 *
 * @param  response  Response to parse.
 */
void DecryptResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DecryptResponsePrivate
 *
 * @brief  Private implementation for DecryptResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecryptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DecryptResponse instance.
 */
DecryptResponsePrivate::DecryptResponsePrivate(
    DecryptQueueResponse * const q) : DecryptPrivate(q)
{

}

/**
 * @brief  Parse an KMS DecryptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DecryptResponsePrivate::DecryptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecryptResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
