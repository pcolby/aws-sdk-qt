// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "discoverinputschemaresponse.h"
#include "discoverinputschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaResponse
 * \brief The DiscoverInputSchemaResponse class provides an interace for KinesisAnalytics DiscoverInputSchema responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::discoverInputSchema
 */

/*!
 * Constructs a DiscoverInputSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DiscoverInputSchemaResponse::DiscoverInputSchemaResponse(
        const DiscoverInputSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DiscoverInputSchemaResponsePrivate(this), parent)
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
 * Parses a successful KinesisAnalytics DiscoverInputSchema \a response.
 */
void DiscoverInputSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DiscoverInputSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaResponsePrivate
 * \brief The DiscoverInputSchemaResponsePrivate class provides private implementation for DiscoverInputSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DiscoverInputSchemaResponsePrivate object with public implementation \a q.
 */
DiscoverInputSchemaResponsePrivate::DiscoverInputSchemaResponsePrivate(
    DiscoverInputSchemaResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DiscoverInputSchema response element from \a xml.
 */
void DiscoverInputSchemaResponsePrivate::parseDiscoverInputSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverInputSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
