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

#include "listdeploymentsresponse.h"
#include "listdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListDeploymentsResponse
 *
 * @brief  Handles Greengrass ListDeployments responses.
 *
 * @see    GreengrassClient::listDeployments
 */

/**
 * @brief  Constructs a new ListDeploymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentsResponse::ListDeploymentsResponse(
        const ListDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListDeploymentsResponse(new ListDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentsRequest(request));
    setReply(reply);
}

const ListDeploymentsRequest * ListDeploymentsResponse::request() const
{
    Q_D(const ListDeploymentsResponse);
    return static_cast<const ListDeploymentsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListDeployments response.
 *
 * @param  response  Response to parse.
 */
void ListDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeploymentsResponsePrivate
 *
 * @brief  Private implementation for ListDeploymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeploymentsResponse instance.
 */
ListDeploymentsResponsePrivate::ListDeploymentsResponsePrivate(
    ListDeploymentsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListDeploymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeploymentsResponsePrivate::parseListDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
