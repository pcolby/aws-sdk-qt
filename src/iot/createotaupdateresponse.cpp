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

#include "createotaupdateresponse.h"
#include "createotaupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  CreateOTAUpdateResponse
 *
 * @brief  Handles IoT CreateOTAUpdate responses.
 *
 * @see    IoTClient::createOTAUpdate
 */

/**
 * @brief  Constructs a new CreateOTAUpdateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOTAUpdateResponse::CreateOTAUpdateResponse(
        const CreateOTAUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateOTAUpdateResponse(new CreateOTAUpdateResponsePrivate(this), parent)
{
    setRequest(new CreateOTAUpdateRequest(request));
    setReply(reply);
}

const CreateOTAUpdateRequest * CreateOTAUpdateResponse::request() const
{
    Q_D(const CreateOTAUpdateResponse);
    return static_cast<const CreateOTAUpdateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateOTAUpdate response.
 *
 * @param  response  Response to parse.
 */
void CreateOTAUpdateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateOTAUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOTAUpdateResponsePrivate
 *
 * @brief  Private implementation for CreateOTAUpdateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOTAUpdateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOTAUpdateResponse instance.
 */
CreateOTAUpdateResponsePrivate::CreateOTAUpdateResponsePrivate(
    CreateOTAUpdateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateOTAUpdateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOTAUpdateResponsePrivate::parseCreateOTAUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOTAUpdateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
