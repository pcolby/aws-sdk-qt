// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationresponse.h"
#include "deleteapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationResponse
 * \brief The DeleteApplicationResponse class provides an interace for KinesisAnalytics DeleteApplication responses.
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
 * \sa KinesisAnalyticsClient::deleteApplication
 */

/*!
 * Constructs a DeleteApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationResponse::DeleteApplicationResponse(
        const DeleteApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationRequest * DeleteApplicationResponse::request() const
{
    Q_D(const DeleteApplicationResponse);
    return static_cast<const DeleteApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplication \a response.
 */
void DeleteApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationResponsePrivate
 * \brief The DeleteApplicationResponsePrivate class provides private implementation for DeleteApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationResponsePrivate object with public implementation \a q.
 */
DeleteApplicationResponsePrivate::DeleteApplicationResponsePrivate(
    DeleteApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplication response element from \a xml.
 */
void DeleteApplicationResponsePrivate::parseDeleteApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
