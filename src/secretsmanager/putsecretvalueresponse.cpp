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

#include "putsecretvalueresponse.h"
#include "putsecretvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  PutSecretValueResponse
 *
 * @brief  Handles SecretsManager PutSecretValue responses.
 *
 * @see    SecretsManagerClient::putSecretValue
 */

/**
 * @brief  Constructs a new PutSecretValueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutSecretValueResponse::PutSecretValueResponse(
        const PutSecretValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new PutSecretValueResponsePrivate(this), parent)
{
    setRequest(new PutSecretValueRequest(request));
    setReply(reply);
}

const PutSecretValueRequest * PutSecretValueResponse::request() const
{
    Q_D(const PutSecretValueResponse);
    return static_cast<const PutSecretValueRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager PutSecretValue response.
 *
 * @param  response  Response to parse.
 */
void PutSecretValueResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutSecretValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutSecretValueResponsePrivate
 *
 * @brief  Private implementation for PutSecretValueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSecretValueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutSecretValueResponse instance.
 */
PutSecretValueResponsePrivate::PutSecretValueResponsePrivate(
    PutSecretValueResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager PutSecretValueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutSecretValueResponsePrivate::parsePutSecretValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSecretValueResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
