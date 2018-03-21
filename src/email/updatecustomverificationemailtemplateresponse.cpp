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

#include "updatecustomverificationemailtemplateresponse.h"
#include "updatecustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  UpdateCustomVerificationEmailTemplateResponse
 *
 * @brief  Handles SES UpdateCustomVerificationEmailTemplate responses.
 *
 * @see    SESClient::updateCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCustomVerificationEmailTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

const UpdateCustomVerificationEmailTemplateRequest * UpdateCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const UpdateCustomVerificationEmailTemplateResponse);
    return static_cast<const UpdateCustomVerificationEmailTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateCustomVerificationEmailTemplate response.
 *
 * @param  response  Response to parse.
 */
void UpdateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCustomVerificationEmailTemplateResponsePrivate
 *
 * @brief  Private implementation for UpdateCustomVerificationEmailTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCustomVerificationEmailTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCustomVerificationEmailTemplateResponse instance.
 */
UpdateCustomVerificationEmailTemplateResponsePrivate::UpdateCustomVerificationEmailTemplateResponsePrivate(
    UpdateCustomVerificationEmailTemplateQueueResponse * const q) : UpdateCustomVerificationEmailTemplatePrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateCustomVerificationEmailTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCustomVerificationEmailTemplateResponsePrivate::UpdateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCustomVerificationEmailTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
