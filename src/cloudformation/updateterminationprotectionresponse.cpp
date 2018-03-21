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

#include "updateterminationprotectionresponse.h"
#include "updateterminationprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  UpdateTerminationProtectionResponse
 *
 * @brief  Handles CloudFormation UpdateTerminationProtection responses.
 *
 * @see    CloudFormationClient::updateTerminationProtection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTerminationProtectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new UpdateTerminationProtectionResponsePrivate(this), parent)
{
    setRequest(new UpdateTerminationProtectionRequest(request));
    setReply(reply);
}

const UpdateTerminationProtectionRequest * UpdateTerminationProtectionResponse::request() const
{
    Q_D(const UpdateTerminationProtectionResponse);
    return static_cast<const UpdateTerminationProtectionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation UpdateTerminationProtection response.
 *
 * @param  response  Response to parse.
 */
void UpdateTerminationProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTerminationProtectionResponsePrivate
 *
 * @brief  Private implementation for UpdateTerminationProtectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTerminationProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTerminationProtectionResponse instance.
 */
UpdateTerminationProtectionResponsePrivate::UpdateTerminationProtectionResponsePrivate(
    UpdateTerminationProtectionQueueResponse * const q) : UpdateTerminationProtectionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation UpdateTerminationProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTerminationProtectionResponsePrivate::UpdateTerminationProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTerminationProtectionResponse"));
    /// @todo
}
