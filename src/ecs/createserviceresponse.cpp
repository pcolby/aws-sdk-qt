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

#include "createserviceresponse.h"
#include "createserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  CreateServiceResponse
 *
 * @brief  Handles ECS CreateService responses.
 *
 * @see    ECSClient::createService
 */

/**
 * @brief  Constructs a new CreateServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServiceResponse::CreateServiceResponse(
        const CreateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new CreateServiceResponsePrivate(this), parent)
{
    setRequest(new CreateServiceRequest(request));
    setReply(reply);
}

const CreateServiceRequest * CreateServiceResponse::request() const
{
    Q_D(const CreateServiceResponse);
    return static_cast<const CreateServiceRequest *>(d->request);
}

/**
 * @brief  Parse a ECS CreateService response.
 *
 * @param  response  Response to parse.
 */
void CreateServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateServiceResponsePrivate
 *
 * @brief  Private implementation for CreateServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateServiceResponse instance.
 */
CreateServiceResponsePrivate::CreateServiceResponsePrivate(
    CreateServiceQueueResponse * const q) : CreateServicePrivate(q)
{

}

/**
 * @brief  Parse an ECS CreateServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateServiceResponsePrivate::CreateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
