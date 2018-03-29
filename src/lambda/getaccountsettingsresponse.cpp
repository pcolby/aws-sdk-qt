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

#include "getaccountsettingsresponse.h"
#include "getaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  GetAccountSettingsResponse
 *
 * @brief  Handles Lambda GetAccountSettings responses.
 *
 * @see    LambdaClient::getAccountSettings
 */

/**
 * @brief  Constructs a new GetAccountSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountSettingsResponse::GetAccountSettingsResponse(
        const GetAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new GetAccountSettingsRequest(request));
    setReply(reply);
}

const GetAccountSettingsRequest * GetAccountSettingsResponse::request() const
{
    Q_D(const GetAccountSettingsResponse);
    return static_cast<const GetAccountSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetAccountSettings response.
 *
 * @param  response  Response to parse.
 */
void GetAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountSettingsResponsePrivate
 *
 * @brief  Private implementation for GetAccountSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountSettingsResponse instance.
 */
GetAccountSettingsResponsePrivate::GetAccountSettingsResponsePrivate(
    GetAccountSettingsResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetAccountSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountSettingsResponsePrivate::parseGetAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSettingsResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
