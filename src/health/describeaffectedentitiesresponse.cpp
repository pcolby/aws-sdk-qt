/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeaffectedentitiesresponse.h"
#include "describeaffectedentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeAffectedEntitiesResponse
 * \brief The DescribeAffectedEntitiesResponse class provides an interace for Health DescribeAffectedEntities responses.
 *
 * \inmodule QtAwsHealth
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
 * \sa HealthClient::describeAffectedEntities
 */

/*!
 * Constructs a DescribeAffectedEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAffectedEntitiesResponse::DescribeAffectedEntitiesResponse(
        const DescribeAffectedEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeAffectedEntitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeAffectedEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAffectedEntitiesRequest * DescribeAffectedEntitiesResponse::request() const
{
    Q_D(const DescribeAffectedEntitiesResponse);
    return static_cast<const DescribeAffectedEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Health DescribeAffectedEntities \a response.
 */
void DescribeAffectedEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAffectedEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Health::DescribeAffectedEntitiesResponsePrivate
 * \brief The DescribeAffectedEntitiesResponsePrivate class provides private implementation for DescribeAffectedEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DescribeAffectedEntitiesResponsePrivate object with public implementation \a q.
 */
DescribeAffectedEntitiesResponsePrivate::DescribeAffectedEntitiesResponsePrivate(
    DescribeAffectedEntitiesResponse * const q) : HealthResponsePrivate(q)
{

}

/*!
 * Parses a Health DescribeAffectedEntities response element from \a xml.
 */
void DescribeAffectedEntitiesResponsePrivate::parseDescribeAffectedEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAffectedEntitiesResponse"));
    /// @todo
}

} // namespace Health
} // namespace QtAws
