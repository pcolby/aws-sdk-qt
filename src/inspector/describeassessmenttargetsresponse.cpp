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

#include "describeassessmenttargetsresponse.h"
#include "describeassessmenttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsResponse
 * \brief The DescribeAssessmentTargetsResponse class provides an interace for Inspector DescribeAssessmentTargets responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTargets
 */

/*!
 * Constructs a DescribeAssessmentTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssessmentTargetsResponse::DescribeAssessmentTargetsResponse(
        const DescribeAssessmentTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssessmentTargetsRequest * DescribeAssessmentTargetsResponse::request() const
{
    Q_D(const DescribeAssessmentTargetsResponse);
    return static_cast<const DescribeAssessmentTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeAssessmentTargets \a response.
 */
void DescribeAssessmentTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssessmentTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsResponsePrivate
 * \brief The DescribeAssessmentTargetsResponsePrivate class provides private implementation for DescribeAssessmentTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentTargetsResponsePrivate object with public implementation \a q.
 */
DescribeAssessmentTargetsResponsePrivate::DescribeAssessmentTargetsResponsePrivate(
    DescribeAssessmentTargetsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeAssessmentTargets response element from \a xml.
 */
void DescribeAssessmentTargetsResponsePrivate::parseDescribeAssessmentTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
