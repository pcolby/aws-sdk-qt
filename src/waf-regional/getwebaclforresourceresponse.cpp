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

#include "getwebaclforresourceresponse.h"
#include "getwebaclforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetWebACLForResourceResponse
 *
 * @brief  Handles WAFRegional GetWebACLForResource responses.
 *
 * @see    WAFRegionalClient::getWebACLForResource
 */

/**
 * @brief  Constructs a new GetWebACLForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWebACLForResourceResponse::GetWebACLForResourceResponse(
        const GetWebACLForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetWebACLForResourceResponsePrivate(this), parent)
{
    setRequest(new GetWebACLForResourceRequest(request));
    setReply(reply);
}

const GetWebACLForResourceRequest * GetWebACLForResourceResponse::request() const
{
    Q_D(const GetWebACLForResourceResponse);
    return static_cast<const GetWebACLForResourceRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetWebACLForResource response.
 *
 * @param  response  Response to parse.
 */
void GetWebACLForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetWebACLForResourceResponsePrivate
 *
 * @brief  Private implementation for GetWebACLForResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetWebACLForResourceResponse instance.
 */
GetWebACLForResourceResponsePrivate::GetWebACLForResourceResponsePrivate(
    GetWebACLForResourceQueueResponse * const q) : GetWebACLForResourcePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetWebACLForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetWebACLForResourceResponsePrivate::GetWebACLForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebACLForResourceResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
