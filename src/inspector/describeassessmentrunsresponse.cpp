// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassessmentrunsresponse.h"
#include "describeassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsResponse
 * \brief The DescribeAssessmentRunsResponse class provides an interace for Inspector DescribeAssessmentRuns responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentRuns
 */

/*!
 * Constructs a DescribeAssessmentRunsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssessmentRunsResponse::DescribeAssessmentRunsResponse(
        const DescribeAssessmentRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentRunsResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssessmentRunsRequest * DescribeAssessmentRunsResponse::request() const
{
    Q_D(const DescribeAssessmentRunsResponse);
    return static_cast<const DescribeAssessmentRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeAssessmentRuns \a response.
 */
void DescribeAssessmentRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssessmentRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsResponsePrivate
 * \brief The DescribeAssessmentRunsResponsePrivate class provides private implementation for DescribeAssessmentRunsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentRunsResponsePrivate object with public implementation \a q.
 */
DescribeAssessmentRunsResponsePrivate::DescribeAssessmentRunsResponsePrivate(
    DescribeAssessmentRunsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeAssessmentRuns response element from \a xml.
 */
void DescribeAssessmentRunsResponsePrivate::parseDescribeAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
