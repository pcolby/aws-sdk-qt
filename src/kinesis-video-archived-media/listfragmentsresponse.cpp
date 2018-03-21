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

#include "listfragmentsresponse.h"
#include "listfragmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideoArchivedMedia {

/**
 * @class  ListFragmentsResponse
 *
 * @brief  Handles KinesisVideoArchivedMedia ListFragments responses.
 *
 * @see    KinesisVideoArchivedMediaClient::listFragments
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFragmentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new ListFragmentsResponsePrivate(this), parent)
{
    setRequest(new ListFragmentsRequest(request));
    setReply(reply);
}

const ListFragmentsRequest * ListFragmentsResponse::request() const
{
    Q_D(const ListFragmentsResponse);
    return static_cast<const ListFragmentsRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideoArchivedMedia ListFragments response.
 *
 * @param  response  Response to parse.
 */
void ListFragmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFragmentsResponsePrivate
 *
 * @brief  Private implementation for ListFragmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFragmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFragmentsResponse instance.
 */
ListFragmentsResponsePrivate::ListFragmentsResponsePrivate(
    ListFragmentsQueueResponse * const q) : ListFragmentsPrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideoArchivedMedia ListFragmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFragmentsResponsePrivate::ListFragmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFragmentsResponse"));
    /// @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace AWS
