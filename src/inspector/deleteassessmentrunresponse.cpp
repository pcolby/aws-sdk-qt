/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteassessmentrunresponse.h"
#include "deleteassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunResponse
 * \brief The DeleteAssessmentRunResponse class provides an interace for Inspector DeleteAssessmentRun responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentRun
 */

/*!
 * Constructs a DeleteAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssessmentRunResponse::DeleteAssessmentRunResponse(
        const DeleteAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssessmentRunRequest * DeleteAssessmentRunResponse::request() const
{
    Q_D(const DeleteAssessmentRunResponse);
    return static_cast<const DeleteAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DeleteAssessmentRun \a response.
 */
void DeleteAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunResponsePrivate
 * \brief The DeleteAssessmentRunResponsePrivate class provides private implementation for DeleteAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentRunResponsePrivate object with public implementation \a q.
 */
DeleteAssessmentRunResponsePrivate::DeleteAssessmentRunResponsePrivate(
    DeleteAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DeleteAssessmentRun response element from \a xml.
 */
void DeleteAssessmentRunResponsePrivate::parseDeleteAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
