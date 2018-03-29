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

#include "disassociatediscoveredresourceresponse.h"
#include "disassociatediscoveredresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  DisassociateDiscoveredResourceResponse
 *
 * @brief  Handles MigrationHub DisassociateDiscoveredResource responses.
 *
 * @see    MigrationHubClient::disassociateDiscoveredResource
 */

/**
 * @brief  Constructs a new DisassociateDiscoveredResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDiscoveredResourceResponse::DisassociateDiscoveredResourceResponse(
        const DisassociateDiscoveredResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisassociateDiscoveredResourceResponse(new DisassociateDiscoveredResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateDiscoveredResourceRequest(request));
    setReply(reply);
}

const DisassociateDiscoveredResourceRequest * DisassociateDiscoveredResourceResponse::request() const
{
    Q_D(const DisassociateDiscoveredResourceResponse);
    return static_cast<const DisassociateDiscoveredResourceRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub DisassociateDiscoveredResource response.
 *
 * @param  response  Response to parse.
 */
void DisassociateDiscoveredResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateDiscoveredResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateDiscoveredResourceResponsePrivate
 *
 * @brief  Private implementation for DisassociateDiscoveredResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDiscoveredResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateDiscoveredResourceResponse instance.
 */
DisassociateDiscoveredResourceResponsePrivate::DisassociateDiscoveredResourceResponsePrivate(
    DisassociateDiscoveredResourceResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub DisassociateDiscoveredResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateDiscoveredResourceResponsePrivate::parseDisassociateDiscoveredResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDiscoveredResourceResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
