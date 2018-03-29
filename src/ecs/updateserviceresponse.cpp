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

#include "updateserviceresponse.h"
#include "updateserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  UpdateServiceResponse
 *
 * @brief  Handles ECS UpdateService responses.
 *
 * @see    ECSClient::updateService
 */

/**
 * @brief  Constructs a new UpdateServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServiceResponse::UpdateServiceResponse(
        const UpdateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateServiceResponse(new UpdateServiceResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceRequest(request));
    setReply(reply);
}

const UpdateServiceRequest * UpdateServiceResponse::request() const
{
    Q_D(const UpdateServiceResponse);
    return static_cast<const UpdateServiceRequest *>(d->request);
}

/**
 * @brief  Parse a ECS UpdateService response.
 *
 * @param  response  Response to parse.
 */
void UpdateServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServiceResponsePrivate
 *
 * @brief  Private implementation for UpdateServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServiceResponse instance.
 */
UpdateServiceResponsePrivate::UpdateServiceResponsePrivate(
    UpdateServiceResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS UpdateServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServiceResponsePrivate::parseUpdateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
