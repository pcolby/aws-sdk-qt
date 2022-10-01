// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "discoverinputschemaresponse.h"
#include "discoverinputschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaResponse
 * \brief The DiscoverInputSchemaResponse class provides an interace for KinesisAnalyticsV2 DiscoverInputSchema responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::discoverInputSchema
 */

/*!
 * Constructs a DiscoverInputSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DiscoverInputSchemaResponse::DiscoverInputSchemaResponse(
        const DiscoverInputSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DiscoverInputSchemaResponsePrivate(this), parent)
{
    setRequest(new DiscoverInputSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DiscoverInputSchemaRequest * DiscoverInputSchemaResponse::request() const
{
    Q_D(const DiscoverInputSchemaResponse);
    return static_cast<const DiscoverInputSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DiscoverInputSchema \a response.
 */
void DiscoverInputSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DiscoverInputSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaResponsePrivate
 * \brief The DiscoverInputSchemaResponsePrivate class provides private implementation for DiscoverInputSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DiscoverInputSchemaResponsePrivate object with public implementation \a q.
 */
DiscoverInputSchemaResponsePrivate::DiscoverInputSchemaResponsePrivate(
    DiscoverInputSchemaResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DiscoverInputSchema response element from \a xml.
 */
void DiscoverInputSchemaResponsePrivate::parseDiscoverInputSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverInputSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
