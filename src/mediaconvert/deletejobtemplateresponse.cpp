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

#include "deletejobtemplateresponse.h"
#include "deletejobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  DeleteJobTemplateResponse
 *
 * @brief  Handles MediaConvert DeleteJobTemplate responses.
 *
 * @see    MediaConvertClient::deleteJobTemplate
 */

/**
 * @brief  Constructs a new DeleteJobTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteJobTemplateResponse::DeleteJobTemplateResponse(
        const DeleteJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteJobTemplateResponse(new DeleteJobTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteJobTemplateRequest(request));
    setReply(reply);
}

const DeleteJobTemplateRequest * DeleteJobTemplateResponse::request() const
{
    Q_D(const DeleteJobTemplateResponse);
    return static_cast<const DeleteJobTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert DeleteJobTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteJobTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteJobTemplateResponsePrivate
 *
 * @brief  Private implementation for DeleteJobTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteJobTemplateResponse instance.
 */
DeleteJobTemplateResponsePrivate::DeleteJobTemplateResponsePrivate(
    DeleteJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert DeleteJobTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteJobTemplateResponsePrivate::parseDeleteJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
