/*
    Copyright 2013-2020 Paul Colby

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

#include "describeuserhierarchygroupresponse.h"
#include "describeuserhierarchygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeUserHierarchyGroupResponse
 * \brief The DescribeUserHierarchyGroupResponse class provides an interace for Connect DescribeUserHierarchyGroup responses.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Throttling limits for the Amazon Connect API
 * 
 *  operations>
 * 
 *  For the <code>GetMetricData</code> and <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
 *  BurstLimit of 8 per
 * 
 *  second>
 * 
 *  For all other operations, a RateLimit of 2 per second, and a BurstLimit of 5 per
 * 
 *  second>
 * 
 *  You can request an increase to the throttling limits by submitting a <a
 *  href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon Connect service
 *  limits increase form</a>. You must be signed in to your AWS account to access the
 *
 * \sa ConnectClient::describeUserHierarchyGroup
 */

/*!
 * Constructs a DescribeUserHierarchyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserHierarchyGroupResponse::DescribeUserHierarchyGroupResponse(
        const DescribeUserHierarchyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DescribeUserHierarchyGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeUserHierarchyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserHierarchyGroupRequest * DescribeUserHierarchyGroupResponse::request() const
{
    Q_D(const DescribeUserHierarchyGroupResponse);
    return static_cast<const DescribeUserHierarchyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DescribeUserHierarchyGroup \a response.
 */
void DescribeUserHierarchyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserHierarchyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DescribeUserHierarchyGroupResponsePrivate
 * \brief The DescribeUserHierarchyGroupResponsePrivate class provides private implementation for DescribeUserHierarchyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeUserHierarchyGroupResponsePrivate object with public implementation \a q.
 */
DescribeUserHierarchyGroupResponsePrivate::DescribeUserHierarchyGroupResponsePrivate(
    DescribeUserHierarchyGroupResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DescribeUserHierarchyGroup response element from \a xml.
 */
void DescribeUserHierarchyGroupResponsePrivate::parseDescribeUserHierarchyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserHierarchyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
