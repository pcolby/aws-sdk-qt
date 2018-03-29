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

#include "getwebaclresponse.h"
#include "getwebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetWebACLResponse
 *
 * @brief  Handles WAFRegional GetWebACL responses.
 *
 * @see    WAFRegionalClient::getWebACL
 */

/**
 * @brief  Constructs a new GetWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWebACLResponse::GetWebACLResponse(
        const GetWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetWebACLResponsePrivate(this), parent)
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
 * @brief  Parse a WAFRegional GetWebACL response.
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
 * @brief  Parse an WAFRegional GetWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetWebACLResponsePrivate::GetWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebACLResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
