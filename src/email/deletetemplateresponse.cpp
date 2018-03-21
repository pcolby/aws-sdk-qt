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

#include "deletetemplateresponse.h"
#include "deletetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteTemplateResponse
 *
 * @brief  Handles SES DeleteTemplate responses.
 *
 * @see    SESClient::deleteTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteTemplateRequest(request));
    setReply(reply);
}

const DeleteTemplateRequest * DeleteTemplateResponse::request() const
{
    Q_D(const DeleteTemplateResponse);
    return static_cast<const DeleteTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTemplateResponsePrivate
 *
 * @brief  Private implementation for DeleteTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTemplateResponse instance.
 */
DeleteTemplateResponsePrivate::DeleteTemplateResponsePrivate(
    DeleteTemplateQueueResponse * const q) : DeleteTemplatePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTemplateResponsePrivate::DeleteTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
