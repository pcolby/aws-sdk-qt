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

#include "runscheduledinstancesresponse.h"
#include "runscheduledinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  RunScheduledInstancesResponse
 *
 * @brief  Handles EC2 RunScheduledInstances responses.
 *
 * @see    EC2Client::runScheduledInstances
 */

/**
 * @brief  Constructs a new RunScheduledInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RunScheduledInstancesResponse::RunScheduledInstancesResponse(
        const RunScheduledInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RunScheduledInstancesResponsePrivate(this), parent)
{
    setRequest(new RunScheduledInstancesRequest(request));
    setReply(reply);
}

const RunScheduledInstancesRequest * RunScheduledInstancesResponse::request() const
{
    Q_D(const RunScheduledInstancesResponse);
    return static_cast<const RunScheduledInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RunScheduledInstances response.
 *
 * @param  response  Response to parse.
 */
void RunScheduledInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RunScheduledInstancesResponsePrivate
 *
 * @brief  Private implementation for RunScheduledInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RunScheduledInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RunScheduledInstancesResponse instance.
 */
RunScheduledInstancesResponsePrivate::RunScheduledInstancesResponsePrivate(
    RunScheduledInstancesQueueResponse * const q) : RunScheduledInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 RunScheduledInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RunScheduledInstancesResponsePrivate::RunScheduledInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunScheduledInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
