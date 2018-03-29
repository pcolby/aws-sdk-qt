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

#include "createconfigurationseteventdestinationresponse.h"
#include "createconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  CreateConfigurationSetEventDestinationResponse
 *
 * @brief  Handles SES CreateConfigurationSetEventDestination responses.
 *
 * @see    SESClient::createConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new CreateConfigurationSetEventDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationSetEventDestinationResponse::CreateConfigurationSetEventDestinationResponse(
        const CreateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

const CreateConfigurationSetEventDestinationRequest * CreateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const CreateConfigurationSetEventDestinationResponse);
    return static_cast<const CreateConfigurationSetEventDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateConfigurationSetEventDestination response.
 *
 * @param  response  Response to parse.
 */
void CreateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConfigurationSetEventDestinationResponsePrivate
 *
 * @brief  Private implementation for CreateConfigurationSetEventDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationSetEventDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConfigurationSetEventDestinationResponse instance.
 */
CreateConfigurationSetEventDestinationResponsePrivate::CreateConfigurationSetEventDestinationResponsePrivate(
    CreateConfigurationSetEventDestinationResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES CreateConfigurationSetEventDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConfigurationSetEventDestinationResponsePrivate::CreateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetEventDestinationResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
