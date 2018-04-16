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

#include "completelifecycleactionresponse.h"
#include "completelifecycleactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CompleteLifecycleActionResponse
 *
 * \brief The CompleteLifecycleActionResponse class encapsulates AutoScaling CompleteLifecycleAction responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::completeLifecycleAction
 */

/*!
 * @brief  Constructs a new CompleteLifecycleActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteLifecycleActionResponse::CompleteLifecycleActionResponse(
        const CompleteLifecycleActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CompleteLifecycleActionResponsePrivate(this), parent)
{
    setRequest(new CompleteLifecycleActionRequest(request));
    setReply(reply);
}

const CompleteLifecycleActionRequest * CompleteLifecycleActionResponse::request() const
{
    Q_D(const CompleteLifecycleActionResponse);
    return static_cast<const CompleteLifecycleActionRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling CompleteLifecycleAction response.
 *
 * @param  response  Response to parse.
 */
void CompleteLifecycleActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CompleteLifecycleActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CompleteLifecycleActionResponsePrivate
 *
 * \brief Private implementation for CompleteLifecycleActionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CompleteLifecycleActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteLifecycleActionResponse instance.
 */
CompleteLifecycleActionResponsePrivate::CompleteLifecycleActionResponsePrivate(
    CompleteLifecycleActionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling CompleteLifecycleActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteLifecycleActionResponsePrivate::parseCompleteLifecycleActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLifecycleActionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
