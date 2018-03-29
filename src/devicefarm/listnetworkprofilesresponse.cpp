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

#include "listnetworkprofilesresponse.h"
#include "listnetworkprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListNetworkProfilesResponse
 *
 * @brief  Handles DeviceFarm ListNetworkProfiles responses.
 *
 * @see    DeviceFarmClient::listNetworkProfiles
 */

/**
 * @brief  Constructs a new ListNetworkProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNetworkProfilesResponse::ListNetworkProfilesResponse(
        const ListNetworkProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListNetworkProfilesResponsePrivate(this), parent)
{
    setRequest(new ListNetworkProfilesRequest(request));
    setReply(reply);
}

const ListNetworkProfilesRequest * ListNetworkProfilesResponse::request() const
{
    Q_D(const ListNetworkProfilesResponse);
    return static_cast<const ListNetworkProfilesRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListNetworkProfiles response.
 *
 * @param  response  Response to parse.
 */
void ListNetworkProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListNetworkProfilesResponsePrivate
 *
 * @brief  Private implementation for ListNetworkProfilesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNetworkProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListNetworkProfilesResponse instance.
 */
ListNetworkProfilesResponsePrivate::ListNetworkProfilesResponsePrivate(
    ListNetworkProfilesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListNetworkProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListNetworkProfilesResponsePrivate::ListNetworkProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworkProfilesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
