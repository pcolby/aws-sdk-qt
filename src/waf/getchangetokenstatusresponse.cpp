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

#include "getchangetokenstatusresponse.h"
#include "getchangetokenstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetChangeTokenStatusResponse
 *
 * @brief  Handles WAF GetChangeTokenStatus responses.
 *
 * @see    WAFClient::getChangeTokenStatus
 */

/**
 * @brief  Constructs a new GetChangeTokenStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeTokenStatusResponse::GetChangeTokenStatusResponse(
        const GetChangeTokenStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetChangeTokenStatusResponsePrivate(this), parent)
{
    setRequest(new GetChangeTokenStatusRequest(request));
    setReply(reply);
}

const GetChangeTokenStatusRequest * GetChangeTokenStatusResponse::request() const
{
    Q_D(const GetChangeTokenStatusResponse);
    return static_cast<const GetChangeTokenStatusRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetChangeTokenStatus response.
 *
 * @param  response  Response to parse.
 */
void GetChangeTokenStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetChangeTokenStatusResponsePrivate
 *
 * @brief  Private implementation for GetChangeTokenStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetChangeTokenStatusResponse instance.
 */
GetChangeTokenStatusResponsePrivate::GetChangeTokenStatusResponsePrivate(
    GetChangeTokenStatusQueueResponse * const q) : GetChangeTokenStatusPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetChangeTokenStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetChangeTokenStatusResponsePrivate::GetChangeTokenStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangeTokenStatusResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
