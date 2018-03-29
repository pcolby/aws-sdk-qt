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

#include "deleteconfigurationsettrackingoptionsresponse.h"
#include "deleteconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteConfigurationSetTrackingOptionsResponse
 *
 * @brief  Handles SES DeleteConfigurationSetTrackingOptions responses.
 *
 * @see    SESClient::deleteConfigurationSetTrackingOptions
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationSetTrackingOptionsResponse::DeleteConfigurationSetTrackingOptionsResponse(
        const DeleteConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

const DeleteConfigurationSetTrackingOptionsRequest * DeleteConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const DeleteConfigurationSetTrackingOptionsResponse);
    return static_cast<const DeleteConfigurationSetTrackingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteConfigurationSetTrackingOptions response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetTrackingOptionsResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetTrackingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationSetTrackingOptionsResponse instance.
 */
DeleteConfigurationSetTrackingOptionsResponsePrivate::DeleteConfigurationSetTrackingOptionsResponsePrivate(
    DeleteConfigurationSetTrackingOptionsQueueResponse * const q) : DeleteConfigurationSetTrackingOptionsPrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteConfigurationSetTrackingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationSetTrackingOptionsResponsePrivate::DeleteConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetTrackingOptionsResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
