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

#include "listplatformversionsresponse.h"
#include "listplatformversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  ListPlatformVersionsResponse
 *
 * @brief  Handles ElasticBeanstalk ListPlatformVersions responses.
 *
 * @see    ElasticBeanstalkClient::listPlatformVersions
 */

/**
 * @brief  Constructs a new ListPlatformVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPlatformVersionsResponse::ListPlatformVersionsResponse(
        const ListPlatformVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ListPlatformVersionsResponsePrivate(this), parent)
{
    setRequest(new ListPlatformVersionsRequest(request));
    setReply(reply);
}

const ListPlatformVersionsRequest * ListPlatformVersionsResponse::request() const
{
    Q_D(const ListPlatformVersionsResponse);
    return static_cast<const ListPlatformVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ListPlatformVersions response.
 *
 * @param  response  Response to parse.
 */
void ListPlatformVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPlatformVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPlatformVersionsResponsePrivate
 *
 * @brief  Private implementation for ListPlatformVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPlatformVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPlatformVersionsResponse instance.
 */
ListPlatformVersionsResponsePrivate::ListPlatformVersionsResponsePrivate(
    ListPlatformVersionsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ListPlatformVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPlatformVersionsResponsePrivate::ListPlatformVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlatformVersionsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
