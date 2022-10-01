// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationresponse.h"
#include "stopapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::StopApplicationResponse
 * \brief The StopApplicationResponse class provides an interace for KinesisAnalyticsV2 StopApplication responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::stopApplication
 */

/*!
 * Constructs a StopApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StopApplicationResponse::StopApplicationResponse(
        const StopApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new StopApplicationResponsePrivate(this), parent)
{
    setRequest(new StopApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopApplicationRequest * StopApplicationResponse::request() const
{
    Q_D(const StopApplicationResponse);
    return static_cast<const StopApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 StopApplication \a response.
 */
void StopApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::StopApplicationResponsePrivate
 * \brief The StopApplicationResponsePrivate class provides private implementation for StopApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a StopApplicationResponsePrivate object with public implementation \a q.
 */
StopApplicationResponsePrivate::StopApplicationResponsePrivate(
    StopApplicationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 StopApplication response element from \a xml.
 */
void StopApplicationResponsePrivate::parseStopApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
