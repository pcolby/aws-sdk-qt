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

#include "enablealarmactionsresponse.h"
#include "enablealarmactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsResponse
 *
 * \brief The EnableAlarmActionsResponse class encapsulates CloudWatch EnableAlarmActions responses.
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
 * \sa CloudWatchClient::enableAlarmActions
 */

/*!
 * @brief  Constructs a new EnableAlarmActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableAlarmActionsResponse::EnableAlarmActionsResponse(
        const EnableAlarmActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new EnableAlarmActionsResponsePrivate(this), parent)
{
    setRequest(new EnableAlarmActionsRequest(request));
    setReply(reply);
}

const EnableAlarmActionsRequest * EnableAlarmActionsResponse::request() const
{
    Q_D(const EnableAlarmActionsResponse);
    return static_cast<const EnableAlarmActionsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudWatch EnableAlarmActions response.
 *
 * @param  response  Response to parse.
 */
void EnableAlarmActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableAlarmActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class EnableAlarmActionsResponsePrivate
 *
 * \brief Private implementation for EnableAlarmActionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableAlarmActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableAlarmActionsResponse instance.
 */
EnableAlarmActionsResponsePrivate::EnableAlarmActionsResponsePrivate(
    EnableAlarmActionsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudWatch EnableAlarmActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableAlarmActionsResponsePrivate::parseEnableAlarmActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAlarmActionsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
