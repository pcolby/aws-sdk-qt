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

#include "deletesubscriptionfilterresponse.h"
#include "deletesubscriptionfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteSubscriptionFilterResponse
 *
 * @brief  Handles CloudWatchLogs DeleteSubscriptionFilter responses.
 *
 * @see    CloudWatchLogsClient::deleteSubscriptionFilter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriptionFilterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteSubscriptionFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionFilterRequest(request));
    setReply(reply);
}

const DeleteSubscriptionFilterRequest * DeleteSubscriptionFilterResponse::request() const
{
    Q_D(const DeleteSubscriptionFilterResponse);
    return static_cast<const DeleteSubscriptionFilterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteSubscriptionFilter response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubscriptionFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionFilterResponsePrivate
 *
 * @brief  Private implementation for DeleteSubscriptionFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubscriptionFilterResponse instance.
 */
DeleteSubscriptionFilterResponsePrivate::DeleteSubscriptionFilterResponsePrivate(
    DeleteSubscriptionFilterQueueResponse * const q) : DeleteSubscriptionFilterPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteSubscriptionFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubscriptionFilterResponsePrivate::DeleteSubscriptionFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionFilterResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
