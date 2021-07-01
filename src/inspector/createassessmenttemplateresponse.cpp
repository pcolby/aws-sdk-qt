/*
    Copyright 2013-2021 Paul Colby

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

#include "createassessmenttemplateresponse.h"
#include "createassessmenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateResponse
 * \brief The CreateAssessmentTemplateResponse class provides an interace for Inspector CreateAssessmentTemplate responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTemplate
 */

/*!
 * Constructs a CreateAssessmentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssessmentTemplateResponse::CreateAssessmentTemplateResponse(
        const CreateAssessmentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateAssessmentTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateAssessmentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssessmentTemplateRequest * CreateAssessmentTemplateResponse::request() const
{
    Q_D(const CreateAssessmentTemplateResponse);
    return static_cast<const CreateAssessmentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector CreateAssessmentTemplate \a response.
 */
void CreateAssessmentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssessmentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateResponsePrivate
 * \brief The CreateAssessmentTemplateResponsePrivate class provides private implementation for CreateAssessmentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateAssessmentTemplateResponsePrivate object with public implementation \a q.
 */
CreateAssessmentTemplateResponsePrivate::CreateAssessmentTemplateResponsePrivate(
    CreateAssessmentTemplateResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateAssessmentTemplate response element from \a xml.
 */
void CreateAssessmentTemplateResponsePrivate::parseCreateAssessmentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssessmentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
