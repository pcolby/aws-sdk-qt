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

#include "createinstancesresponse.h"
#include "createinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateInstancesResponse
 *
 * @brief  Handles Lightsail CreateInstances responses.
 *
 * @see    LightsailClient::createInstances
 */

/**
 * @brief  Constructs a new CreateInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstancesResponse::CreateInstancesResponse(
        const CreateInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateInstancesResponsePrivate(this), parent)
{
    setRequest(new CreateInstancesRequest(request));
    setReply(reply);
}

const CreateInstancesRequest * CreateInstancesResponse::request() const
{
    Q_D(const CreateInstancesResponse);
    return static_cast<const CreateInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateInstances response.
 *
 * @param  response  Response to parse.
 */
void CreateInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstancesResponsePrivate
 *
 * @brief  Private implementation for CreateInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstancesResponse instance.
 */
CreateInstancesResponsePrivate::CreateInstancesResponsePrivate(
    CreateInstancesResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstancesResponsePrivate::parseCreateInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstancesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
