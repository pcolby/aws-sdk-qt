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

#include "listmetricsresponse.h"
#include "listmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  ListMetricsResponse
 *
 * @brief  Handles CloudWatch ListMetrics responses.
 *
 * @see    CloudWatchClient::listMetrics
 */

/**
 * @brief  Constructs a new ListMetricsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMetricsResponse::ListMetricsResponse(
        const ListMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new ListMetricsResponsePrivate(this), parent)
{
    setRequest(new ListMetricsRequest(request));
    setReply(reply);
}

const ListMetricsRequest * ListMetricsResponse::request() const
{
    Q_D(const ListMetricsResponse);
    return static_cast<const ListMetricsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch ListMetrics response.
 *
 * @param  response  Response to parse.
 */
void ListMetricsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListMetricsResponsePrivate
 *
 * @brief  Private implementation for ListMetricsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMetricsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListMetricsResponse instance.
 */
ListMetricsResponsePrivate::ListMetricsResponsePrivate(
    ListMetricsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch ListMetricsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListMetricsResponsePrivate::ListMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMetricsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
