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

#include "listofferingpromotionsresponse.h"
#include "listofferingpromotionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListOfferingPromotionsResponse
 *
 * @brief  Handles DeviceFarm ListOfferingPromotions responses.
 *
 * @see    DeviceFarmClient::listOfferingPromotions
 */

/**
 * @brief  Constructs a new ListOfferingPromotionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOfferingPromotionsResponse::ListOfferingPromotionsResponse(
        const ListOfferingPromotionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingPromotionsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingPromotionsRequest(request));
    setReply(reply);
}

const ListOfferingPromotionsRequest * ListOfferingPromotionsResponse::request() const
{
    Q_D(const ListOfferingPromotionsResponse);
    return static_cast<const ListOfferingPromotionsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListOfferingPromotions response.
 *
 * @param  response  Response to parse.
 */
void ListOfferingPromotionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOfferingPromotionsResponsePrivate
 *
 * @brief  Private implementation for ListOfferingPromotionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingPromotionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOfferingPromotionsResponse instance.
 */
ListOfferingPromotionsResponsePrivate::ListOfferingPromotionsResponsePrivate(
    ListOfferingPromotionsQueueResponse * const q) : ListOfferingPromotionsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListOfferingPromotionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOfferingPromotionsResponsePrivate::ListOfferingPromotionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingPromotionsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
