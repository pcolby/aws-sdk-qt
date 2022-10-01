// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
