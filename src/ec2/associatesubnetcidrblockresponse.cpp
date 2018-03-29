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

#include "associatesubnetcidrblockresponse.h"
#include "associatesubnetcidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  AssociateSubnetCidrBlockResponse
 *
 * @brief  Handles EC2 AssociateSubnetCidrBlock responses.
 *
 * @see    EC2Client::associateSubnetCidrBlock
 */

/**
 * @brief  Constructs a new AssociateSubnetCidrBlockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateSubnetCidrBlockResponse::AssociateSubnetCidrBlockResponse(
        const AssociateSubnetCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AssociateSubnetCidrBlockResponsePrivate(this), parent)
{
    setRequest(new AssociateSubnetCidrBlockRequest(request));
    setReply(reply);
}

const AssociateSubnetCidrBlockRequest * AssociateSubnetCidrBlockResponse::request() const
{
    Q_D(const AssociateSubnetCidrBlockResponse);
    return static_cast<const AssociateSubnetCidrBlockRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AssociateSubnetCidrBlock response.
 *
 * @param  response  Response to parse.
 */
void AssociateSubnetCidrBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateSubnetCidrBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateSubnetCidrBlockResponsePrivate
 *
 * @brief  Private implementation for AssociateSubnetCidrBlockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateSubnetCidrBlockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateSubnetCidrBlockResponse instance.
 */
AssociateSubnetCidrBlockResponsePrivate::AssociateSubnetCidrBlockResponsePrivate(
    AssociateSubnetCidrBlockResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 AssociateSubnetCidrBlockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateSubnetCidrBlockResponsePrivate::parseAssociateSubnetCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSubnetCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
