/*
    Copyright 2013-2020 Paul Colby

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

#include "createapplicationsnapshotresponse.h"
#include "createapplicationsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotResponse
 * \brief The CreateApplicationSnapshotResponse class provides an interace for KinesisAnalyticsV2 CreateApplicationSnapshot responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplicationSnapshot
 */

/*!
 * Constructs a CreateApplicationSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationSnapshotResponse::CreateApplicationSnapshotResponse(
        const CreateApplicationSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new CreateApplicationSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationSnapshotRequest * CreateApplicationSnapshotResponse::request() const
{
    Q_D(const CreateApplicationSnapshotResponse);
    return static_cast<const CreateApplicationSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 CreateApplicationSnapshot \a response.
 */
void CreateApplicationSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotResponsePrivate
 * \brief The CreateApplicationSnapshotResponsePrivate class provides private implementation for CreateApplicationSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationSnapshotResponsePrivate object with public implementation \a q.
 */
CreateApplicationSnapshotResponsePrivate::CreateApplicationSnapshotResponsePrivate(
    CreateApplicationSnapshotResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 CreateApplicationSnapshot response element from \a xml.
 */
void CreateApplicationSnapshotResponsePrivate::parseCreateApplicationSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
