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

#include "createassessmenttargetresponse.h"
#include "createassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTargetResponse
 * \brief The CreateAssessmentTargetResponse class provides an interace for Inspector CreateAssessmentTarget responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTarget
 */

/*!
 * Constructs a CreateAssessmentTargetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssessmentTargetResponse::CreateAssessmentTargetResponse(
        const CreateAssessmentTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new CreateAssessmentTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssessmentTargetRequest * CreateAssessmentTargetResponse::request() const
{
    Q_D(const CreateAssessmentTargetResponse);
    return static_cast<const CreateAssessmentTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector CreateAssessmentTarget \a response.
 */
void CreateAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssessmentTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateAssessmentTargetResponsePrivate
 * \brief The CreateAssessmentTargetResponsePrivate class provides private implementation for CreateAssessmentTargetResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateAssessmentTargetResponsePrivate object with public implementation \a q.
 */
CreateAssessmentTargetResponsePrivate::CreateAssessmentTargetResponsePrivate(
    CreateAssessmentTargetResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateAssessmentTarget response element from \a xml.
 */
void CreateAssessmentTargetResponsePrivate::parseCreateAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssessmentTargetResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
