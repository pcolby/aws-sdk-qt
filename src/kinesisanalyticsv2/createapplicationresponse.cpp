// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationresponse.h"
#include "createapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationResponse
 * \brief The CreateApplicationResponse class provides an interace for KinesisAnalyticsV2 CreateApplication responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplication
 */

/*!
 * Constructs a CreateApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationResponse::CreateApplicationResponse(
        const CreateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new CreateApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationRequest * CreateApplicationResponse::request() const
{
    Q_D(const CreateApplicationResponse);
    return static_cast<const CreateApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 CreateApplication \a response.
 */
void CreateApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationResponsePrivate
 * \brief The CreateApplicationResponsePrivate class provides private implementation for CreateApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationResponsePrivate object with public implementation \a q.
 */
CreateApplicationResponsePrivate::CreateApplicationResponsePrivate(
    CreateApplicationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 CreateApplication response element from \a xml.
 */
void CreateApplicationResponsePrivate::parseCreateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
