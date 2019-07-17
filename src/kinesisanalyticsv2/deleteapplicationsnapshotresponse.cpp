/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteapplicationsnapshotresponse.h"
#include "deleteapplicationsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationSnapshotResponse
 * \brief The DeleteApplicationSnapshotResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationSnapshot responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationSnapshot
 */

/*!
 * Constructs a DeleteApplicationSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationSnapshotResponse::DeleteApplicationSnapshotResponse(
        const DeleteApplicationSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationSnapshotRequest * DeleteApplicationSnapshotResponse::request() const
{
    Q_D(const DeleteApplicationSnapshotResponse);
    return static_cast<const DeleteApplicationSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationSnapshot \a response.
 */
void DeleteApplicationSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationSnapshotResponsePrivate
 * \brief The DeleteApplicationSnapshotResponsePrivate class provides private implementation for DeleteApplicationSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationSnapshotResponsePrivate object with public implementation \a q.
 */
DeleteApplicationSnapshotResponsePrivate::DeleteApplicationSnapshotResponsePrivate(
    DeleteApplicationSnapshotResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationSnapshot response element from \a xml.
 */
void DeleteApplicationSnapshotResponsePrivate::parseDeleteApplicationSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
