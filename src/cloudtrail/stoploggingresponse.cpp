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

#include "stoploggingresponse.h"
#include "stoploggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  StopLoggingResponse
 *
 * @brief  Handles CloudTrail StopLogging responses.
 *
 * @see    CloudTrailClient::stopLogging
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopLoggingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new StopLoggingResponsePrivate(this), parent)
{
    setRequest(new StopLoggingRequest(request));
    setReply(reply);
}

const StopLoggingRequest * StopLoggingResponse::request() const
{
    Q_D(const StopLoggingResponse);
    return static_cast<const StopLoggingRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail StopLogging response.
 *
 * @param  response  Response to parse.
 */
void StopLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopLoggingResponsePrivate
 *
 * @brief  Private implementation for StopLoggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopLoggingResponse instance.
 */
StopLoggingResponsePrivate::StopLoggingResponsePrivate(
    StopLoggingQueueResponse * const q) : StopLoggingPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail StopLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopLoggingResponsePrivate::StopLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopLoggingResponse"));
    /// @todo
}
