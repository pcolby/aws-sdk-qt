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

#include "listcoredefinitionversionsresponse.h"
#include "listcoredefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsResponse
 *
 * \brief The ListCoreDefinitionVersionsResponse class provides an interace for Greengrass ListCoreDefinitionVersions responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listCoreDefinitionVersions
 */

/*!
 * @brief  Constructs a new ListCoreDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCoreDefinitionVersionsResponse::ListCoreDefinitionVersionsResponse(
        const ListCoreDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListCoreDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListCoreDefinitionVersionsRequest * ListCoreDefinitionVersionsResponse::request() const
{
    Q_D(const ListCoreDefinitionVersionsResponse);
    return static_cast<const ListCoreDefinitionVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass ListCoreDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListCoreDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCoreDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListCoreDefinitionVersionsResponsePrivate
 *
 * \brief Private implementation for ListCoreDefinitionVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCoreDefinitionVersionsResponse instance.
 */
ListCoreDefinitionVersionsResponsePrivate::ListCoreDefinitionVersionsResponsePrivate(
    ListCoreDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass ListCoreDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCoreDefinitionVersionsResponsePrivate::parseListCoreDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
