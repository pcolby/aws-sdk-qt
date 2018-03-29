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

#include "searchresourcesresponse.h"
#include "searchresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  SearchResourcesResponse
 *
 * @brief  Handles ResourceGroups SearchResources responses.
 *
 * @see    ResourceGroupsClient::searchResources
 */

/**
 * @brief  Constructs a new SearchResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchResourcesResponse::SearchResourcesResponse(
        const SearchResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new SearchResourcesResponsePrivate(this), parent)
{
    setRequest(new SearchResourcesRequest(request));
    setReply(reply);
}

const SearchResourcesRequest * SearchResourcesResponse::request() const
{
    Q_D(const SearchResourcesResponse);
    return static_cast<const SearchResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups SearchResources response.
 *
 * @param  response  Response to parse.
 */
void SearchResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SearchResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchResourcesResponsePrivate
 *
 * @brief  Private implementation for SearchResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchResourcesResponse instance.
 */
SearchResourcesResponsePrivate::SearchResourcesResponsePrivate(
    SearchResourcesResponse * const q) : ResourceGroupsResponsePrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups SearchResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchResourcesResponsePrivate::SearchResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchResourcesResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace QtAws
