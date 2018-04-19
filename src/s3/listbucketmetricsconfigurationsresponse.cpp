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

/*!
 * \class QtAws::S3::ListBucketMetricsConfigurationsResponse
 * \brief The ListBucketMetricsConfigurationsResponse class provides an interace for S3 ListBucketMetricsConfigurations responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketMetricsConfigurations
 */

/*!
 * Constructs a ListBucketMetricsConfigurationsResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const ListBucketMetricsConfigurationsRequest * ListBucketMetricsConfigurationsResponse::request() const
{
    Q_D(const ListBucketMetricsConfigurationsResponse);
    return static_cast<const ListBucketMetricsConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListBucketMetricsConfigurations \a response.
 */
void ListBucketMetricsConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBucketMetricsConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketMetricsConfigurationsResponsePrivate
 * \brief The ListBucketMetricsConfigurationsResponsePrivate class provides private implementation for ListBucketMetricsConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketMetricsConfigurationsResponsePrivate object with public implementation \a q.
 */
ListBucketMetricsConfigurationsResponsePrivate::ListBucketMetricsConfigurationsResponsePrivate(
    ListBucketMetricsConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBucketMetricsConfigurations response element from \a xml.
 */
void ListBucketMetricsConfigurationsResponsePrivate::parseListBucketMetricsConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketMetricsConfigurationsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
