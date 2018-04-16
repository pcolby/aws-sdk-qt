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

#include "suspendprocessesresponse.h"
#include "suspendprocessesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SuspendProcessesResponse
 *
 * \brief The SuspendProcessesResponse class provides an interace for AutoScaling SuspendProcesses responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::suspendProcesses
 */

/*!
 * @brief  Constructs a new SuspendProcessesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SuspendProcessesResponse::SuspendProcessesResponse(
        const SuspendProcessesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SuspendProcessesResponsePrivate(this), parent)
{
    setRequest(new SuspendProcessesRequest(request));
    setReply(reply);
}

const SuspendProcessesRequest * SuspendProcessesResponse::request() const
{
    Q_D(const SuspendProcessesResponse);
    return static_cast<const SuspendProcessesRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling SuspendProcesses response.
 *
 * @param  response  Response to parse.
 */
void SuspendProcessesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SuspendProcessesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SuspendProcessesResponsePrivate
 *
 * \brief Private implementation for SuspendProcessesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SuspendProcessesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SuspendProcessesResponse instance.
 */
SuspendProcessesResponsePrivate::SuspendProcessesResponsePrivate(
    SuspendProcessesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling SuspendProcessesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SuspendProcessesResponsePrivate::parseSuspendProcessesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuspendProcessesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
