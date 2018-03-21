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

#include "getgroupcertificateconfigurationresponse.h"
#include "getgroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetGroupCertificateConfigurationResponse
 *
 * @brief  Handles Greengrass GetGroupCertificateConfiguration responses.
 *
 * @see    GreengrassClient::getGroupCertificateConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupCertificateConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

const GetGroupCertificateConfigurationRequest * GetGroupCertificateConfigurationResponse::request() const
{
    Q_D(const GetGroupCertificateConfigurationResponse);
    return static_cast<const GetGroupCertificateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetGroupCertificateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGroupCertificateConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetGroupCertificateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGroupCertificateConfigurationResponse instance.
 */
GetGroupCertificateConfigurationResponsePrivate::GetGroupCertificateConfigurationResponsePrivate(
    GetGroupCertificateConfigurationQueueResponse * const q) : GetGroupCertificateConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetGroupCertificateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGroupCertificateConfigurationResponsePrivate::GetGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupCertificateConfigurationResponse"));
    /// @todo
}
