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

#include "attachinstancesresponse.h"
#include "attachinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  AttachInstancesResponse
 *
 * @brief  Handles AutoScaling AttachInstances responses.
 *
 * @see    AutoScalingClient::attachInstances
 */

/**
 * @brief  Constructs a new AttachInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachInstancesResponse::AttachInstancesResponse(
        const AttachInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachInstancesResponsePrivate(this), parent)
{
    setRequest(new AttachInstancesRequest(request));
    setReply(reply);
}

const AttachInstancesRequest * AttachInstancesResponse::request() const
{
    Q_D(const AttachInstancesResponse);
    return static_cast<const AttachInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling AttachInstances response.
 *
 * @param  response  Response to parse.
 */
void AttachInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachInstancesResponsePrivate
 *
 * @brief  Private implementation for AttachInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachInstancesResponse instance.
 */
AttachInstancesResponsePrivate::AttachInstancesResponsePrivate(
    AttachInstancesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling AttachInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachInstancesResponsePrivate::AttachInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachInstancesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
