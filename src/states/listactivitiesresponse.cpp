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

#include "listactivitiesresponse.h"
#include "listactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  ListActivitiesResponse
 *
 * @brief  Handles SFN ListActivities responses.
 *
 * @see    SFNClient::listActivities
 */

/**
 * @brief  Constructs a new ListActivitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivitiesResponse::ListActivitiesResponse(
        const ListActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new ListActivitiesResponsePrivate(this), parent)
{
    setRequest(new ListActivitiesRequest(request));
    setReply(reply);
}

const ListActivitiesRequest * ListActivitiesResponse::request() const
{
    Q_D(const ListActivitiesResponse);
    return static_cast<const ListActivitiesRequest *>(d->request);
}

/**
 * @brief  Parse a SFN ListActivities response.
 *
 * @param  response  Response to parse.
 */
void ListActivitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListActivitiesResponsePrivate
 *
 * @brief  Private implementation for ListActivitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListActivitiesResponse instance.
 */
ListActivitiesResponsePrivate::ListActivitiesResponsePrivate(
    ListActivitiesQueueResponse * const q) : ListActivitiesPrivate(q)
{

}

/**
 * @brief  Parse an SFN ListActivitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListActivitiesResponsePrivate::ListActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivitiesResponse"));
    /// @todo
}

} // namespace SFN
} // namespace AWS
