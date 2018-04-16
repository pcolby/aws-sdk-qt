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

#include "updateautoscalinggroupresponse.h"
#include "updateautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupResponse
 *
 * \brief The UpdateAutoScalingGroupResponse class encapsulates AutoScaling UpdateAutoScalingGroup responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::updateAutoScalingGroup
 */

/*!
 * @brief  Constructs a new UpdateAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAutoScalingGroupResponse::UpdateAutoScalingGroupResponse(
        const UpdateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new UpdateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAutoScalingGroupRequest(request));
    setReply(reply);
}

const UpdateAutoScalingGroupRequest * UpdateAutoScalingGroupResponse::request() const
{
    Q_D(const UpdateAutoScalingGroupResponse);
    return static_cast<const UpdateAutoScalingGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling UpdateAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateAutoScalingGroupResponsePrivate
 *
 * \brief Private implementation for UpdateAutoScalingGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAutoScalingGroupResponse instance.
 */
UpdateAutoScalingGroupResponsePrivate::UpdateAutoScalingGroupResponsePrivate(
    UpdateAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling UpdateAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAutoScalingGroupResponsePrivate::parseUpdateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
