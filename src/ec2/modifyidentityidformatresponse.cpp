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

#include "modifyidentityidformatresponse.h"
#include "modifyidentityidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyIdentityIdFormatResponse
 *
 * @brief  Handles EC2 ModifyIdentityIdFormat responses.
 *
 * @see    EC2Client::modifyIdentityIdFormat
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyIdentityIdFormatResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyIdentityIdFormatResponsePrivate(this), parent)
{
    setRequest(new ModifyIdentityIdFormatRequest(request));
    setReply(reply);
}

const ModifyIdentityIdFormatRequest * ModifyIdentityIdFormatResponse::request() const
{
    Q_D(const ModifyIdentityIdFormatResponse);
    return static_cast<const ModifyIdentityIdFormatRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyIdentityIdFormat response.
 *
 * @param  response  Response to parse.
 */
void ModifyIdentityIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyIdentityIdFormatResponsePrivate
 *
 * @brief  Private implementation for ModifyIdentityIdFormatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyIdentityIdFormatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyIdentityIdFormatResponse instance.
 */
ModifyIdentityIdFormatResponsePrivate::ModifyIdentityIdFormatResponsePrivate(
    ModifyIdentityIdFormatQueueResponse * const q) : ModifyIdentityIdFormatPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyIdentityIdFormatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyIdentityIdFormatResponsePrivate::ModifyIdentityIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyIdentityIdFormatResponse"));
    /// @todo
}
