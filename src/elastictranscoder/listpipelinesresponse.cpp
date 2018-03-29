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

#include "listpipelinesresponse.h"
#include "listpipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ListPipelinesResponse
 *
 * @brief  Handles ElasticTranscoder ListPipelines responses.
 *
 * @see    ElasticTranscoderClient::listPipelines
 */

/**
 * @brief  Constructs a new ListPipelinesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPipelinesResponse::ListPipelinesResponse(
        const ListPipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListPipelinesResponsePrivate(this), parent)
{
    setRequest(new ListPipelinesRequest(request));
    setReply(reply);
}

const ListPipelinesRequest * ListPipelinesResponse::request() const
{
    Q_D(const ListPipelinesResponse);
    return static_cast<const ListPipelinesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ListPipelines response.
 *
 * @param  response  Response to parse.
 */
void ListPipelinesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPipelinesResponsePrivate
 *
 * @brief  Private implementation for ListPipelinesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPipelinesResponse instance.
 */
ListPipelinesResponsePrivate::ListPipelinesResponsePrivate(
    ListPipelinesResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ListPipelinesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPipelinesResponsePrivate::ListPipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelinesResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
