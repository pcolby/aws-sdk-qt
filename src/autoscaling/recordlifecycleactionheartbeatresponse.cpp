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

#include "recordlifecycleactionheartbeatresponse.h"
#include "recordlifecycleactionheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::RecordLifecycleActionHeartbeatResponse
 *
 * \brief The RecordLifecycleActionHeartbeatResponse class provides an interace for AutoScaling RecordLifecycleActionHeartbeat responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::recordLifecycleActionHeartbeat
 */

/*!
 * @brief  Constructs a new RecordLifecycleActionHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecordLifecycleActionHeartbeatResponse::RecordLifecycleActionHeartbeatResponse(
        const RecordLifecycleActionHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new RecordLifecycleActionHeartbeatResponsePrivate(this), parent)
{
    setRequest(new RecordLifecycleActionHeartbeatRequest(request));
    setReply(reply);
}

const RecordLifecycleActionHeartbeatRequest * RecordLifecycleActionHeartbeatResponse::request() const
{
    Q_D(const RecordLifecycleActionHeartbeatResponse);
    return static_cast<const RecordLifecycleActionHeartbeatRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling RecordLifecycleActionHeartbeat response.
 *
 * @param  response  Response to parse.
 */
void RecordLifecycleActionHeartbeatResponse::parseSuccess(QIODevice &response)
{
    Q_D(RecordLifecycleActionHeartbeatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RecordLifecycleActionHeartbeatResponsePrivate
 *
 * \brief Private implementation for RecordLifecycleActionHeartbeatResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RecordLifecycleActionHeartbeatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RecordLifecycleActionHeartbeatResponse instance.
 */
RecordLifecycleActionHeartbeatResponsePrivate::RecordLifecycleActionHeartbeatResponsePrivate(
    RecordLifecycleActionHeartbeatResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling RecordLifecycleActionHeartbeatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RecordLifecycleActionHeartbeatResponsePrivate::parseRecordLifecycleActionHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecordLifecycleActionHeartbeatResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
