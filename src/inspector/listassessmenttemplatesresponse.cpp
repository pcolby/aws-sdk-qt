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

#include "listassessmenttemplatesresponse.h"
#include "listassessmenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentTemplatesResponse
 * \brief The ListAssessmentTemplatesResponse class provides an interace for Inspector ListAssessmentTemplates responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentTemplates
 */

/*!
 * Constructs a ListAssessmentTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssessmentTemplatesResponse::ListAssessmentTemplatesResponse(
        const ListAssessmentTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssessmentTemplatesRequest * ListAssessmentTemplatesResponse::request() const
{
    Q_D(const ListAssessmentTemplatesResponse);
    return static_cast<const ListAssessmentTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListAssessmentTemplates \a response.
 */
void ListAssessmentTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssessmentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListAssessmentTemplatesResponsePrivate
 * \brief The ListAssessmentTemplatesResponsePrivate class provides private implementation for ListAssessmentTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentTemplatesResponsePrivate object with public implementation \a q.
 */
ListAssessmentTemplatesResponsePrivate::ListAssessmentTemplatesResponsePrivate(
    ListAssessmentTemplatesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListAssessmentTemplates response element from \a xml.
 */
void ListAssessmentTemplatesResponsePrivate::parseListAssessmentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentTemplatesResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
