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

#include "modifyidformatresponse.h"
#include "modifyidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyIdFormatResponse
 *
 * @brief  Handles EC2 ModifyIdFormat responses.
 *
 * @see    EC2Client::modifyIdFormat
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyIdFormatResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyIdFormatResponsePrivate(this), parent)
{
    setRequest(new ModifyIdFormatRequest(request));
    setReply(reply);
}

const ModifyIdFormatRequest * ModifyIdFormatResponse::request() const
{
    Q_D(const ModifyIdFormatResponse);
    return static_cast<const ModifyIdFormatRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyIdFormat response.
 *
 * @param  response  Response to parse.
 */
void ModifyIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyIdFormatResponsePrivate
 *
 * @brief  Private implementation for ModifyIdFormatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyIdFormatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyIdFormatResponse instance.
 */
ModifyIdFormatResponsePrivate::ModifyIdFormatResponsePrivate(
    ModifyIdFormatQueueResponse * const q) : ModifyIdFormatPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyIdFormatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyIdFormatResponsePrivate::ModifyIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
