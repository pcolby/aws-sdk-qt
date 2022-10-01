// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationversionsresponse.h"
#include "listapplicationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationVersionsResponse
 * \brief The ListApplicationVersionsResponse class provides an interace for KinesisAnalyticsV2 ListApplicationVersions responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::listApplicationVersions
 */

/*!
 * Constructs a ListApplicationVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationVersionsResponse::ListApplicationVersionsResponse(
        const ListApplicationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new ListApplicationVersionsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationVersionsRequest * ListApplicationVersionsResponse::request() const
{
    Q_D(const ListApplicationVersionsResponse);
    return static_cast<const ListApplicationVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 ListApplicationVersions \a response.
 */
void ListApplicationVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationVersionsResponsePrivate
 * \brief The ListApplicationVersionsResponsePrivate class provides private implementation for ListApplicationVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a ListApplicationVersionsResponsePrivate object with public implementation \a q.
 */
ListApplicationVersionsResponsePrivate::ListApplicationVersionsResponsePrivate(
    ListApplicationVersionsResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 ListApplicationVersions response element from \a xml.
 */
void ListApplicationVersionsResponsePrivate::parseListApplicationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
