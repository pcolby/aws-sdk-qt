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

#include "createcustomverificationemailtemplateresponse.h"
#include "createcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  CreateCustomVerificationEmailTemplateResponse
 *
 * @brief  Handles SES CreateCustomVerificationEmailTemplate responses.
 *
 * @see    SESClient::createCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new CreateCustomVerificationEmailTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCustomVerificationEmailTemplateResponse::CreateCustomVerificationEmailTemplateResponse(
        const CreateCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

const CreateCustomVerificationEmailTemplateRequest * CreateCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const CreateCustomVerificationEmailTemplateResponse);
    return static_cast<const CreateCustomVerificationEmailTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateCustomVerificationEmailTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCustomVerificationEmailTemplateResponsePrivate
 *
 * @brief  Private implementation for CreateCustomVerificationEmailTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomVerificationEmailTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCustomVerificationEmailTemplateResponse instance.
 */
CreateCustomVerificationEmailTemplateResponsePrivate::CreateCustomVerificationEmailTemplateResponsePrivate(
    CreateCustomVerificationEmailTemplateQueueResponse * const q) : CreateCustomVerificationEmailTemplatePrivate(q)
{

}

/**
 * @brief  Parse an SES CreateCustomVerificationEmailTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCustomVerificationEmailTemplateResponsePrivate::CreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomVerificationEmailTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
