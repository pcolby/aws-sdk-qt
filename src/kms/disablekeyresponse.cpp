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

#include "disablekeyresponse.h"
#include "disablekeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  DisableKeyResponse
 *
 * @brief  Handles KMS DisableKey responses.
 *
 * @see    KMSClient::disableKey
 */

/**
 * @brief  Constructs a new DisableKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableKeyResponse::DisableKeyResponse(
        const DisableKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new DisableKeyResponsePrivate(this), parent)
{
    setRequest(new DisableKeyRequest(request));
    setReply(reply);
}

const DisableKeyRequest * DisableKeyResponse::request() const
{
    Q_D(const DisableKeyResponse);
    return static_cast<const DisableKeyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS DisableKey response.
 *
 * @param  response  Response to parse.
 */
void DisableKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableKeyResponsePrivate
 *
 * @brief  Private implementation for DisableKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableKeyResponse instance.
 */
DisableKeyResponsePrivate::DisableKeyResponsePrivate(
    DisableKeyResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS DisableKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableKeyResponsePrivate::DisableKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableKeyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
