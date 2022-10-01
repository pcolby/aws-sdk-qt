// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
