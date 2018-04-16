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

#include "setdesiredcapacityresponse.h"
#include "setdesiredcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetDesiredCapacityResponse
 *
 * \brief The SetDesiredCapacityResponse class provides an interace for AutoScaling SetDesiredCapacity responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::setDesiredCapacity
 */

/*!
 * @brief  Constructs a new SetDesiredCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetDesiredCapacityResponse::SetDesiredCapacityResponse(
        const SetDesiredCapacityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SetDesiredCapacityResponsePrivate(this), parent)
{
    setRequest(new SetDesiredCapacityRequest(request));
    setReply(reply);
}

const SetDesiredCapacityRequest * SetDesiredCapacityResponse::request() const
{
    Q_D(const SetDesiredCapacityResponse);
    return static_cast<const SetDesiredCapacityRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling SetDesiredCapacity response.
 *
 * @param  response  Response to parse.
 */
void SetDesiredCapacityResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetDesiredCapacityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetDesiredCapacityResponsePrivate
 *
 * \brief Private implementation for SetDesiredCapacityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetDesiredCapacityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetDesiredCapacityResponse instance.
 */
SetDesiredCapacityResponsePrivate::SetDesiredCapacityResponsePrivate(
    SetDesiredCapacityResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling SetDesiredCapacityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetDesiredCapacityResponsePrivate::parseSetDesiredCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDesiredCapacityResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
