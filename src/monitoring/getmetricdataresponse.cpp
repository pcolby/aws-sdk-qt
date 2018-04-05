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

#include "getmetricdataresponse.h"
#include "getmetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  GetMetricDataResponse
 *
 * @brief  Handles CloudWatch GetMetricData responses.
 *
 * @see    CloudWatchClient::getMetricData
 */

/**
 * @brief  Constructs a new GetMetricDataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMetricDataResponse::GetMetricDataResponse(
        const GetMetricDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetMetricDataResponsePrivate(this), parent)
{
    setRequest(new GetMetricDataRequest(request));
    setReply(reply);
}

const GetMetricDataRequest * GetMetricDataResponse::request() const
{
    Q_D(const GetMetricDataResponse);
    return static_cast<const GetMetricDataRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch GetMetricData response.
 *
 * @param  response  Response to parse.
 */
void GetMetricDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMetricDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMetricDataResponsePrivate
 *
 * @brief  Private implementation for GetMetricDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMetricDataResponse instance.
 */
GetMetricDataResponsePrivate::GetMetricDataResponsePrivate(
    GetMetricDataResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch GetMetricDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMetricDataResponsePrivate::parseGetMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricDataResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
