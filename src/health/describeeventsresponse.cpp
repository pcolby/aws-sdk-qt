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

#include "describeeventsresponse.h"
#include "describeeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeEventsResponse
 *
 * \brief The DescribeEventsResponse class encapsulates Health DescribeEvents responses.
 *
 * \ingroup Health
 *
 *  <fullname>AWS Health</fullname>
 * 
 *  The AWS Health API provides programmatic access to the AWS Health information that is presented in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>. You can get information about events
 *  that affect your AWS
 * 
 *  resources> <ul> <li>
 * 
 *  <a>DescribeEvents</a>: Summary information about
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeEventDetails</a>: Detailed information about one or more
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeAffectedEntities</a>: Information about AWS resources that are affected by one or more
 * 
 *  events> </li> </ul>
 * 
 *  In addition, these operations provide information about event types and summary counts of events or affected
 * 
 *  entities> <ul> <li>
 * 
 *  <a>DescribeEventTypes</a>: Information about the kinds of events that AWS Health
 * 
 *  tracks> </li> <li>
 * 
 *  <a>DescribeEventAggregates</a>: A count of the number of events that meet specified
 * 
 *  criteria> </li> <li>
 * 
 *  <a>DescribeEntityAggregates</a>: A count of the number of affected entities that meet specified
 * 
 *  criteria> </li> </ul>
 * 
 *  The Health API requires a Business or Enterprise support plan from <a href="http://aws.amazon.com/premiumsupport/">AWS
 *  Support</a>. Calling the Health API from an account that does not have a Business or Enterprise support plan causes a
 *  <code>SubscriptionRequiredException</code>.
 * 
 *  </p
 * 
 *  For authentication of requests, AWS Health uses the <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See the <a href="http://docs.aws.amazon.com/health/latest/ug/what-is-aws-health.html">AWS Health User Guide</a> for
 *  information about how to use the
 * 
 *  API>
 * 
 *  <b>Service Endpoint</b>
 * 
 *  </p
 * 
 *  The HTTP endpoint for the AWS Health API
 * 
 *  is> <ul> <li>
 * 
 *  https://health.us-east-1.amazonaws.com
 *
 * \sa HealthClient::describeEvents
 */

/*!
 * @brief  Constructs a new DescribeEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventsResponse::DescribeEventsResponse(
        const DescribeEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEventsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventsRequest(request));
    setReply(reply);
}

const DescribeEventsRequest * DescribeEventsResponse::request() const
{
    Q_D(const DescribeEventsResponse);
    return static_cast<const DescribeEventsRequest *>(d->request);
}

/*!
 * @brief  Parse a Health DescribeEvents response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeEventsResponsePrivate
 *
 * \brief Private implementation for DescribeEventsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventsResponse instance.
 */
DescribeEventsResponsePrivate::DescribeEventsResponsePrivate(
    DescribeEventsResponse * const q) : HealthResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Health DescribeEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventsResponsePrivate::parseDescribeEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventsResponse"));
    /// @todo
}

} // namespace Health
} // namespace QtAws
