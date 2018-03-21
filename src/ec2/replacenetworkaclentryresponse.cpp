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

#include "replacenetworkaclentryresponse.h"
#include "replacenetworkaclentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceNetworkAclEntryResponse
 *
 * @brief  Handles EC2 ReplaceNetworkAclEntry responses.
 *
 * @see    EC2Client::replaceNetworkAclEntry
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceNetworkAclEntryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReplaceNetworkAclEntryResponsePrivate(this), parent)
{
    setRequest(new ReplaceNetworkAclEntryRequest(request));
    setReply(reply);
}

const ReplaceNetworkAclEntryRequest * ReplaceNetworkAclEntryResponse::request() const
{
    Q_D(const ReplaceNetworkAclEntryResponse);
    return static_cast<const ReplaceNetworkAclEntryRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReplaceNetworkAclEntry response.
 *
 * @param  response  Response to parse.
 */
void ReplaceNetworkAclEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceNetworkAclEntryResponsePrivate
 *
 * @brief  Private implementation for ReplaceNetworkAclEntryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceNetworkAclEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceNetworkAclEntryResponse instance.
 */
ReplaceNetworkAclEntryResponsePrivate::ReplaceNetworkAclEntryResponsePrivate(
    ReplaceNetworkAclEntryQueueResponse * const q) : ReplaceNetworkAclEntryPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReplaceNetworkAclEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceNetworkAclEntryResponsePrivate::ReplaceNetworkAclEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceNetworkAclEntryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
