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

#include "deletedhcpoptionsresponse.h"
#include "deletedhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteDhcpOptionsResponse
 *
 * @brief  Handles EC2 DeleteDhcpOptions responses.
 *
 * @see    EC2Client::deleteDhcpOptions
 */

/**
 * @brief  Constructs a new DeleteDhcpOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDhcpOptionsResponse::DeleteDhcpOptionsResponse(
        const DeleteDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new DeleteDhcpOptionsRequest(request));
    setReply(reply);
}

const DeleteDhcpOptionsRequest * DeleteDhcpOptionsResponse::request() const
{
    Q_D(const DeleteDhcpOptionsResponse);
    return static_cast<const DeleteDhcpOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteDhcpOptions response.
 *
 * @param  response  Response to parse.
 */
void DeleteDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDhcpOptionsResponsePrivate
 *
 * @brief  Private implementation for DeleteDhcpOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDhcpOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDhcpOptionsResponse instance.
 */
DeleteDhcpOptionsResponsePrivate::DeleteDhcpOptionsResponsePrivate(
    DeleteDhcpOptionsQueueResponse * const q) : DeleteDhcpOptionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteDhcpOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDhcpOptionsResponsePrivate::DeleteDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDhcpOptionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
