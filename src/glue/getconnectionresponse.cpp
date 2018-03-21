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

#include "getconnectionresponse.h"
#include "getconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetConnectionResponse
 *
 * @brief  Handles Glue GetConnection responses.
 *
 * @see    GlueClient::getConnection
 */

/**
 * @brief  Constructs a new GetConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConnectionResponse::GetConnectionResponse(
        const GetConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetConnectionResponsePrivate(this), parent)
{
    setRequest(new GetConnectionRequest(request));
    setReply(reply);
}

const GetConnectionRequest * GetConnectionResponse::request() const
{
    Q_D(const GetConnectionResponse);
    return static_cast<const GetConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetConnection response.
 *
 * @param  response  Response to parse.
 */
void GetConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConnectionResponsePrivate
 *
 * @brief  Private implementation for GetConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConnectionResponse instance.
 */
GetConnectionResponsePrivate::GetConnectionResponsePrivate(
    GetConnectionQueueResponse * const q) : GetConnectionPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConnectionResponsePrivate::GetConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
