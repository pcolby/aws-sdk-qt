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

#include "listsubscriptiondefinitionversionsresponse.h"
#include "listsubscriptiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionVersionsResponse
 *
 * \brief The ListSubscriptionDefinitionVersionsResponse class provides an interace for Greengrass ListSubscriptionDefinitionVersions responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listSubscriptionDefinitionVersions
 */

/*!
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionDefinitionVersionsResponse::ListSubscriptionDefinitionVersionsResponse(
        const ListSubscriptionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListSubscriptionDefinitionVersionsRequest * ListSubscriptionDefinitionVersionsResponse::request() const
{
    Q_D(const ListSubscriptionDefinitionVersionsResponse);
    return static_cast<const ListSubscriptionDefinitionVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass ListSubscriptionDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListSubscriptionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSubscriptionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListSubscriptionDefinitionVersionsResponsePrivate
 *
 * \brief Private implementation for ListSubscriptionDefinitionVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscriptionDefinitionVersionsResponse instance.
 */
ListSubscriptionDefinitionVersionsResponsePrivate::ListSubscriptionDefinitionVersionsResponsePrivate(
    ListSubscriptionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass ListSubscriptionDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscriptionDefinitionVersionsResponsePrivate::parseListSubscriptionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
