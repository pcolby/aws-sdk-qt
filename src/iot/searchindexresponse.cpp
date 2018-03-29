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

#include "searchindexresponse.h"
#include "searchindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  SearchIndexResponse
 *
 * @brief  Handles IoT SearchIndex responses.
 *
 * @see    IoTClient::searchIndex
 */

/**
 * @brief  Constructs a new SearchIndexResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchIndexResponse::SearchIndexResponse(
        const SearchIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SearchIndexResponsePrivate(this), parent)
{
    setRequest(new SearchIndexRequest(request));
    setReply(reply);
}

const SearchIndexRequest * SearchIndexResponse::request() const
{
    Q_D(const SearchIndexResponse);
    return static_cast<const SearchIndexRequest *>(d->request);
}

/**
 * @brief  Parse a IoT SearchIndex response.
 *
 * @param  response  Response to parse.
 */
void SearchIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchIndexResponsePrivate
 *
 * @brief  Private implementation for SearchIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchIndexResponse instance.
 */
SearchIndexResponsePrivate::SearchIndexResponsePrivate(
    SearchIndexQueueResponse * const q) : SearchIndexPrivate(q)
{

}

/**
 * @brief  Parse an IoT SearchIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchIndexResponsePrivate::SearchIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchIndexResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
