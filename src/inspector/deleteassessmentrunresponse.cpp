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

#include "deleteassessmentrunresponse.h"
#include "deleteassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentRunResponse
 *
 * \brief The DeleteAssessmentRunResponse class encapsulates Inspector DeleteAssessmentRun responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentRun
 */

/*!
 * @brief  Constructs a new DeleteAssessmentRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DeleteAssessmentRunRequest * DeleteAssessmentRunResponse::request() const
{
    Q_D(const DeleteAssessmentRunResponse);
    return static_cast<const DeleteAssessmentRunRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector DeleteAssessmentRun response.
 *
 * @param  response  Response to parse.
 */
void DeleteAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteAssessmentRunResponsePrivate
 *
 * \brief Private implementation for DeleteAssessmentRunResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAssessmentRunResponse instance.
 */
DeleteAssessmentRunResponsePrivate::DeleteAssessmentRunResponsePrivate(
    DeleteAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector DeleteAssessmentRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAssessmentRunResponsePrivate::parseDeleteAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentRunResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
