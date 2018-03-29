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

#include "listbucketinventoryconfigurationsresponse.h"
#include "listbucketinventoryconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListBucketInventoryConfigurationsResponse
 *
 * @brief  Handles S3 ListBucketInventoryConfigurations responses.
 *
 * @see    S3Client::listBucketInventoryConfigurations
 */

/**
 * @brief  Constructs a new ListBucketInventoryConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBucketInventoryConfigurationsResponse::ListBucketInventoryConfigurationsResponse(
        const ListBucketInventoryConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketInventoryConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketInventoryConfigurationsRequest(request));
    setReply(reply);
}

const ListBucketInventoryConfigurationsRequest * ListBucketInventoryConfigurationsResponse::request() const
{
    Q_D(const ListBucketInventoryConfigurationsResponse);
    return static_cast<const ListBucketInventoryConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListBucketInventoryConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ListBucketInventoryConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBucketInventoryConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBucketInventoryConfigurationsResponsePrivate
 *
 * @brief  Private implementation for ListBucketInventoryConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketInventoryConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBucketInventoryConfigurationsResponse instance.
 */
ListBucketInventoryConfigurationsResponsePrivate::ListBucketInventoryConfigurationsResponsePrivate(
    ListBucketInventoryConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListBucketInventoryConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBucketInventoryConfigurationsResponsePrivate::parseListBucketInventoryConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketInventoryConfigurationsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
