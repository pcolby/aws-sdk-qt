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

#include "searchresponse.h"
#include "searchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/**
 * @class  SearchResponse
 *
 * @brief  Handles CloudSearchDomain Search responses.
 *
 * @see    CloudSearchDomainClient::search
 */

/**
 * @brief  Constructs a new SearchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchResponse::SearchResponse(
        const SearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new SearchResponsePrivate(this), parent)
{
    setRequest(new SearchRequest(request));
    setReply(reply);
}

const SearchRequest * SearchResponse::request() const
{
    Q_D(const SearchResponse);
    return static_cast<const SearchRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearchDomain Search response.
 *
 * @param  response  Response to parse.
 */
void SearchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchResponsePrivate
 *
 * @brief  Private implementation for SearchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchResponse instance.
 */
SearchResponsePrivate::SearchResponsePrivate(
    SearchQueueResponse * const q) : SearchPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearchDomain SearchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchResponsePrivate::SearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchResponse"));
    /// @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
