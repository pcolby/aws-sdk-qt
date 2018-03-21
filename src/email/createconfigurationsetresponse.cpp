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

#include "createconfigurationsetresponse.h"
#include "createconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  CreateConfigurationSetResponse
 *
 * @brief  Handles SES CreateConfigurationSet responses.
 *
 * @see    SESClient::createConfigurationSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetRequest(request));
    setReply(reply);
}

const CreateConfigurationSetRequest * CreateConfigurationSetResponse::request() const
{
    Q_D(const CreateConfigurationSetResponse);
    return static_cast<const CreateConfigurationSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateConfigurationSet response.
 *
 * @param  response  Response to parse.
 */
void CreateConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConfigurationSetResponsePrivate
 *
 * @brief  Private implementation for CreateConfigurationSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConfigurationSetResponse instance.
 */
CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponsePrivate(
    CreateConfigurationSetQueueResponse * const q) : CreateConfigurationSetPrivate(q)
{

}

/**
 * @brief  Parse an SES CreateConfigurationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
