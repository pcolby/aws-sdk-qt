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

#include "getactivenamesresponse.h"
#include "getactivenamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetActiveNamesResponse
 *
 * @brief  Handles Lightsail GetActiveNames responses.
 *
 * @see    LightsailClient::getActiveNames
 */

/**
 * @brief  Constructs a new GetActiveNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetActiveNamesResponse::GetActiveNamesResponse(
        const GetActiveNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetActiveNamesResponsePrivate(this), parent)
{
    setRequest(new GetActiveNamesRequest(request));
    setReply(reply);
}

const GetActiveNamesRequest * GetActiveNamesResponse::request() const
{
    Q_D(const GetActiveNamesResponse);
    return static_cast<const GetActiveNamesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetActiveNames response.
 *
 * @param  response  Response to parse.
 */
void GetActiveNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetActiveNamesResponsePrivate
 *
 * @brief  Private implementation for GetActiveNamesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetActiveNamesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetActiveNamesResponse instance.
 */
GetActiveNamesResponsePrivate::GetActiveNamesResponsePrivate(
    GetActiveNamesQueueResponse * const q) : GetActiveNamesPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetActiveNamesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetActiveNamesResponsePrivate::GetActiveNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetActiveNamesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
