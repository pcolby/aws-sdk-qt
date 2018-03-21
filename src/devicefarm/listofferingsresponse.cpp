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

#include "listofferingsresponse.h"
#include "listofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListOfferingsResponse
 *
 * @brief  Handles DeviceFarm ListOfferings responses.
 *
 * @see    DeviceFarmClient::listOfferings
 */

/**
 * @brief  Constructs a new ListOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOfferingsResponse::ListOfferingsResponse(
        const ListOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingsRequest(request));
    setReply(reply);
}

const ListOfferingsRequest * ListOfferingsResponse::request() const
{
    Q_D(const ListOfferingsResponse);
    return static_cast<const ListOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListOfferings response.
 *
 * @param  response  Response to parse.
 */
void ListOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOfferingsResponsePrivate
 *
 * @brief  Private implementation for ListOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOfferingsResponse instance.
 */
ListOfferingsResponsePrivate::ListOfferingsResponsePrivate(
    ListOfferingsQueueResponse * const q) : ListOfferingsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOfferingsResponsePrivate::ListOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
