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

/*!
 * \class QtAws::AutoScaling::DetachInstancesResponse
 *
 * \brief The DetachInstancesResponse class encapsulates AutoScaling DetachInstances responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::detachInstances
 */

/*!
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

/*!
 * @brief  Parse a AutoScaling DetachInstances response.
 *
 * @param  response  Response to parse.
 */
void DetachInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DetachInstancesResponsePrivate
 *
 * \brief Private implementation for DetachInstancesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetachInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachInstancesResponse instance.
 */
DetachInstancesResponsePrivate::DetachInstancesResponsePrivate(
    DetachInstancesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling DetachInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachInstancesResponsePrivate::parseDetachInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachInstancesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
