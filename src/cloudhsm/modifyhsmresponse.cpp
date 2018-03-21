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

#include "modifyhsmresponse.h"
#include "modifyhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  ModifyHsmResponse
 *
 * @brief  Handles CloudHSM ModifyHsm responses.
 *
 * @see    CloudHSMClient::modifyHsm
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyHsmResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyHsmResponsePrivate(this), parent)
{
    setRequest(new ModifyHsmRequest(request));
    setReply(reply);
}

const ModifyHsmRequest * ModifyHsmResponse::request() const
{
    Q_D(const ModifyHsmResponse);
    return static_cast<const ModifyHsmRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ModifyHsm response.
 *
 * @param  response  Response to parse.
 */
void ModifyHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyHsmResponsePrivate
 *
 * @brief  Private implementation for ModifyHsmResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHsmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyHsmResponse instance.
 */
ModifyHsmResponsePrivate::ModifyHsmResponsePrivate(
    ModifyHsmQueueResponse * const q) : ModifyHsmPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ModifyHsmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyHsmResponsePrivate::ModifyHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHsmResponse"));
    /// @todo
}
