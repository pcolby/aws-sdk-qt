/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "addapplicationreferencedatasourceresponse.h"
#include "addapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationReferenceDataSourceResponse
 * \brief The AddApplicationReferenceDataSourceResponse class provides an interace for KinesisAnalyticsV2 AddApplicationReferenceDataSource responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationReferenceDataSource
 */

/*!
 * Constructs a AddApplicationReferenceDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationReferenceDataSourceResponse::AddApplicationReferenceDataSourceResponse(
        const AddApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new AddApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new AddApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationReferenceDataSourceRequest * AddApplicationReferenceDataSourceResponse::request() const
{
    return static_cast<const AddApplicationReferenceDataSourceRequest *>(KinesisAnalyticsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 AddApplicationReferenceDataSource \a response.
 */
void AddApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationReferenceDataSourceResponsePrivate
 * \brief The AddApplicationReferenceDataSourceResponsePrivate class provides private implementation for AddApplicationReferenceDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationReferenceDataSourceResponsePrivate object with public implementation \a q.
 */
AddApplicationReferenceDataSourceResponsePrivate::AddApplicationReferenceDataSourceResponsePrivate(
    AddApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 AddApplicationReferenceDataSource response element from \a xml.
 */
void AddApplicationReferenceDataSourceResponsePrivate::parseAddApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationReferenceDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
