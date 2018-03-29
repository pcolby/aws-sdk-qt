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

#include "listinputsresponse.h"
#include "listinputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/**
 * @class  ListInputsResponse
 *
 * @brief  Handles MediaLive ListInputs responses.
 *
 * @see    MediaLiveClient::listInputs
 */

/**
 * @brief  Constructs a new ListInputsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInputsResponse::ListInputsResponse(
        const ListInputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListInputsResponse(new ListInputsResponsePrivate(this), parent)
{
    setRequest(new ListInputsRequest(request));
    setReply(reply);
}

const ListInputsRequest * ListInputsResponse::request() const
{
    Q_D(const ListInputsResponse);
    return static_cast<const ListInputsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive ListInputs response.
 *
 * @param  response  Response to parse.
 */
void ListInputsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListInputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInputsResponsePrivate
 *
 * @brief  Private implementation for ListInputsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInputsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInputsResponse instance.
 */
ListInputsResponsePrivate::ListInputsResponsePrivate(
    ListInputsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaLive ListInputsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInputsResponsePrivate::parseListInputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputsResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
