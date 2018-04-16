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

#include "deleteassessmenttemplateresponse.h"
#include "deleteassessmenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTemplateResponse
 *
 * \brief The DeleteAssessmentTemplateResponse class encapsulates Inspector DeleteAssessmentTemplate responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTemplate
 */

/*!
 * @brief  Constructs a new DeleteAssessmentTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAssessmentTemplateResponse::DeleteAssessmentTemplateResponse(
        const DeleteAssessmentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentTemplateRequest(request));
    setReply(reply);
}

const DeleteAssessmentTemplateRequest * DeleteAssessmentTemplateResponse::request() const
{
    Q_D(const DeleteAssessmentTemplateResponse);
    return static_cast<const DeleteAssessmentTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector DeleteAssessmentTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteAssessmentTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAssessmentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteAssessmentTemplateResponsePrivate
 *
 * \brief Private implementation for DeleteAssessmentTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAssessmentTemplateResponse instance.
 */
DeleteAssessmentTemplateResponsePrivate::DeleteAssessmentTemplateResponsePrivate(
    DeleteAssessmentTemplateResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector DeleteAssessmentTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAssessmentTemplateResponsePrivate::parseDeleteAssessmentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentTemplateResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
