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

#include "listbucketmetricsconfigurationsresponse.h"
#include "listbucketmetricsconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListBucketMetricsConfigurationsResponse
 *
 * @brief  Handles S3 ListBucketMetricsConfigurations responses.
 *
 * @see    S3Client::listBucketMetricsConfigurations
 */

/**
 * @brief  Constructs a new ListBucketMetricsConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBucketMetricsConfigurationsResponse::ListBucketMetricsConfigurationsResponse(
        const ListBucketMetricsConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketMetricsConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketMetricsConfigurationsRequest(request));
    setReply(reply);
}

const ListBucketMetricsConfigurationsRequest * ListBucketMetricsConfigurationsResponse::request() const
{
    Q_D(const ListBucketMetricsConfigurationsResponse);
    return static_cast<const ListBucketMetricsConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListBucketMetricsConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ListBucketMetricsConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBucketMetricsConfigurationsResponsePrivate
 *
 * @brief  Private implementation for ListBucketMetricsConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketMetricsConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBucketMetricsConfigurationsResponse instance.
 */
ListBucketMetricsConfigurationsResponsePrivate::ListBucketMetricsConfigurationsResponsePrivate(
    ListBucketMetricsConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListBucketMetricsConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBucketMetricsConfigurationsResponsePrivate::ListBucketMetricsConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketMetricsConfigurationsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
