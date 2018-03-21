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

#include "putpermissionresponse.h"
#include "putpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  PutPermissionResponse
 *
 * @brief  Handles CloudWatchEvents PutPermission responses.
 *
 * @see    CloudWatchEventsClient::putPermission
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutPermissionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new PutPermissionResponsePrivate(this), parent)
{
    setRequest(new PutPermissionRequest(request));
    setReply(reply);
}

const PutPermissionRequest * PutPermissionResponse::request() const
{
    Q_D(const PutPermissionResponse);
    return static_cast<const PutPermissionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents PutPermission response.
 *
 * @param  response  Response to parse.
 */
void PutPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutPermissionResponsePrivate
 *
 * @brief  Private implementation for PutPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutPermissionResponse instance.
 */
PutPermissionResponsePrivate::PutPermissionResponsePrivate(
    PutPermissionQueueResponse * const q) : PutPermissionPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents PutPermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutPermissionResponsePrivate::PutPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPermissionResponse"));
    /// @todo
}
