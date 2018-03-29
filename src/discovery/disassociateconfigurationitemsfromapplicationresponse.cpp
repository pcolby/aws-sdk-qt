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

#include "disassociateconfigurationitemsfromapplicationresponse.h"
#include "disassociateconfigurationitemsfromapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DisassociateConfigurationItemsFromApplicationResponse
 *
 * @brief  Handles ApplicationDiscoveryService DisassociateConfigurationItemsFromApplication responses.
 *
 * @see    ApplicationDiscoveryServiceClient::disassociateConfigurationItemsFromApplication
 */

/**
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateConfigurationItemsFromApplicationResponse::DisassociateConfigurationItemsFromApplicationResponse(
        const DisassociateConfigurationItemsFromApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisassociateConfigurationItemsFromApplicationResponse(new DisassociateConfigurationItemsFromApplicationResponsePrivate(this), parent)
{
    setRequest(new DisassociateConfigurationItemsFromApplicationRequest(request));
    setReply(reply);
}

const DisassociateConfigurationItemsFromApplicationRequest * DisassociateConfigurationItemsFromApplicationResponse::request() const
{
    Q_D(const DisassociateConfigurationItemsFromApplicationResponse);
    return static_cast<const DisassociateConfigurationItemsFromApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService DisassociateConfigurationItemsFromApplication response.
 *
 * @param  response  Response to parse.
 */
void DisassociateConfigurationItemsFromApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateConfigurationItemsFromApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateConfigurationItemsFromApplicationResponsePrivate
 *
 * @brief  Private implementation for DisassociateConfigurationItemsFromApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateConfigurationItemsFromApplicationResponse instance.
 */
DisassociateConfigurationItemsFromApplicationResponsePrivate::DisassociateConfigurationItemsFromApplicationResponsePrivate(
    DisassociateConfigurationItemsFromApplicationResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService DisassociateConfigurationItemsFromApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateConfigurationItemsFromApplicationResponsePrivate::parseDisassociateConfigurationItemsFromApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConfigurationItemsFromApplicationResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
