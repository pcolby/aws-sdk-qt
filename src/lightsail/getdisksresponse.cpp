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

#include "getdisksresponse.h"
#include "getdisksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetDisksResponse
 *
 * @brief  Handles Lightsail GetDisks responses.
 *
 * @see    LightsailClient::getDisks
 */

/**
 * @brief  Constructs a new GetDisksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDisksResponse::GetDisksResponse(
        const GetDisksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDisksResponsePrivate(this), parent)
{
    setRequest(new GetDisksRequest(request));
    setReply(reply);
}

const GetDisksRequest * GetDisksResponse::request() const
{
    Q_D(const GetDisksResponse);
    return static_cast<const GetDisksRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDisks response.
 *
 * @param  response  Response to parse.
 */
void GetDisksResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDisksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDisksResponsePrivate
 *
 * @brief  Private implementation for GetDisksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDisksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDisksResponse instance.
 */
GetDisksResponsePrivate::GetDisksResponsePrivate(
    GetDisksResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDisksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDisksResponsePrivate::parseGetDisksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDisksResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
