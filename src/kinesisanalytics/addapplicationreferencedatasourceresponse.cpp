// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationreferencedatasourceresponse.h"
#include "addapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationReferenceDataSourceResponse
 * \brief The AddApplicationReferenceDataSourceResponse class provides an interace for KinesisAnalytics AddApplicationReferenceDataSource responses.
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
 * \sa KinesisAnalyticsClient::addApplicationReferenceDataSource
 */

/*!
 * Constructs a AddApplicationReferenceDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationReferenceDataSourceResponse::AddApplicationReferenceDataSourceResponse(
        const AddApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new AddApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationReferenceDataSourceRequest * AddApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const AddApplicationReferenceDataSourceResponse);
    return static_cast<const AddApplicationReferenceDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationReferenceDataSource \a response.
 */
void AddApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationReferenceDataSourceResponsePrivate
 * \brief The AddApplicationReferenceDataSourceResponsePrivate class provides private implementation for AddApplicationReferenceDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationReferenceDataSourceResponsePrivate object with public implementation \a q.
 */
AddApplicationReferenceDataSourceResponsePrivate::AddApplicationReferenceDataSourceResponsePrivate(
    AddApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationReferenceDataSource response element from \a xml.
 */
void AddApplicationReferenceDataSourceResponsePrivate::parseAddApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationReferenceDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
