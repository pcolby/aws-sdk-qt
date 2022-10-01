// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListBucketAnalyticsConfigurationsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
