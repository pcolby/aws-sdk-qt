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

#include "getsecretvalueresponse.h"
#include "getsecretvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  GetSecretValueResponse
 *
 * @brief  Handles SecretsManager GetSecretValue responses.
 *
 * @see    SecretsManagerClient::getSecretValue
 */

/**
 * @brief  Constructs a new GetSecretValueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSecretValueResponse::GetSecretValueResponse(
        const GetSecretValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new GetSecretValueResponsePrivate(this), parent)
{
    setRequest(new GetSecretValueRequest(request));
    setReply(reply);
}

const GetSecretValueRequest * GetSecretValueResponse::request() const
{
    Q_D(const GetSecretValueResponse);
    return static_cast<const GetSecretValueRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager GetSecretValue response.
 *
 * @param  response  Response to parse.
 */
void GetSecretValueResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSecretValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSecretValueResponsePrivate
 *
 * @brief  Private implementation for GetSecretValueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSecretValueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSecretValueResponse instance.
 */
GetSecretValueResponsePrivate::GetSecretValueResponsePrivate(
    GetSecretValueResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager GetSecretValueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSecretValueResponsePrivate::parseGetSecretValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSecretValueResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
