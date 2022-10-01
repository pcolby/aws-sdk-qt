// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassessmentrunsresponse.h"
#include "listassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentRunsResponse
 * \brief The ListAssessmentRunsResponse class provides an interace for Inspector ListAssessmentRuns responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentRuns
 */

/*!
 * Constructs a ListAssessmentRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssessmentRunsResponse::ListAssessmentRunsResponse(
        const ListAssessmentRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentRunsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssessmentRunsRequest * ListAssessmentRunsResponse::request() const
{
    Q_D(const ListAssessmentRunsResponse);
    return static_cast<const ListAssessmentRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListAssessmentRuns \a response.
 */
void ListAssessmentRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssessmentRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListAssessmentRunsResponsePrivate
 * \brief The ListAssessmentRunsResponsePrivate class provides private implementation for ListAssessmentRunsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentRunsResponsePrivate object with public implementation \a q.
 */
ListAssessmentRunsResponsePrivate::ListAssessmentRunsResponsePrivate(
    ListAssessmentRunsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListAssessmentRuns response element from \a xml.
 */
void ListAssessmentRunsResponsePrivate::parseListAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
