/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletejobtemplateresponse.h"
#include "deletejobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  DeleteJobTemplateResponse
 *
 * @brief  Handles MediaConvert DeleteJobTemplate responses.
 *
 * @see    MediaConvertClient::deleteJobTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteJobTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeleteJobTemplateResponsePrivate(this), parent)
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
    Q_D(Response);
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
    DeleteJobTemplateQueueResponse * const q) : DeleteJobTemplatePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert DeleteJobTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteJobTemplateResponsePrivate::DeleteJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobTemplateResponse"));
    /// @todo
}
