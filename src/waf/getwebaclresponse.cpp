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

#include "getwebaclresponse.h"
#include "getwebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetWebACLResponse
 *
 * @brief  Handles WAF GetWebACL responses.
 *
 * @see    WAFClient::getWebACL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWebACLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetWebACLResponsePrivate(this), parent)
{
    setRequest(new GetWebACLRequest(request));
    setReply(reply);
}

const GetWebACLRequest * GetWebACLResponse::request() const
{
    Q_D(const GetWebACLResponse);
    return static_cast<const GetWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetWebACL response.
 *
 * @param  response  Response to parse.
 */
void GetWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetWebACLResponsePrivate
 *
 * @brief  Private implementation for GetWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetWebACLResponse instance.
 */
GetWebACLResponsePrivate::GetWebACLResponsePrivate(
    GetWebACLQueueResponse * const q) : GetWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetWebACLResponsePrivate::GetWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebACLResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
