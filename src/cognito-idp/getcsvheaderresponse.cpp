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

#include "getcsvheaderresponse.h"
#include "getcsvheaderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GetCSVHeaderResponse
 *
 * @brief  Handles CognitoIdentityProvider GetCSVHeader responses.
 *
 * @see    CognitoIdentityProviderClient::getCSVHeader
 */

/**
 * @brief  Constructs a new GetCSVHeaderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCSVHeaderResponse::GetCSVHeaderResponse(
        const GetCSVHeaderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetCSVHeaderResponsePrivate(this), parent)
{
    setRequest(new GetCSVHeaderRequest(request));
    setReply(reply);
}

const GetCSVHeaderRequest * GetCSVHeaderResponse::request() const
{
    Q_D(const GetCSVHeaderResponse);
    return static_cast<const GetCSVHeaderRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetCSVHeader response.
 *
 * @param  response  Response to parse.
 */
void GetCSVHeaderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCSVHeaderResponsePrivate
 *
 * @brief  Private implementation for GetCSVHeaderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCSVHeaderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCSVHeaderResponse instance.
 */
GetCSVHeaderResponsePrivate::GetCSVHeaderResponsePrivate(
    GetCSVHeaderQueueResponse * const q) : GetCSVHeaderPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetCSVHeaderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCSVHeaderResponsePrivate::GetCSVHeaderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCSVHeaderResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
