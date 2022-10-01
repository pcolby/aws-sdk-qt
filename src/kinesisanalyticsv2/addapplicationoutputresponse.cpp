// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationoutputresponse.h"
#include "addapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationOutputResponse
 * \brief The AddApplicationOutputResponse class provides an interace for KinesisAnalyticsV2 AddApplicationOutput responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationOutput
 */

/*!
 * Constructs a AddApplicationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationOutputResponse::AddApplicationOutputResponse(
        const AddApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new AddApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationOutputRequest * AddApplicationOutputResponse::request() const
{
    Q_D(const AddApplicationOutputResponse);
    return static_cast<const AddApplicationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 AddApplicationOutput \a response.
 */
void AddApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationOutputResponsePrivate
 * \brief The AddApplicationOutputResponsePrivate class provides private implementation for AddApplicationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationOutputResponsePrivate object with public implementation \a q.
 */
AddApplicationOutputResponsePrivate::AddApplicationOutputResponsePrivate(
    AddApplicationOutputResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 AddApplicationOutput response element from \a xml.
 */
void AddApplicationOutputResponsePrivate::parseAddApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
