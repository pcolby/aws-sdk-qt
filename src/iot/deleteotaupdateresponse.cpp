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

#include "deleteotaupdateresponse.h"
#include "deleteotaupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteOTAUpdateResponse
 *
 * @brief  Handles IoT DeleteOTAUpdate responses.
 *
 * @see    IoTClient::deleteOTAUpdate
 */

/**
 * @brief  Constructs a new DeleteOTAUpdateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOTAUpdateResponse::DeleteOTAUpdateResponse(
        const DeleteOTAUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteOTAUpdateResponsePrivate(this), parent)
{
    setRequest(new DeleteOTAUpdateRequest(request));
    setReply(reply);
}

const DeleteOTAUpdateRequest * DeleteOTAUpdateResponse::request() const
{
    Q_D(const DeleteOTAUpdateResponse);
    return static_cast<const DeleteOTAUpdateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteOTAUpdate response.
 *
 * @param  response  Response to parse.
 */
void DeleteOTAUpdateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteOTAUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOTAUpdateResponsePrivate
 *
 * @brief  Private implementation for DeleteOTAUpdateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOTAUpdateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOTAUpdateResponse instance.
 */
DeleteOTAUpdateResponsePrivate::DeleteOTAUpdateResponsePrivate(
    DeleteOTAUpdateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteOTAUpdateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOTAUpdateResponsePrivate::parseDeleteOTAUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOTAUpdateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
