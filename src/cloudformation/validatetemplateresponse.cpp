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

#include "validatetemplateresponse.h"
#include "validatetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ValidateTemplateResponse
 *
 * @brief  Handles CloudFormation ValidateTemplate responses.
 *
 * @see    CloudFormationClient::validateTemplate
 */

/**
 * @brief  Constructs a new ValidateTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ValidateTemplateResponse::ValidateTemplateResponse(
        const ValidateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ValidateTemplateResponsePrivate(this), parent)
{
    setRequest(new ValidateTemplateRequest(request));
    setReply(reply);
}

const ValidateTemplateRequest * ValidateTemplateResponse::request() const
{
    Q_D(const ValidateTemplateResponse);
    return static_cast<const ValidateTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ValidateTemplate response.
 *
 * @param  response  Response to parse.
 */
void ValidateTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(ValidateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ValidateTemplateResponsePrivate
 *
 * @brief  Private implementation for ValidateTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidateTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ValidateTemplateResponse instance.
 */
ValidateTemplateResponsePrivate::ValidateTemplateResponsePrivate(
    ValidateTemplateResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ValidateTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ValidateTemplateResponsePrivate::ValidateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ValidateTemplateResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
