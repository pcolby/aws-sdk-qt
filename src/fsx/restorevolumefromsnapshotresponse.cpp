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

#include "restorevolumefromsnapshotresponse.h"
#include "restorevolumefromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::RestoreVolumeFromSnapshotResponse
 * \brief The RestoreVolumeFromSnapshotResponse class provides an interace for FSx RestoreVolumeFromSnapshot responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::restoreVolumeFromSnapshot
 */

/*!
 * Constructs a RestoreVolumeFromSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreVolumeFromSnapshotResponse::RestoreVolumeFromSnapshotResponse(
        const RestoreVolumeFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new RestoreVolumeFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreVolumeFromSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreVolumeFromSnapshotRequest * RestoreVolumeFromSnapshotResponse::request() const
{
    Q_D(const RestoreVolumeFromSnapshotResponse);
    return static_cast<const RestoreVolumeFromSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx RestoreVolumeFromSnapshot \a response.
 */
void RestoreVolumeFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreVolumeFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::RestoreVolumeFromSnapshotResponsePrivate
 * \brief The RestoreVolumeFromSnapshotResponsePrivate class provides private implementation for RestoreVolumeFromSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a RestoreVolumeFromSnapshotResponsePrivate object with public implementation \a q.
 */
RestoreVolumeFromSnapshotResponsePrivate::RestoreVolumeFromSnapshotResponsePrivate(
    RestoreVolumeFromSnapshotResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx RestoreVolumeFromSnapshot response element from \a xml.
 */
void RestoreVolumeFromSnapshotResponsePrivate::parseRestoreVolumeFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreVolumeFromSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
