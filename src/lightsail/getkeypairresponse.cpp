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

#include "getkeypairresponse.h"
#include "getkeypairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetKeyPairResponse
 *
 * @brief  Handles Lightsail GetKeyPair responses.
 *
 * @see    LightsailClient::getKeyPair
 */

/**
 * @brief  Constructs a new GetKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyPairResponse::GetKeyPairResponse(
        const GetKeyPairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetKeyPairResponsePrivate(this), parent)
{
    setRequest(new GetKeyPairRequest(request));
    setReply(reply);
}

const GetKeyPairRequest * GetKeyPairResponse::request() const
{
    Q_D(const GetKeyPairResponse);
    return static_cast<const GetKeyPairRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetKeyPair response.
 *
 * @param  response  Response to parse.
 */
void GetKeyPairResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetKeyPairResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetKeyPairResponsePrivate
 *
 * @brief  Private implementation for GetKeyPairResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetKeyPairResponse instance.
 */
GetKeyPairResponsePrivate::GetKeyPairResponsePrivate(
    GetKeyPairResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetKeyPairResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetKeyPairResponsePrivate::GetKeyPairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyPairResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
