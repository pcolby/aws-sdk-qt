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

#include "deletescheduledactionresponse.h"
#include "deletescheduledactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DeleteScheduledActionResponse
 *
 * @brief  Handles AutoScaling DeleteScheduledAction responses.
 *
 * @see    AutoScalingClient::deleteScheduledAction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteScheduledActionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteScheduledActionResponsePrivate(this), parent)
{
    setRequest(new DeleteScheduledActionRequest(request));
    setReply(reply);
}

const DeleteScheduledActionRequest * DeleteScheduledActionResponse::request() const
{
    Q_D(const DeleteScheduledActionResponse);
    return static_cast<const DeleteScheduledActionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DeleteScheduledAction response.
 *
 * @param  response  Response to parse.
 */
void DeleteScheduledActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteScheduledActionResponsePrivate
 *
 * @brief  Private implementation for DeleteScheduledActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScheduledActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteScheduledActionResponse instance.
 */
DeleteScheduledActionResponsePrivate::DeleteScheduledActionResponsePrivate(
    DeleteScheduledActionQueueResponse * const q) : DeleteScheduledActionPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DeleteScheduledActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteScheduledActionResponsePrivate::DeleteScheduledActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduledActionResponse"));
    /// @todo
}
