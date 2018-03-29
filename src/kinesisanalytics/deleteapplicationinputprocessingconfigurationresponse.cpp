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

#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "deleteapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationInputProcessingConfigurationResponse
 *
 * @brief  Handles KinesisAnalytics DeleteApplicationInputProcessingConfiguration responses.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration
 */

/**
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationInputProcessingConfigurationResponse::DeleteApplicationInputProcessingConfigurationResponse(
        const DeleteApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

const DeleteApplicationInputProcessingConfigurationRequest * DeleteApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const DeleteApplicationInputProcessingConfigurationResponse);
    return static_cast<const DeleteApplicationInputProcessingConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DeleteApplicationInputProcessingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationInputProcessingConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationInputProcessingConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationInputProcessingConfigurationResponse instance.
 */
DeleteApplicationInputProcessingConfigurationResponsePrivate::DeleteApplicationInputProcessingConfigurationResponsePrivate(
    DeleteApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DeleteApplicationInputProcessingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationInputProcessingConfigurationResponsePrivate::DeleteApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationInputProcessingConfigurationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
