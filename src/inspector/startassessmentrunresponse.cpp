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

#include "startassessmentrunresponse.h"
#include "startassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StartAssessmentRunResponse
 * \brief The StartAssessmentRunResponse class provides an interace for Inspector StartAssessmentRun responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::startAssessmentRun
 */

/*!
 * Constructs a StartAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartAssessmentRunResponse::StartAssessmentRunResponse(
        const StartAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new StartAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new StartAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAssessmentRunRequest * StartAssessmentRunResponse::request() const
{
    Q_D(const StartAssessmentRunResponse);
    return static_cast<const StartAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector StartAssessmentRun \a response.
 */
void StartAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::StartAssessmentRunResponsePrivate
 * \brief The StartAssessmentRunResponsePrivate class provides private implementation for StartAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a StartAssessmentRunResponsePrivate object with public implementation \a q.
 */
StartAssessmentRunResponsePrivate::StartAssessmentRunResponsePrivate(
    StartAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector StartAssessmentRun response element from \a xml.
 */
void StartAssessmentRunResponsePrivate::parseStartAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAssessmentRunResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
