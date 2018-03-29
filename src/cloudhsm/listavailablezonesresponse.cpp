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

#include "listavailablezonesresponse.h"
#include "listavailablezonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  ListAvailableZonesResponse
 *
 * @brief  Handles CloudHSM ListAvailableZones responses.
 *
 * @see    CloudHSMClient::listAvailableZones
 */

/**
 * @brief  Constructs a new ListAvailableZonesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAvailableZonesResponse::ListAvailableZonesResponse(
        const ListAvailableZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListAvailableZonesResponsePrivate(this), parent)
{
    setRequest(new ListAvailableZonesRequest(request));
    setReply(reply);
}

const ListAvailableZonesRequest * ListAvailableZonesResponse::request() const
{
    Q_D(const ListAvailableZonesResponse);
    return static_cast<const ListAvailableZonesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ListAvailableZones response.
 *
 * @param  response  Response to parse.
 */
void ListAvailableZonesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAvailableZonesResponsePrivate
 *
 * @brief  Private implementation for ListAvailableZonesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAvailableZonesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAvailableZonesResponse instance.
 */
ListAvailableZonesResponsePrivate::ListAvailableZonesResponsePrivate(
    ListAvailableZonesQueueResponse * const q) : ListAvailableZonesPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ListAvailableZonesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAvailableZonesResponsePrivate::ListAvailableZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableZonesResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
