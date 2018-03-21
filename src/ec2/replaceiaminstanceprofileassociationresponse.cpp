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

#include "replaceiaminstanceprofileassociationresponse.h"
#include "replaceiaminstanceprofileassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceIamInstanceProfileAssociationResponse
 *
 * @brief  Handles EC2 ReplaceIamInstanceProfileAssociation responses.
 *
 * @see    EC2Client::replaceIamInstanceProfileAssociation
 */

/**
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceIamInstanceProfileAssociationResponse::ReplaceIamInstanceProfileAssociationResponse(
        const ReplaceIamInstanceProfileAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReplaceIamInstanceProfileAssociationResponsePrivate(this), parent)
{
    setRequest(new ReplaceIamInstanceProfileAssociationRequest(request));
    setReply(reply);
}

const ReplaceIamInstanceProfileAssociationRequest * ReplaceIamInstanceProfileAssociationResponse::request() const
{
    Q_D(const ReplaceIamInstanceProfileAssociationResponse);
    return static_cast<const ReplaceIamInstanceProfileAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReplaceIamInstanceProfileAssociation response.
 *
 * @param  response  Response to parse.
 */
void ReplaceIamInstanceProfileAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceIamInstanceProfileAssociationResponsePrivate
 *
 * @brief  Private implementation for ReplaceIamInstanceProfileAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceIamInstanceProfileAssociationResponse instance.
 */
ReplaceIamInstanceProfileAssociationResponsePrivate::ReplaceIamInstanceProfileAssociationResponsePrivate(
    ReplaceIamInstanceProfileAssociationQueueResponse * const q) : ReplaceIamInstanceProfileAssociationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReplaceIamInstanceProfileAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceIamInstanceProfileAssociationResponsePrivate::ReplaceIamInstanceProfileAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceIamInstanceProfileAssociationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
