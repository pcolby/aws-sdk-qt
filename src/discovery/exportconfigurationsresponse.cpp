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

#include "exportconfigurationsresponse.h"
#include "exportconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  ExportConfigurationsResponse
 *
 * @brief  Handles ApplicationDiscoveryService ExportConfigurations responses.
 *
 * @see    ApplicationDiscoveryServiceClient::exportConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new ExportConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ExportConfigurationsRequest(request));
    setReply(reply);
}

const ExportConfigurationsRequest * ExportConfigurationsResponse::request() const
{
    Q_D(const ExportConfigurationsResponse);
    return static_cast<const ExportConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService ExportConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ExportConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExportConfigurationsResponsePrivate
 *
 * @brief  Private implementation for ExportConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExportConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportConfigurationsResponse instance.
 */
ExportConfigurationsResponsePrivate::ExportConfigurationsResponsePrivate(
    ExportConfigurationsQueueResponse * const q) : ExportConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService ExportConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportConfigurationsResponsePrivate::ExportConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportConfigurationsResponse"));
    /// @todo
}
