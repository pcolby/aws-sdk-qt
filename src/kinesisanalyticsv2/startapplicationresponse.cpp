// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationresponse.h"
#include "startapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::StartApplicationResponse
 * \brief The StartApplicationResponse class provides an interace for KinesisAnalyticsV2 StartApplication responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::startApplication
 */

/*!
 * Constructs a StartApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StartApplicationResponse::StartApplicationResponse(
        const StartApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new StartApplicationResponsePrivate(this), parent)
{
    setRequest(new StartApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartApplicationRequest * StartApplicationResponse::request() const
{
    Q_D(const StartApplicationResponse);
    return static_cast<const StartApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 StartApplication \a response.
 */
void StartApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::StartApplicationResponsePrivate
 * \brief The StartApplicationResponsePrivate class provides private implementation for StartApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a StartApplicationResponsePrivate object with public implementation \a q.
 */
StartApplicationResponsePrivate::StartApplicationResponsePrivate(
    StartApplicationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 StartApplication response element from \a xml.
 */
void StartApplicationResponsePrivate::parseStartApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
