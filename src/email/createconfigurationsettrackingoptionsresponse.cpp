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

#include "createconfigurationsettrackingoptionsresponse.h"
#include "createconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  CreateConfigurationSetTrackingOptionsResponse
 *
 * @brief  Handles SES CreateConfigurationSetTrackingOptions responses.
 *
 * @see    SESClient::createConfigurationSetTrackingOptions
 */

/**
 * @brief  Constructs a new CreateConfigurationSetTrackingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationSetTrackingOptionsResponse::CreateConfigurationSetTrackingOptionsResponse(
        const CreateConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

const CreateConfigurationSetTrackingOptionsRequest * CreateConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const CreateConfigurationSetTrackingOptionsResponse);
    return static_cast<const CreateConfigurationSetTrackingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateConfigurationSetTrackingOptions response.
 *
 * @param  response  Response to parse.
 */
void CreateConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConfigurationSetTrackingOptionsResponsePrivate
 *
 * @brief  Private implementation for CreateConfigurationSetTrackingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationSetTrackingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConfigurationSetTrackingOptionsResponse instance.
 */
CreateConfigurationSetTrackingOptionsResponsePrivate::CreateConfigurationSetTrackingOptionsResponsePrivate(
    CreateConfigurationSetTrackingOptionsResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES CreateConfigurationSetTrackingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConfigurationSetTrackingOptionsResponsePrivate::CreateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetTrackingOptionsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
