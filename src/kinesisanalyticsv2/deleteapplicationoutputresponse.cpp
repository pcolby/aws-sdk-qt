// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationoutputresponse.h"
#include "deleteapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationOutputResponse
 * \brief The DeleteApplicationOutputResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationOutput responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationOutput
 */

/*!
 * Constructs a DeleteApplicationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationOutputResponse::DeleteApplicationOutputResponse(
        const DeleteApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationOutputRequest * DeleteApplicationOutputResponse::request() const
{
    Q_D(const DeleteApplicationOutputResponse);
    return static_cast<const DeleteApplicationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationOutput \a response.
 */
void DeleteApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationOutputResponsePrivate
 * \brief The DeleteApplicationOutputResponsePrivate class provides private implementation for DeleteApplicationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationOutputResponsePrivate object with public implementation \a q.
 */
DeleteApplicationOutputResponsePrivate::DeleteApplicationOutputResponsePrivate(
    DeleteApplicationOutputResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationOutput response element from \a xml.
 */
void DeleteApplicationOutputResponsePrivate::parseDeleteApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
