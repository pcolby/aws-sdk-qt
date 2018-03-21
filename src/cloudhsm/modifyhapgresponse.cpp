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

#include "modifyhapgresponse.h"
#include "modifyhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  ModifyHapgResponse
 *
 * @brief  Handles CloudHSM ModifyHapg responses.
 *
 * @see    CloudHSMClient::modifyHapg
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyHapgResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyHapgResponsePrivate(this), parent)
{
    setRequest(new ModifyHapgRequest(request));
    setReply(reply);
}

const ModifyHapgRequest * ModifyHapgResponse::request() const
{
    Q_D(const ModifyHapgResponse);
    return static_cast<const ModifyHapgRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ModifyHapg response.
 *
 * @param  response  Response to parse.
 */
void ModifyHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyHapgResponsePrivate
 *
 * @brief  Private implementation for ModifyHapgResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHapgResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyHapgResponse instance.
 */
ModifyHapgResponsePrivate::ModifyHapgResponsePrivate(
    ModifyHapgQueueResponse * const q) : ModifyHapgPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ModifyHapgResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyHapgResponsePrivate::ModifyHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHapgResponse"));
    /// @todo
}
