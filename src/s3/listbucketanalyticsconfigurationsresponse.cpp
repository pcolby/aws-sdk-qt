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

#include "listbucketanalyticsconfigurationsresponse.h"
#include "listbucketanalyticsconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketAnalyticsConfigurationsResponse
 * \brief The ListBucketAnalyticsConfigurationsResponse class provides an interace for S3 ListBucketAnalyticsConfigurations responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketAnalyticsConfigurations
 */

/*!
 * Constructs a ListBucketAnalyticsConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBucketAnalyticsConfigurationsResponse::ListBucketAnalyticsConfigurationsResponse(
        const ListBucketAnalyticsConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketAnalyticsConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketAnalyticsConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBucketAnalyticsConfigurationsRequest * ListBucketAnalyticsConfigurationsResponse::request() const
{
    Q_D(const ListBucketAnalyticsConfigurationsResponse);
    return static_cast<const ListBucketAnalyticsConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListBucketAnalyticsConfigurations \a response.
 */
void ListBucketAnalyticsConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBucketAnalyticsConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketAnalyticsConfigurationsResponsePrivate
 * \brief The ListBucketAnalyticsConfigurationsResponsePrivate class provides private implementation for ListBucketAnalyticsConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketAnalyticsConfigurationsResponsePrivate object with public implementation \a q.
 */
ListBucketAnalyticsConfigurationsResponsePrivate::ListBucketAnalyticsConfigurationsResponsePrivate(
    ListBucketAnalyticsConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBucketAnalyticsConfigurations response element from \a xml.
 */
void ListBucketAnalyticsConfigurationsResponsePrivate::parseListBucketAnalyticsConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketAnalyticsConfigurationsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
