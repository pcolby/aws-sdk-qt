// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationinputresponse.h"
#include "addapplicationinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputResponse
 * \brief The AddApplicationInputResponse class provides an interace for KinesisAnalyticsV2 AddApplicationInput responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationInput
 */

/*!
 * Constructs a AddApplicationInputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationInputResponse::AddApplicationInputResponse(
        const AddApplicationInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new AddApplicationInputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationInputRequest * AddApplicationInputResponse::request() const
{
    Q_D(const AddApplicationInputResponse);
    return static_cast<const AddApplicationInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 AddApplicationInput \a response.
 */
void AddApplicationInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputResponsePrivate
 * \brief The AddApplicationInputResponsePrivate class provides private implementation for AddApplicationInputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationInputResponsePrivate object with public implementation \a q.
 */
AddApplicationInputResponsePrivate::AddApplicationInputResponsePrivate(
    AddApplicationInputResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 AddApplicationInput response element from \a xml.
 */
void AddApplicationInputResponsePrivate::parseAddApplicationInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
