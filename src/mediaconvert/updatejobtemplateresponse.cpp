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

#include "updatejobtemplateresponse.h"
#include "updatejobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  UpdateJobTemplateResponse
 *
 * @brief  Handles MediaConvert UpdateJobTemplate responses.
 *
 * @see    MediaConvertClient::updateJobTemplate
 */

/**
 * @brief  Constructs a new UpdateJobTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobTemplateResponse::UpdateJobTemplateResponse(
        const UpdateJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateJobTemplateResponse(new UpdateJobTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateJobTemplateRequest(request));
    setReply(reply);
}

const UpdateJobTemplateRequest * UpdateJobTemplateResponse::request() const
{
    Q_D(const UpdateJobTemplateResponse);
    return static_cast<const UpdateJobTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert UpdateJobTemplate response.
 *
 * @param  response  Response to parse.
 */
void UpdateJobTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateJobTemplateResponsePrivate
 *
 * @brief  Private implementation for UpdateJobTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateJobTemplateResponse instance.
 */
UpdateJobTemplateResponsePrivate::UpdateJobTemplateResponsePrivate(
    UpdateJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert UpdateJobTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateJobTemplateResponsePrivate::parseUpdateJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
