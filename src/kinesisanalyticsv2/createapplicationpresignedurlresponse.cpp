// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationpresignedurlresponse.h"
#include "createapplicationpresignedurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationPresignedUrlResponse
 * \brief The CreateApplicationPresignedUrlResponse class provides an interace for KinesisAnalyticsV2 CreateApplicationPresignedUrl responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplicationPresignedUrl
 */

/*!
 * Constructs a CreateApplicationPresignedUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationPresignedUrlResponse::CreateApplicationPresignedUrlResponse(
        const CreateApplicationPresignedUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new CreateApplicationPresignedUrlResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationPresignedUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationPresignedUrlRequest * CreateApplicationPresignedUrlResponse::request() const
{
    Q_D(const CreateApplicationPresignedUrlResponse);
    return static_cast<const CreateApplicationPresignedUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 CreateApplicationPresignedUrl \a response.
 */
void CreateApplicationPresignedUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationPresignedUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationPresignedUrlResponsePrivate
 * \brief The CreateApplicationPresignedUrlResponsePrivate class provides private implementation for CreateApplicationPresignedUrlResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationPresignedUrlResponsePrivate object with public implementation \a q.
 */
CreateApplicationPresignedUrlResponsePrivate::CreateApplicationPresignedUrlResponsePrivate(
    CreateApplicationPresignedUrlResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 CreateApplicationPresignedUrl response element from \a xml.
 */
void CreateApplicationPresignedUrlResponsePrivate::parseCreateApplicationPresignedUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationPresignedUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
