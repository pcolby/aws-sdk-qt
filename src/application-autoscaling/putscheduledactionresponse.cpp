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

#include "putscheduledactionresponse.h"
#include "putscheduledactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  PutScheduledActionResponse
 *
 * @brief  Handles ApplicationAutoScaling PutScheduledAction responses.
 *
 * @see    ApplicationAutoScalingClient::putScheduledAction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutScheduledActionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new PutScheduledActionResponsePrivate(this), parent)
{
    setRequest(new PutScheduledActionRequest(request));
    setReply(reply);
}

const PutScheduledActionRequest * PutScheduledActionResponse::request() const
{
    Q_D(const PutScheduledActionResponse);
    return static_cast<const PutScheduledActionRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling PutScheduledAction response.
 *
 * @param  response  Response to parse.
 */
void PutScheduledActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutScheduledActionResponsePrivate
 *
 * @brief  Private implementation for PutScheduledActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutScheduledActionResponse instance.
 */
PutScheduledActionResponsePrivate::PutScheduledActionResponsePrivate(
    PutScheduledActionQueueResponse * const q) : PutScheduledActionPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling PutScheduledActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutScheduledActionResponsePrivate::PutScheduledActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutScheduledActionResponse"));
    /// @todo
}
