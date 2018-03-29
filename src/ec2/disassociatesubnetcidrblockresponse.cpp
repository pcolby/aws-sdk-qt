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

#include "disassociatesubnetcidrblockresponse.h"
#include "disassociatesubnetcidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DisassociateSubnetCidrBlockResponse
 *
 * @brief  Handles EC2 DisassociateSubnetCidrBlock responses.
 *
 * @see    EC2Client::disassociateSubnetCidrBlock
 */

/**
 * @brief  Constructs a new DisassociateSubnetCidrBlockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateSubnetCidrBlockResponse::DisassociateSubnetCidrBlockResponse(
        const DisassociateSubnetCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateSubnetCidrBlockResponsePrivate(this), parent)
{
    setRequest(new DisassociateSubnetCidrBlockRequest(request));
    setReply(reply);
}

const DisassociateSubnetCidrBlockRequest * DisassociateSubnetCidrBlockResponse::request() const
{
    Q_D(const DisassociateSubnetCidrBlockResponse);
    return static_cast<const DisassociateSubnetCidrBlockRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisassociateSubnetCidrBlock response.
 *
 * @param  response  Response to parse.
 */
void DisassociateSubnetCidrBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateSubnetCidrBlockResponsePrivate
 *
 * @brief  Private implementation for DisassociateSubnetCidrBlockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSubnetCidrBlockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateSubnetCidrBlockResponse instance.
 */
DisassociateSubnetCidrBlockResponsePrivate::DisassociateSubnetCidrBlockResponsePrivate(
    DisassociateSubnetCidrBlockResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisassociateSubnetCidrBlockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateSubnetCidrBlockResponsePrivate::DisassociateSubnetCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSubnetCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
