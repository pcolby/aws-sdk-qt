/*
    Copyright 2013-2021 Paul Colby

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

#include "testsegmentpatternresponse.h"
#include "testsegmentpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::TestSegmentPatternResponse
 * \brief The TestSegmentPatternResponse class provides an interace for Evidently TestSegmentPattern responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::testSegmentPattern
 */

/*!
 * Constructs a TestSegmentPatternResponse object for \a reply to \a request, with parent \a parent.
 */
TestSegmentPatternResponse::TestSegmentPatternResponse(
        const TestSegmentPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new TestSegmentPatternResponsePrivate(this), parent)
{
    setRequest(new TestSegmentPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestSegmentPatternRequest * TestSegmentPatternResponse::request() const
{
    Q_D(const TestSegmentPatternResponse);
    return static_cast<const TestSegmentPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently TestSegmentPattern \a response.
 */
void TestSegmentPatternResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestSegmentPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::TestSegmentPatternResponsePrivate
 * \brief The TestSegmentPatternResponsePrivate class provides private implementation for TestSegmentPatternResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a TestSegmentPatternResponsePrivate object with public implementation \a q.
 */
TestSegmentPatternResponsePrivate::TestSegmentPatternResponsePrivate(
    TestSegmentPatternResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently TestSegmentPattern response element from \a xml.
 */
void TestSegmentPatternResponsePrivate::parseTestSegmentPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestSegmentPatternResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
