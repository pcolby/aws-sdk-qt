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

#include "listservicesresponse.h"
#include "listservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  ListServicesResponse
 *
 * @brief  Handles ECS ListServices responses.
 *
 * @see    ECSClient::listServices
 */

/**
 * @brief  Constructs a new ListServicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListServicesResponse::ListServicesResponse(
        const ListServicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListServicesResponsePrivate(this), parent)
{
    setRequest(new ListServicesRequest(request));
    setReply(reply);
}

const ListServicesRequest * ListServicesResponse::request() const
{
    Q_D(const ListServicesResponse);
    return static_cast<const ListServicesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListServices response.
 *
 * @param  response  Response to parse.
 */
void ListServicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListServicesResponsePrivate
 *
 * @brief  Private implementation for ListServicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListServicesResponse instance.
 */
ListServicesResponsePrivate::ListServicesResponsePrivate(
    ListServicesQueueResponse * const q) : ListServicesPrivate(q)
{

}

/**
 * @brief  Parse an ECS ListServicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListServicesResponsePrivate::ListServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServicesResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
