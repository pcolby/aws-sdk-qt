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

#include "getaccountauthorizationdetailsresponse.h"
#include "getaccountauthorizationdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetAccountAuthorizationDetailsResponse
 *
 * @brief  Handles IAM GetAccountAuthorizationDetails responses.
 *
 * @see    IAMClient::getAccountAuthorizationDetails
 */

/**
 * @brief  Constructs a new GetAccountAuthorizationDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountAuthorizationDetailsResponse::GetAccountAuthorizationDetailsResponse(
        const GetAccountAuthorizationDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetAccountAuthorizationDetailsResponsePrivate(this), parent)
{
    setRequest(new GetAccountAuthorizationDetailsRequest(request));
    setReply(reply);
}

const GetAccountAuthorizationDetailsRequest * GetAccountAuthorizationDetailsResponse::request() const
{
    Q_D(const GetAccountAuthorizationDetailsResponse);
    return static_cast<const GetAccountAuthorizationDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetAccountAuthorizationDetails response.
 *
 * @param  response  Response to parse.
 */
void GetAccountAuthorizationDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountAuthorizationDetailsResponsePrivate
 *
 * @brief  Private implementation for GetAccountAuthorizationDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountAuthorizationDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountAuthorizationDetailsResponse instance.
 */
GetAccountAuthorizationDetailsResponsePrivate::GetAccountAuthorizationDetailsResponsePrivate(
    GetAccountAuthorizationDetailsQueueResponse * const q) : GetAccountAuthorizationDetailsPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetAccountAuthorizationDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountAuthorizationDetailsResponsePrivate::GetAccountAuthorizationDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountAuthorizationDetailsResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
