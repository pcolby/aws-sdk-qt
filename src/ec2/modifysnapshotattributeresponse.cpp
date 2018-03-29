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

#include "modifysnapshotattributeresponse.h"
#include "modifysnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifySnapshotAttributeResponse
 *
 * @brief  Handles EC2 ModifySnapshotAttribute responses.
 *
 * @see    EC2Client::modifySnapshotAttribute
 */

/**
 * @brief  Constructs a new ModifySnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifySnapshotAttributeResponse::ModifySnapshotAttributeResponse(
        const ModifySnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifySnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifySnapshotAttributeRequest(request));
    setReply(reply);
}

const ModifySnapshotAttributeRequest * ModifySnapshotAttributeResponse::request() const
{
    Q_D(const ModifySnapshotAttributeResponse);
    return static_cast<const ModifySnapshotAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifySnapshotAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifySnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifySnapshotAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifySnapshotAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySnapshotAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifySnapshotAttributeResponse instance.
 */
ModifySnapshotAttributeResponsePrivate::ModifySnapshotAttributeResponsePrivate(
    ModifySnapshotAttributeQueueResponse * const q) : ModifySnapshotAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifySnapshotAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifySnapshotAttributeResponsePrivate::ModifySnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySnapshotAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
