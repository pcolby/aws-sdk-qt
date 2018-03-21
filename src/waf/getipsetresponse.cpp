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

#include "getipsetresponse.h"
#include "getipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetIPSetResponse
 *
 * @brief  Handles WAF GetIPSet responses.
 *
 * @see    WAFClient::getIPSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIPSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetIPSetResponsePrivate(this), parent)
{
    setRequest(new GetIPSetRequest(request));
    setReply(reply);
}

const GetIPSetRequest * GetIPSetResponse::request() const
{
    Q_D(const GetIPSetResponse);
    return static_cast<const GetIPSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetIPSet response.
 *
 * @param  response  Response to parse.
 */
void GetIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIPSetResponsePrivate
 *
 * @brief  Private implementation for GetIPSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIPSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIPSetResponse instance.
 */
GetIPSetResponsePrivate::GetIPSetResponsePrivate(
    GetIPSetQueueResponse * const q) : GetIPSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetIPSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIPSetResponsePrivate::GetIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIPSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
