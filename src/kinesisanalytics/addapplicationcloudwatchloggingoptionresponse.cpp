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

#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "addapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationCloudWatchLoggingOptionResponse
 *
 * @brief  Handles KinesisAnalytics AddApplicationCloudWatchLoggingOption responses.
 *
 * @see    KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationCloudWatchLoggingOptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new AddApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

const AddApplicationCloudWatchLoggingOptionRequest * AddApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const AddApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const AddApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics AddApplicationCloudWatchLoggingOption response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddApplicationCloudWatchLoggingOptionResponsePrivate
 *
 * @brief  Private implementation for AddApplicationCloudWatchLoggingOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationCloudWatchLoggingOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationCloudWatchLoggingOptionResponse instance.
 */
AddApplicationCloudWatchLoggingOptionResponsePrivate::AddApplicationCloudWatchLoggingOptionResponsePrivate(
    AddApplicationCloudWatchLoggingOptionQueueResponse * const q) : AddApplicationCloudWatchLoggingOptionPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics AddApplicationCloudWatchLoggingOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationCloudWatchLoggingOptionResponsePrivate::AddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationCloudWatchLoggingOptionResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace AWS
