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

#include "deleteretentionpolicyresponse.h"
#include "deleteretentionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteRetentionPolicyResponse
 *
 * @brief  Handles CloudWatchLogs DeleteRetentionPolicy responses.
 *
 * @see    CloudWatchLogsClient::deleteRetentionPolicy
 */

/**
 * @brief  Constructs a new DeleteRetentionPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRetentionPolicyResponse::DeleteRetentionPolicyResponse(
        const DeleteRetentionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteRetentionPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRetentionPolicyRequest(request));
    setReply(reply);
}

const DeleteRetentionPolicyRequest * DeleteRetentionPolicyResponse::request() const
{
    Q_D(const DeleteRetentionPolicyResponse);
    return static_cast<const DeleteRetentionPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteRetentionPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteRetentionPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRetentionPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteRetentionPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRetentionPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRetentionPolicyResponse instance.
 */
DeleteRetentionPolicyResponsePrivate::DeleteRetentionPolicyResponsePrivate(
    DeleteRetentionPolicyQueueResponse * const q) : DeleteRetentionPolicyPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteRetentionPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRetentionPolicyResponsePrivate::DeleteRetentionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRetentionPolicyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
