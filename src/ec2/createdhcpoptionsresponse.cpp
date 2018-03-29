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

#include "createdhcpoptionsresponse.h"
#include "createdhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateDhcpOptionsResponse
 *
 * @brief  Handles EC2 CreateDhcpOptions responses.
 *
 * @see    EC2Client::createDhcpOptions
 */

/**
 * @brief  Constructs a new CreateDhcpOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDhcpOptionsResponse::CreateDhcpOptionsResponse(
        const CreateDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new CreateDhcpOptionsRequest(request));
    setReply(reply);
}

const CreateDhcpOptionsRequest * CreateDhcpOptionsResponse::request() const
{
    Q_D(const CreateDhcpOptionsResponse);
    return static_cast<const CreateDhcpOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateDhcpOptions response.
 *
 * @param  response  Response to parse.
 */
void CreateDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDhcpOptionsResponsePrivate
 *
 * @brief  Private implementation for CreateDhcpOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDhcpOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDhcpOptionsResponse instance.
 */
CreateDhcpOptionsResponsePrivate::CreateDhcpOptionsResponsePrivate(
    CreateDhcpOptionsQueueResponse * const q) : CreateDhcpOptionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateDhcpOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDhcpOptionsResponsePrivate::CreateDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDhcpOptionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
