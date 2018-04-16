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

#include "updateassessmenttargetresponse.h"
#include "updateassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UpdateAssessmentTargetResponse
 *
 * \brief The UpdateAssessmentTargetResponse class provides an interace for Inspector UpdateAssessmentTarget responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::updateAssessmentTarget
 */

/*!
 * @brief  Constructs a new UpdateAssessmentTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssessmentTargetResponse::UpdateAssessmentTargetResponse(
        const UpdateAssessmentTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new UpdateAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new UpdateAssessmentTargetRequest(request));
    setReply(reply);
}

const UpdateAssessmentTargetRequest * UpdateAssessmentTargetResponse::request() const
{
    Q_D(const UpdateAssessmentTargetResponse);
    return static_cast<const UpdateAssessmentTargetRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector UpdateAssessmentTarget response.
 *
 * @param  response  Response to parse.
 */
void UpdateAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAssessmentTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateAssessmentTargetResponsePrivate
 *
 * \brief Private implementation for UpdateAssessmentTargetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateAssessmentTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAssessmentTargetResponse instance.
 */
UpdateAssessmentTargetResponsePrivate::UpdateAssessmentTargetResponsePrivate(
    UpdateAssessmentTargetResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector UpdateAssessmentTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAssessmentTargetResponsePrivate::parseUpdateAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssessmentTargetResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
