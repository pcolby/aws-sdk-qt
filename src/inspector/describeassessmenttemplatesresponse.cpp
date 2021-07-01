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

#include "describeassessmenttemplatesresponse.h"
#include "describeassessmenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTemplatesResponse
 * \brief The DescribeAssessmentTemplatesResponse class provides an interace for Inspector DescribeAssessmentTemplates responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTemplates
 */

/*!
 * Constructs a DescribeAssessmentTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssessmentTemplatesResponse::DescribeAssessmentTemplatesResponse(
        const DescribeAssessmentTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssessmentTemplatesRequest * DescribeAssessmentTemplatesResponse::request() const
{
    Q_D(const DescribeAssessmentTemplatesResponse);
    return static_cast<const DescribeAssessmentTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeAssessmentTemplates \a response.
 */
void DescribeAssessmentTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssessmentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentTemplatesResponsePrivate
 * \brief The DescribeAssessmentTemplatesResponsePrivate class provides private implementation for DescribeAssessmentTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeAssessmentTemplatesResponsePrivate::DescribeAssessmentTemplatesResponsePrivate(
    DescribeAssessmentTemplatesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeAssessmentTemplates response element from \a xml.
 */
void DescribeAssessmentTemplatesResponsePrivate::parseDescribeAssessmentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
