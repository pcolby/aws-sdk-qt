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

#include "deleteconfigurationseteventdestinationresponse.h"
#include "deleteconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  DeleteConfigurationSetEventDestinationResponse
 *
 * @brief  Handles SES DeleteConfigurationSetEventDestination responses.
 *
 * @see    SESClient::deleteConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationSetEventDestinationResponse::DeleteConfigurationSetEventDestinationResponse(
        const DeleteConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

const DeleteConfigurationSetEventDestinationRequest * DeleteConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const DeleteConfigurationSetEventDestinationResponse);
    return static_cast<const DeleteConfigurationSetEventDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteConfigurationSetEventDestination response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetEventDestinationResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetEventDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationSetEventDestinationResponse instance.
 */
DeleteConfigurationSetEventDestinationResponsePrivate::DeleteConfigurationSetEventDestinationResponsePrivate(
    DeleteConfigurationSetEventDestinationResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteConfigurationSetEventDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationSetEventDestinationResponsePrivate::DeleteConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetEventDestinationResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
