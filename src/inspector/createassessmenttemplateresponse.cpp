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

#include "createassessmenttemplateresponse.h"
#include "createassessmenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  CreateAssessmentTemplateResponse
 *
 * @brief  Handles Inspector CreateAssessmentTemplate responses.
 *
 * @see    InspectorClient::createAssessmentTemplate
 */

/**
 * @brief  Constructs a new CreateAssessmentTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateAssessmentTemplateRequest * CreateAssessmentTemplateResponse::request() const
{
    Q_D(const CreateAssessmentTemplateResponse);
    return static_cast<const CreateAssessmentTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector CreateAssessmentTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateAssessmentTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateAssessmentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAssessmentTemplateResponsePrivate
 *
 * @brief  Private implementation for CreateAssessmentTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAssessmentTemplateResponse instance.
 */
CreateAssessmentTemplateResponsePrivate::CreateAssessmentTemplateResponsePrivate(
    CreateAssessmentTemplateResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector CreateAssessmentTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAssessmentTemplateResponsePrivate::CreateAssessmentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssessmentTemplateResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
