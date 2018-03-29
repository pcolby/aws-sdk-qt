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

#include "detachinstancesresponse.h"
#include "detachinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DetachInstancesResponse
 *
 * @brief  Handles AutoScaling DetachInstances responses.
 *
 * @see    AutoScalingClient::detachInstances
 */

/**
 * @brief  Constructs a new DetachInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachInstancesResponse::DetachInstancesResponse(
        const DetachInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DetachInstancesResponsePrivate(this), parent)
{
    setRequest(new DetachInstancesRequest(request));
    setReply(reply);
}

const DetachInstancesRequest * DetachInstancesResponse::request() const
{
    Q_D(const DetachInstancesResponse);
    return static_cast<const DetachInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DetachInstances response.
 *
 * @param  response  Response to parse.
 */
void DetachInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachInstancesResponsePrivate
 *
 * @brief  Private implementation for DetachInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachInstancesResponse instance.
 */
DetachInstancesResponsePrivate::DetachInstancesResponsePrivate(
    DetachInstancesQueueResponse * const q) : DetachInstancesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DetachInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachInstancesResponsePrivate::DetachInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachInstancesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
