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

#include "getsampledrequestsresponse.h"
#include "getsampledrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetSampledRequestsResponse
 *
 * @brief  Handles WAFRegional GetSampledRequests responses.
 *
 * @see    WAFRegionalClient::getSampledRequests
 */

/**
 * @brief  Constructs a new GetSampledRequestsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSampledRequestsResponse::GetSampledRequestsResponse(
        const GetSampledRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetSampledRequestsResponsePrivate(this), parent)
{
    setRequest(new GetSampledRequestsRequest(request));
    setReply(reply);
}

const GetSampledRequestsRequest * GetSampledRequestsResponse::request() const
{
    Q_D(const GetSampledRequestsResponse);
    return static_cast<const GetSampledRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetSampledRequests response.
 *
 * @param  response  Response to parse.
 */
void GetSampledRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSampledRequestsResponsePrivate
 *
 * @brief  Private implementation for GetSampledRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSampledRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSampledRequestsResponse instance.
 */
GetSampledRequestsResponsePrivate::GetSampledRequestsResponsePrivate(
    GetSampledRequestsQueueResponse * const q) : GetSampledRequestsPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetSampledRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSampledRequestsResponsePrivate::GetSampledRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSampledRequestsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
