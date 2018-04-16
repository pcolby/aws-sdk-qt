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

#include "addapplicationinputprocessingconfigurationresponse.h"
#include "addapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationResponse
 *
 * \brief The AddApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalytics AddApplicationInputProcessingConfiguration responses.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationInputProcessingConfiguration
 */

/*!
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationInputProcessingConfigurationResponse::AddApplicationInputProcessingConfigurationResponse(
        const AddApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

const AddApplicationInputProcessingConfigurationRequest * AddApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const AddApplicationInputProcessingConfigurationResponse);
    return static_cast<const AddApplicationInputProcessingConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisAnalytics AddApplicationInputProcessingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AddApplicationInputProcessingConfigurationResponsePrivate
 *
 * \brief Private implementation for AddApplicationInputProcessingConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputProcessingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationInputProcessingConfigurationResponse instance.
 */
AddApplicationInputProcessingConfigurationResponsePrivate::AddApplicationInputProcessingConfigurationResponsePrivate(
    AddApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisAnalytics AddApplicationInputProcessingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationInputProcessingConfigurationResponsePrivate::parseAddApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputProcessingConfigurationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
