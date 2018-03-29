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

#include "getdiscoveredresourcecountsresponse.h"
#include "getdiscoveredresourcecountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetDiscoveredResourceCountsResponse
 *
 * @brief  Handles ConfigService GetDiscoveredResourceCounts responses.
 *
 * @see    ConfigServiceClient::getDiscoveredResourceCounts
 */

/**
 * @brief  Constructs a new GetDiscoveredResourceCountsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiscoveredResourceCountsResponse::GetDiscoveredResourceCountsResponse(
        const GetDiscoveredResourceCountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetDiscoveredResourceCountsResponsePrivate(this), parent)
{
    setRequest(new GetDiscoveredResourceCountsRequest(request));
    setReply(reply);
}

const GetDiscoveredResourceCountsRequest * GetDiscoveredResourceCountsResponse::request() const
{
    Q_D(const GetDiscoveredResourceCountsResponse);
    return static_cast<const GetDiscoveredResourceCountsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetDiscoveredResourceCounts response.
 *
 * @param  response  Response to parse.
 */
void GetDiscoveredResourceCountsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiscoveredResourceCountsResponsePrivate
 *
 * @brief  Private implementation for GetDiscoveredResourceCountsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoveredResourceCountsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiscoveredResourceCountsResponse instance.
 */
GetDiscoveredResourceCountsResponsePrivate::GetDiscoveredResourceCountsResponsePrivate(
    GetDiscoveredResourceCountsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetDiscoveredResourceCountsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiscoveredResourceCountsResponsePrivate::GetDiscoveredResourceCountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiscoveredResourceCountsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
