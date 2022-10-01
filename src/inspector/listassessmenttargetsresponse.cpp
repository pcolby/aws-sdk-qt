// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassessmenttargetsresponse.h"
#include "listassessmenttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentTargetsResponse
 * \brief The ListAssessmentTargetsResponse class provides an interace for Inspector ListAssessmentTargets responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentTargets
 */

/*!
 * Constructs a ListAssessmentTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssessmentTargetsResponse::ListAssessmentTargetsResponse(
        const ListAssessmentTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentTargetsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssessmentTargetsRequest * ListAssessmentTargetsResponse::request() const
{
    Q_D(const ListAssessmentTargetsResponse);
    return static_cast<const ListAssessmentTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListAssessmentTargets \a response.
 */
void ListAssessmentTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssessmentTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListAssessmentTargetsResponsePrivate
 * \brief The ListAssessmentTargetsResponsePrivate class provides private implementation for ListAssessmentTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListAssessmentTargetsResponsePrivate object with public implementation \a q.
 */
ListAssessmentTargetsResponsePrivate::ListAssessmentTargetsResponsePrivate(
    ListAssessmentTargetsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListAssessmentTargets response element from \a xml.
 */
void ListAssessmentTargetsResponsePrivate::parseListAssessmentTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
