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

#include "listsamplesresponse.h"
#include "listsamplesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListSamplesResponse
 *
 * @brief  Handles DeviceFarm ListSamples responses.
 *
 * @see    DeviceFarmClient::listSamples
 */

/**
 * @brief  Constructs a new ListSamplesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSamplesResponse::ListSamplesResponse(
        const ListSamplesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListSamplesResponsePrivate(this), parent)
{
    setRequest(new ListSamplesRequest(request));
    setReply(reply);
}

const ListSamplesRequest * ListSamplesResponse::request() const
{
    Q_D(const ListSamplesResponse);
    return static_cast<const ListSamplesRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListSamples response.
 *
 * @param  response  Response to parse.
 */
void ListSamplesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSamplesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSamplesResponsePrivate
 *
 * @brief  Private implementation for ListSamplesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSamplesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSamplesResponse instance.
 */
ListSamplesResponsePrivate::ListSamplesResponsePrivate(
    ListSamplesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListSamplesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSamplesResponsePrivate::ListSamplesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSamplesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
