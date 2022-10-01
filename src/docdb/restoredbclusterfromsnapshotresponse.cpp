// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclusterfromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterFromSnapshotResponse
 * \brief The RestoreDBClusterFromSnapshotResponse class provides an interace for DocDb RestoreDBClusterFromSnapshot responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterFromSnapshot
 */

/*!
 * Constructs a RestoreDBClusterFromSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreDBClusterFromSnapshotResponse::RestoreDBClusterFromSnapshotResponse(
        const RestoreDBClusterFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RestoreDBClusterFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterFromSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreDBClusterFromSnapshotRequest * RestoreDBClusterFromSnapshotResponse::request() const
{
    Q_D(const RestoreDBClusterFromSnapshotResponse);
    return static_cast<const RestoreDBClusterFromSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RestoreDBClusterFromSnapshot \a response.
 */
void RestoreDBClusterFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreDBClusterFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterFromSnapshotResponsePrivate
 * \brief The RestoreDBClusterFromSnapshotResponsePrivate class provides private implementation for RestoreDBClusterFromSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterFromSnapshotResponsePrivate object with public implementation \a q.
 */
RestoreDBClusterFromSnapshotResponsePrivate::RestoreDBClusterFromSnapshotResponsePrivate(
    RestoreDBClusterFromSnapshotResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RestoreDBClusterFromSnapshot response element from \a xml.
 */
void RestoreDBClusterFromSnapshotResponsePrivate::parseRestoreDBClusterFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterFromSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
