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
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
    Q_D(ListAssessmentRunsResponse);
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
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
