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

#include "updateassociationresponse.h"
#include "updateassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  UpdateAssociationResponse
 *
 * @brief  Handles SSM UpdateAssociation responses.
 *
 * @see    SSMClient::updateAssociation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssociationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateAssociationResponsePrivate(this), parent)
{
    setRequest(new UpdateAssociationRequest(request));
    setReply(reply);
}

const UpdateAssociationRequest * UpdateAssociationResponse::request() const
{
    Q_D(const UpdateAssociationResponse);
    return static_cast<const UpdateAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateAssociation response.
 *
 * @param  response  Response to parse.
 */
void UpdateAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAssociationResponsePrivate
 *
 * @brief  Private implementation for UpdateAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAssociationResponse instance.
 */
UpdateAssociationResponsePrivate::UpdateAssociationResponsePrivate(
    UpdateAssociationQueueResponse * const q) : UpdateAssociationPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAssociationResponsePrivate::UpdateAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssociationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
