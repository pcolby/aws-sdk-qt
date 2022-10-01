// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
