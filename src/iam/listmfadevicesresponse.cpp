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

#include "listmfadevicesresponse.h"
#include "listmfadevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListMFADevicesResponse
 *
 * @brief  Handles IAM ListMFADevices responses.
 *
 * @see    IAMClient::listMFADevices
 */

/**
 * @brief  Constructs a new ListMFADevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMFADevicesResponse::ListMFADevicesResponse(
        const ListMFADevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListMFADevicesResponsePrivate(this), parent)
{
    setRequest(new ListMFADevicesRequest(request));
    setReply(reply);
}

const ListMFADevicesRequest * ListMFADevicesResponse::request() const
{
    Q_D(const ListMFADevicesResponse);
    return static_cast<const ListMFADevicesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListMFADevices response.
 *
 * @param  response  Response to parse.
 */
void ListMFADevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListMFADevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListMFADevicesResponsePrivate
 *
 * @brief  Private implementation for ListMFADevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMFADevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListMFADevicesResponse instance.
 */
ListMFADevicesResponsePrivate::ListMFADevicesResponsePrivate(
    ListMFADevicesResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListMFADevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListMFADevicesResponsePrivate::ListMFADevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMFADevicesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
