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

#include "stopinstancesresponse.h"
#include "stopinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  StopInstancesResponse
 *
 * @brief  Handles EC2 StopInstances responses.
 *
 * @see    EC2Client::stopInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new StopInstancesResponsePrivate(this), parent)
{
    setRequest(new StopInstancesRequest(request));
    setReply(reply);
}

const StopInstancesRequest * StopInstancesResponse::request() const
{
    Q_D(const StopInstancesResponse);
    return static_cast<const StopInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 StopInstances response.
 *
 * @param  response  Response to parse.
 */
void StopInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopInstancesResponsePrivate
 *
 * @brief  Private implementation for StopInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopInstancesResponse instance.
 */
StopInstancesResponsePrivate::StopInstancesResponsePrivate(
    StopInstancesQueueResponse * const q) : StopInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 StopInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopInstancesResponsePrivate::StopInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
