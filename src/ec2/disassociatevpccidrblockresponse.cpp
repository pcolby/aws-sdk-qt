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

#include "disassociatevpccidrblockresponse.h"
#include "disassociatevpccidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DisassociateVpcCidrBlockResponse
 *
 * @brief  Handles EC2 DisassociateVpcCidrBlock responses.
 *
 * @see    EC2Client::disassociateVpcCidrBlock
 */

/**
 * @brief  Constructs a new DisassociateVpcCidrBlockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateVpcCidrBlockResponse::DisassociateVpcCidrBlockResponse(
        const DisassociateVpcCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateVpcCidrBlockResponsePrivate(this), parent)
{
    setRequest(new DisassociateVpcCidrBlockRequest(request));
    setReply(reply);
}

const DisassociateVpcCidrBlockRequest * DisassociateVpcCidrBlockResponse::request() const
{
    Q_D(const DisassociateVpcCidrBlockResponse);
    return static_cast<const DisassociateVpcCidrBlockRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisassociateVpcCidrBlock response.
 *
 * @param  response  Response to parse.
 */
void DisassociateVpcCidrBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateVpcCidrBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateVpcCidrBlockResponsePrivate
 *
 * @brief  Private implementation for DisassociateVpcCidrBlockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateVpcCidrBlockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateVpcCidrBlockResponse instance.
 */
DisassociateVpcCidrBlockResponsePrivate::DisassociateVpcCidrBlockResponsePrivate(
    DisassociateVpcCidrBlockResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisassociateVpcCidrBlockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateVpcCidrBlockResponsePrivate::parseDisassociateVpcCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateVpcCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
