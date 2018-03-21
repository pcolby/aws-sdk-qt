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

#include "getcustomverificationemailtemplateresponse.h"
#include "getcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  GetCustomVerificationEmailTemplateResponse
 *
 * @brief  Handles SES GetCustomVerificationEmailTemplate responses.
 *
 * @see    SESClient::getCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCustomVerificationEmailTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new GetCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

const GetCustomVerificationEmailTemplateRequest * GetCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const GetCustomVerificationEmailTemplateResponse);
    return static_cast<const GetCustomVerificationEmailTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetCustomVerificationEmailTemplate response.
 *
 * @param  response  Response to parse.
 */
void GetCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCustomVerificationEmailTemplateResponsePrivate
 *
 * @brief  Private implementation for GetCustomVerificationEmailTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCustomVerificationEmailTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCustomVerificationEmailTemplateResponse instance.
 */
GetCustomVerificationEmailTemplateResponsePrivate::GetCustomVerificationEmailTemplateResponsePrivate(
    GetCustomVerificationEmailTemplateQueueResponse * const q) : GetCustomVerificationEmailTemplatePrivate(q)
{

}

/**
 * @brief  Parse an SES GetCustomVerificationEmailTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCustomVerificationEmailTemplateResponsePrivate::GetCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomVerificationEmailTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
