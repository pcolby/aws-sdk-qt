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

#include "listapplicationversionsresponse.h"
#include "listapplicationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  ListApplicationVersionsResponse
 *
 * @brief  Handles ServerlessApplicationRepository ListApplicationVersions responses.
 *
 * @see    ServerlessApplicationRepositoryClient::listApplicationVersions
 */

/**
 * @brief  Constructs a new ListApplicationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApplicationVersionsResponse::ListApplicationVersionsResponse(
        const ListApplicationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new ListApplicationVersionsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationVersionsRequest(request));
    setReply(reply);
}

const ListApplicationVersionsRequest * ListApplicationVersionsResponse::request() const
{
    Q_D(const ListApplicationVersionsResponse);
    return static_cast<const ListApplicationVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a ServerlessApplicationRepository ListApplicationVersions response.
 *
 * @param  response  Response to parse.
 */
void ListApplicationVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListApplicationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListApplicationVersionsResponsePrivate
 *
 * @brief  Private implementation for ListApplicationVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListApplicationVersionsResponse instance.
 */
ListApplicationVersionsResponsePrivate::ListApplicationVersionsResponsePrivate(
    ListApplicationVersionsResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServerlessApplicationRepository ListApplicationVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListApplicationVersionsResponsePrivate::parseListApplicationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationVersionsResponse"));
    /// @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
