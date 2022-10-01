// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationreferencedatasourceresponse.h"
#include "deleteapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceResponse
 * \brief The DeleteApplicationReferenceDataSourceResponse class provides an interace for KinesisAnalytics DeleteApplicationReferenceDataSource responses.
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
 * \sa KinesisAnalyticsClient::deleteApplicationReferenceDataSource
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationReferenceDataSourceResponse::DeleteApplicationReferenceDataSourceResponse(
        const DeleteApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationReferenceDataSourceRequest * DeleteApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const DeleteApplicationReferenceDataSourceResponse);
    return static_cast<const DeleteApplicationReferenceDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplicationReferenceDataSource \a response.
 */
void DeleteApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceResponsePrivate
 * \brief The DeleteApplicationReferenceDataSourceResponsePrivate class provides private implementation for DeleteApplicationReferenceDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteApplicationReferenceDataSourceResponsePrivate::DeleteApplicationReferenceDataSourceResponsePrivate(
    DeleteApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplicationReferenceDataSource response element from \a xml.
 */
void DeleteApplicationReferenceDataSourceResponsePrivate::parseDeleteApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationReferenceDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
