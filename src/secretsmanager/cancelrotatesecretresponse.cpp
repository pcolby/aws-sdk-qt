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

#include "cancelrotatesecretresponse.h"
#include "cancelrotatesecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  CancelRotateSecretResponse
 *
 * @brief  Handles SecretsManager CancelRotateSecret responses.
 *
 * @see    SecretsManagerClient::cancelRotateSecret
 */

/**
 * @brief  Constructs a new CancelRotateSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelRotateSecretResponse::CancelRotateSecretResponse(
        const CancelRotateSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new CancelRotateSecretResponsePrivate(this), parent)
{
    setRequest(new CancelRotateSecretRequest(request));
    setReply(reply);
}

const CancelRotateSecretRequest * CancelRotateSecretResponse::request() const
{
    Q_D(const CancelRotateSecretResponse);
    return static_cast<const CancelRotateSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager CancelRotateSecret response.
 *
 * @param  response  Response to parse.
 */
void CancelRotateSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelRotateSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelRotateSecretResponsePrivate
 *
 * @brief  Private implementation for CancelRotateSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelRotateSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelRotateSecretResponse instance.
 */
CancelRotateSecretResponsePrivate::CancelRotateSecretResponsePrivate(
    CancelRotateSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager CancelRotateSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelRotateSecretResponsePrivate::parseCancelRotateSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelRotateSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
