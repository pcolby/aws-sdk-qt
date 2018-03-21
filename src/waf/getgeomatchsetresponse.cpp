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

#include "getgeomatchsetresponse.h"
#include "getgeomatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetGeoMatchSetResponse
 *
 * @brief  Handles WAF GetGeoMatchSet responses.
 *
 * @see    WAFClient::getGeoMatchSet
 */

/**
 * @brief  Constructs a new GetGeoMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGeoMatchSetResponse::GetGeoMatchSetResponse(
        const GetGeoMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetGeoMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetGeoMatchSetRequest(request));
    setReply(reply);
}

const GetGeoMatchSetRequest * GetGeoMatchSetResponse::request() const
{
    Q_D(const GetGeoMatchSetResponse);
    return static_cast<const GetGeoMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetGeoMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetGeoMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGeoMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetGeoMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGeoMatchSetResponse instance.
 */
GetGeoMatchSetResponsePrivate::GetGeoMatchSetResponsePrivate(
    GetGeoMatchSetQueueResponse * const q) : GetGeoMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetGeoMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGeoMatchSetResponsePrivate::GetGeoMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeoMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
