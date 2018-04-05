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

#include "getrandompasswordresponse.h"
#include "getrandompasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  GetRandomPasswordResponse
 *
 * @brief  Handles SecretsManager GetRandomPassword responses.
 *
 * @see    SecretsManagerClient::getRandomPassword
 */

/**
 * @brief  Constructs a new GetRandomPasswordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRandomPasswordResponse::GetRandomPasswordResponse(
        const GetRandomPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new GetRandomPasswordResponsePrivate(this), parent)
{
    setRequest(new GetRandomPasswordRequest(request));
    setReply(reply);
}

const GetRandomPasswordRequest * GetRandomPasswordResponse::request() const
{
    Q_D(const GetRandomPasswordResponse);
    return static_cast<const GetRandomPasswordRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager GetRandomPassword response.
 *
 * @param  response  Response to parse.
 */
void GetRandomPasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRandomPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRandomPasswordResponsePrivate
 *
 * @brief  Private implementation for GetRandomPasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRandomPasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRandomPasswordResponse instance.
 */
GetRandomPasswordResponsePrivate::GetRandomPasswordResponsePrivate(
    GetRandomPasswordResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager GetRandomPasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRandomPasswordResponsePrivate::parseGetRandomPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRandomPasswordResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
