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

#include "deletemetricfilterresponse.h"
#include "deletemetricfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteMetricFilterResponse
 *
 * @brief  Handles CloudWatchLogs DeleteMetricFilter responses.
 *
 * @see    CloudWatchLogsClient::deleteMetricFilter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMetricFilterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteMetricFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteMetricFilterRequest(request));
    setReply(reply);
}

const DeleteMetricFilterRequest * DeleteMetricFilterResponse::request() const
{
    Q_D(const DeleteMetricFilterResponse);
    return static_cast<const DeleteMetricFilterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteMetricFilter response.
 *
 * @param  response  Response to parse.
 */
void DeleteMetricFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMetricFilterResponsePrivate
 *
 * @brief  Private implementation for DeleteMetricFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMetricFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMetricFilterResponse instance.
 */
DeleteMetricFilterResponsePrivate::DeleteMetricFilterResponsePrivate(
    DeleteMetricFilterQueueResponse * const q) : DeleteMetricFilterPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteMetricFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMetricFilterResponsePrivate::DeleteMetricFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMetricFilterResponse"));
    /// @todo
}
