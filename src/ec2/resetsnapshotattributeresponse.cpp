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

#include "resetsnapshotattributeresponse.h"
#include "resetsnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ResetSnapshotAttributeResponse
 *
 * @brief  Handles EC2 ResetSnapshotAttribute responses.
 *
 * @see    EC2Client::resetSnapshotAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetSnapshotAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ResetSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetSnapshotAttributeRequest(request));
    setReply(reply);
}

const ResetSnapshotAttributeRequest * ResetSnapshotAttributeResponse::request() const
{
    Q_D(const ResetSnapshotAttributeResponse);
    return static_cast<const ResetSnapshotAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ResetSnapshotAttribute response.
 *
 * @param  response  Response to parse.
 */
void ResetSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetSnapshotAttributeResponsePrivate
 *
 * @brief  Private implementation for ResetSnapshotAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetSnapshotAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetSnapshotAttributeResponse instance.
 */
ResetSnapshotAttributeResponsePrivate::ResetSnapshotAttributeResponsePrivate(
    ResetSnapshotAttributeQueueResponse * const q) : ResetSnapshotAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ResetSnapshotAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetSnapshotAttributeResponsePrivate::ResetSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetSnapshotAttributeResponse"));
    /// @todo
}
