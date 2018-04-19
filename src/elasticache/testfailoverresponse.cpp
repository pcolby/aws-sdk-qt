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

#include "testfailoverresponse.h"
#include "testfailoverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::TestFailoverResponse
 * \brief The TestFailoverResponse class provides an interace for ElastiCache TestFailover responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::testFailover
 */

/*!
 * Constructs a TestFailoverResponse object for \a reply to \a request, with parent \a parent.
 */
TestFailoverResponse::TestFailoverResponse(
        const TestFailoverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new TestFailoverResponsePrivate(this), parent)
{
    setRequest(new TestFailoverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestFailoverRequest * TestFailoverResponse::request() const
{
    Q_D(const TestFailoverResponse);
    return static_cast<const TestFailoverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache TestFailover \a response.
 */
void TestFailoverResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestFailoverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::TestFailoverResponsePrivate
 * \brief The TestFailoverResponsePrivate class provides private implementation for TestFailoverResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a TestFailoverResponsePrivate object with public implementation \a q.
 */
TestFailoverResponsePrivate::TestFailoverResponsePrivate(
    TestFailoverResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache TestFailover response element from \a xml.
 */
void TestFailoverResponsePrivate::parseTestFailoverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestFailoverResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
