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

#include "createnetworkinterfaceresponse.h"
#include "createnetworkinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateNetworkInterfaceResponse
 *
 * @brief  Handles EC2 CreateNetworkInterface responses.
 *
 * @see    EC2Client::createNetworkInterface
 */

/**
 * @brief  Constructs a new CreateNetworkInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNetworkInterfaceResponse::CreateNetworkInterfaceResponse(
        const CreateNetworkInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateNetworkInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkInterfaceRequest(request));
    setReply(reply);
}

const CreateNetworkInterfaceRequest * CreateNetworkInterfaceResponse::request() const
{
    Q_D(const CreateNetworkInterfaceResponse);
    return static_cast<const CreateNetworkInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateNetworkInterface response.
 *
 * @param  response  Response to parse.
 */
void CreateNetworkInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNetworkInterfaceResponsePrivate
 *
 * @brief  Private implementation for CreateNetworkInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNetworkInterfaceResponse instance.
 */
CreateNetworkInterfaceResponsePrivate::CreateNetworkInterfaceResponsePrivate(
    CreateNetworkInterfaceQueueResponse * const q) : CreateNetworkInterfacePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateNetworkInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNetworkInterfaceResponsePrivate::CreateNetworkInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkInterfaceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
