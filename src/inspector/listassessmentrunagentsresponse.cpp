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

#include "listassessmentrunagentsresponse.h"
#include "listassessmentrunagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentRunAgentsResponse
 * \brief The ListAssessmentRunAgentsResponse class provides an interace for Inspector ListAssessmentRunAgents responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentRunAgents
 */

/*!
 * Constructs a ListAssessmentRunAgentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssessmentRunAgentsResponse::ListAssessmentRunAgentsResponse(
        const ListAssessmentRunAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentRunAgentsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentRunAgentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssessmentRunAgentsRequest * ListAssessmentRunAgentsResponse::request() const
{
    Q_D(const ListAssessmentRunAgentsResponse);
    return static_cast<const ListAssessmentRunAgentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListAssessmentRunAgents \a response.
 */
void ListAssessmentRunAgentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssessmentRunAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListAssessmentRunAgentsResponsePrivate
 * \brief The ListAssessmentRunAgentsResponsePrivate class provides private implementation for ListAssessmentRunAgentsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentRunAgentsResponsePrivate object with public implementation \a q.
 */
ListAssessmentRunAgentsResponsePrivate::ListAssessmentRunAgentsResponsePrivate(
    ListAssessmentRunAgentsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListAssessmentRunAgents response element from \a xml.
 */
void ListAssessmentRunAgentsResponsePrivate::parseListAssessmentRunAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentRunAgentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
