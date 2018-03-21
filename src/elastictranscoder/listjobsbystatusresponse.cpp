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

#include "listjobsbystatusresponse.h"
#include "listjobsbystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ListJobsByStatusResponse
 *
 * @brief  Handles ElasticTranscoder ListJobsByStatus responses.
 *
 * @see    ElasticTranscoderClient::listJobsByStatus
 */

/**
 * @brief  Constructs a new ListJobsByStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobsByStatusResponse::ListJobsByStatusResponse(
        const ListJobsByStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListJobsByStatusResponsePrivate(this), parent)
{
    setRequest(new ListJobsByStatusRequest(request));
    setReply(reply);
}

const ListJobsByStatusRequest * ListJobsByStatusResponse::request() const
{
    Q_D(const ListJobsByStatusResponse);
    return static_cast<const ListJobsByStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ListJobsByStatus response.
 *
 * @param  response  Response to parse.
 */
void ListJobsByStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListJobsByStatusResponsePrivate
 *
 * @brief  Private implementation for ListJobsByStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobsByStatusResponse instance.
 */
ListJobsByStatusResponsePrivate::ListJobsByStatusResponsePrivate(
    ListJobsByStatusQueueResponse * const q) : ListJobsByStatusPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ListJobsByStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobsByStatusResponsePrivate::ListJobsByStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsByStatusResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace AWS
