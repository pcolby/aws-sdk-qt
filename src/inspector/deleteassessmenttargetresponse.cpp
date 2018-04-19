/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteassessmenttargetresponse.h"
#include "deleteassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTargetResponse
 * \brief The DeleteAssessmentTargetResponse class provides an interace for Inspector DeleteAssessmentTarget responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTarget
 */

/*!
 * Constructs a DeleteAssessmentTargetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssessmentTargetResponse::DeleteAssessmentTargetResponse(
        const DeleteAssessmentTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssessmentTargetRequest * DeleteAssessmentTargetResponse::request() const
{
    Q_D(const DeleteAssessmentTargetResponse);
    return static_cast<const DeleteAssessmentTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DeleteAssessmentTarget \a response.
 */
void DeleteAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAssessmentTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentTargetResponsePrivate
 * \brief The DeleteAssessmentTargetResponsePrivate class provides private implementation for DeleteAssessmentTargetResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentTargetResponsePrivate object with public implementation \a q.
 */
DeleteAssessmentTargetResponsePrivate::DeleteAssessmentTargetResponsePrivate(
    DeleteAssessmentTargetResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DeleteAssessmentTarget response element from \a xml.
 */
void DeleteAssessmentTargetResponsePrivate::parseDeleteAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentTargetResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
