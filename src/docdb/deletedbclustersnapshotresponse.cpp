// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclustersnapshotresponse.h"
#include "deletedbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterSnapshotResponse
 * \brief The DeleteDBClusterSnapshotResponse class provides an interace for DocDb DeleteDBClusterSnapshot responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBClusterSnapshot
 */

/*!
 * Constructs a DeleteDBClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterSnapshotResponse::DeleteDBClusterSnapshotResponse(
        const DeleteDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterSnapshotRequest * DeleteDBClusterSnapshotResponse::request() const
{
    Q_D(const DeleteDBClusterSnapshotResponse);
    return static_cast<const DeleteDBClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBClusterSnapshot \a response.
 */
void DeleteDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterSnapshotResponsePrivate
 * \brief The DeleteDBClusterSnapshotResponsePrivate class provides private implementation for DeleteDBClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterSnapshotResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterSnapshotResponsePrivate::DeleteDBClusterSnapshotResponsePrivate(
    DeleteDBClusterSnapshotResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBClusterSnapshot response element from \a xml.
 */
void DeleteDBClusterSnapshotResponsePrivate::parseDeleteDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
