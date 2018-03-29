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

#include "associateconfigurationitemstoapplicationresponse.h"
#include "associateconfigurationitemstoapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  AssociateConfigurationItemsToApplicationResponse
 *
 * @brief  Handles ApplicationDiscoveryService AssociateConfigurationItemsToApplication responses.
 *
 * @see    ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication
 */

/**
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateConfigurationItemsToApplicationResponse::AssociateConfigurationItemsToApplicationResponse(
        const AssociateConfigurationItemsToApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new AssociateConfigurationItemsToApplicationResponsePrivate(this), parent)
{
    setRequest(new AssociateConfigurationItemsToApplicationRequest(request));
    setReply(reply);
}

const AssociateConfigurationItemsToApplicationRequest * AssociateConfigurationItemsToApplicationResponse::request() const
{
    Q_D(const AssociateConfigurationItemsToApplicationResponse);
    return static_cast<const AssociateConfigurationItemsToApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService AssociateConfigurationItemsToApplication response.
 *
 * @param  response  Response to parse.
 */
void AssociateConfigurationItemsToApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateConfigurationItemsToApplicationResponsePrivate
 *
 * @brief  Private implementation for AssociateConfigurationItemsToApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateConfigurationItemsToApplicationResponse instance.
 */
AssociateConfigurationItemsToApplicationResponsePrivate::AssociateConfigurationItemsToApplicationResponsePrivate(
    AssociateConfigurationItemsToApplicationResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService AssociateConfigurationItemsToApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateConfigurationItemsToApplicationResponsePrivate::AssociateConfigurationItemsToApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConfigurationItemsToApplicationResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
