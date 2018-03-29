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

#include "updateassociationstatusresponse.h"
#include "updateassociationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  UpdateAssociationStatusResponse
 *
 * @brief  Handles SSM UpdateAssociationStatus responses.
 *
 * @see    SSMClient::updateAssociationStatus
 */

/**
 * @brief  Constructs a new UpdateAssociationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssociationStatusResponse::UpdateAssociationStatusResponse(
        const UpdateAssociationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateAssociationStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateAssociationStatusRequest(request));
    setReply(reply);
}

const UpdateAssociationStatusRequest * UpdateAssociationStatusResponse::request() const
{
    Q_D(const UpdateAssociationStatusResponse);
    return static_cast<const UpdateAssociationStatusRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateAssociationStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdateAssociationStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAssociationStatusResponsePrivate
 *
 * @brief  Private implementation for UpdateAssociationStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAssociationStatusResponse instance.
 */
UpdateAssociationStatusResponsePrivate::UpdateAssociationStatusResponsePrivate(
    UpdateAssociationStatusQueueResponse * const q) : UpdateAssociationStatusPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateAssociationStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAssociationStatusResponsePrivate::UpdateAssociationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssociationStatusResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
