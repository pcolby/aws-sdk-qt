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

#include "describependingaggregationrequestsresponse.h"
#include "describependingaggregationrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribePendingAggregationRequestsResponse
 *
 * @brief  Handles ConfigService DescribePendingAggregationRequests responses.
 *
 * @see    ConfigServiceClient::describePendingAggregationRequests
 */

/**
 * @brief  Constructs a new DescribePendingAggregationRequestsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePendingAggregationRequestsResponse::DescribePendingAggregationRequestsResponse(
        const DescribePendingAggregationRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribePendingAggregationRequestsResponsePrivate(this), parent)
{
    setRequest(new DescribePendingAggregationRequestsRequest(request));
    setReply(reply);
}

const DescribePendingAggregationRequestsRequest * DescribePendingAggregationRequestsResponse::request() const
{
    Q_D(const DescribePendingAggregationRequestsResponse);
    return static_cast<const DescribePendingAggregationRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribePendingAggregationRequests response.
 *
 * @param  response  Response to parse.
 */
void DescribePendingAggregationRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribePendingAggregationRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePendingAggregationRequestsResponsePrivate
 *
 * @brief  Private implementation for DescribePendingAggregationRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingAggregationRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePendingAggregationRequestsResponse instance.
 */
DescribePendingAggregationRequestsResponsePrivate::DescribePendingAggregationRequestsResponsePrivate(
    DescribePendingAggregationRequestsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribePendingAggregationRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePendingAggregationRequestsResponsePrivate::parseDescribePendingAggregationRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePendingAggregationRequestsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
