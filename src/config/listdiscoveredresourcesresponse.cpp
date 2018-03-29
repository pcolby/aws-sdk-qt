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

#include "listdiscoveredresourcesresponse.h"
#include "listdiscoveredresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  ListDiscoveredResourcesResponse
 *
 * @brief  Handles ConfigService ListDiscoveredResources responses.
 *
 * @see    ConfigServiceClient::listDiscoveredResources
 */

/**
 * @brief  Constructs a new ListDiscoveredResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDiscoveredResourcesResponse::ListDiscoveredResourcesResponse(
        const ListDiscoveredResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new ListDiscoveredResourcesResponsePrivate(this), parent)
{
    setRequest(new ListDiscoveredResourcesRequest(request));
    setReply(reply);
}

const ListDiscoveredResourcesRequest * ListDiscoveredResourcesResponse::request() const
{
    Q_D(const ListDiscoveredResourcesResponse);
    return static_cast<const ListDiscoveredResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService ListDiscoveredResources response.
 *
 * @param  response  Response to parse.
 */
void ListDiscoveredResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDiscoveredResourcesResponsePrivate
 *
 * @brief  Private implementation for ListDiscoveredResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDiscoveredResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDiscoveredResourcesResponse instance.
 */
ListDiscoveredResourcesResponsePrivate::ListDiscoveredResourcesResponsePrivate(
    ListDiscoveredResourcesResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService ListDiscoveredResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDiscoveredResourcesResponsePrivate::ListDiscoveredResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDiscoveredResourcesResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
