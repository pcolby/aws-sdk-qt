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

#include "setalarmstateresponse.h"
#include "setalarmstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::SetAlarmStateResponse
 *
 * \brief The SetAlarmStateResponse class provides an interace for CloudWatch SetAlarmState responses.
 *
 * \ingroup CloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::setAlarmState
 */

/*!
 * @brief  Constructs a new SetAlarmStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetAlarmStateResponse::SetAlarmStateResponse(
        const SetAlarmStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new SetAlarmStateResponsePrivate(this), parent)
{
    setRequest(new SetAlarmStateRequest(request));
    setReply(reply);
}

const SetAlarmStateRequest * SetAlarmStateResponse::request() const
{
    Q_D(const SetAlarmStateResponse);
    return static_cast<const SetAlarmStateRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudWatch SetAlarmState response.
 *
 * @param  response  Response to parse.
 */
void SetAlarmStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetAlarmStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetAlarmStateResponsePrivate
 *
 * \brief Private implementation for SetAlarmStateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetAlarmStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetAlarmStateResponse instance.
 */
SetAlarmStateResponsePrivate::SetAlarmStateResponsePrivate(
    SetAlarmStateResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudWatch SetAlarmStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetAlarmStateResponsePrivate::parseSetAlarmStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetAlarmStateResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
