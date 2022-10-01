// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
