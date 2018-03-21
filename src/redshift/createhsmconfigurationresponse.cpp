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

#include "createhsmconfigurationresponse.h"
#include "createhsmconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CreateHsmConfigurationResponse
 *
 * @brief  Handles Redshift CreateHsmConfiguration responses.
 *
 * @see    RedshiftClient::createHsmConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHsmConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateHsmConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateHsmConfigurationRequest(request));
    setReply(reply);
}

const CreateHsmConfigurationRequest * CreateHsmConfigurationResponse::request() const
{
    Q_D(const CreateHsmConfigurationResponse);
    return static_cast<const CreateHsmConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateHsmConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateHsmConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHsmConfigurationResponsePrivate
 *
 * @brief  Private implementation for CreateHsmConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHsmConfigurationResponse instance.
 */
CreateHsmConfigurationResponsePrivate::CreateHsmConfigurationResponsePrivate(
    CreateHsmConfigurationQueueResponse * const q) : CreateHsmConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateHsmConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHsmConfigurationResponsePrivate::CreateHsmConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmConfigurationResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
