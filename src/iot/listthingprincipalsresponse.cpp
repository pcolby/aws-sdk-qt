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

#include "listthingprincipalsresponse.h"
#include "listthingprincipalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingPrincipalsResponse
 *
 * @brief  Handles IoT ListThingPrincipals responses.
 *
 * @see    IoTClient::listThingPrincipals
 */

/**
 * @brief  Constructs a new ListThingPrincipalsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingPrincipalsResponse::ListThingPrincipalsResponse(
        const ListThingPrincipalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingPrincipalsResponsePrivate(this), parent)
{
    setRequest(new ListThingPrincipalsRequest(request));
    setReply(reply);
}

const ListThingPrincipalsRequest * ListThingPrincipalsResponse::request() const
{
    Q_D(const ListThingPrincipalsResponse);
    return static_cast<const ListThingPrincipalsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingPrincipals response.
 *
 * @param  response  Response to parse.
 */
void ListThingPrincipalsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThingPrincipalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingPrincipalsResponsePrivate
 *
 * @brief  Private implementation for ListThingPrincipalsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingPrincipalsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingPrincipalsResponse instance.
 */
ListThingPrincipalsResponsePrivate::ListThingPrincipalsResponsePrivate(
    ListThingPrincipalsResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingPrincipalsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingPrincipalsResponsePrivate::ListThingPrincipalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingPrincipalsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
