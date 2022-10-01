// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclustersnapshotresponse.h"
#include "createdbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotResponse
 * \brief The CreateDBClusterSnapshotResponse class provides an interace for DocDb CreateDBClusterSnapshot responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterSnapshot
 */

/*!
 * Constructs a CreateDBClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBClusterSnapshotResponse::CreateDBClusterSnapshotResponse(
        const CreateDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBClusterSnapshotRequest * CreateDBClusterSnapshotResponse::request() const
{
    Q_D(const CreateDBClusterSnapshotResponse);
    return static_cast<const CreateDBClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBClusterSnapshot \a response.
 */
void CreateDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotResponsePrivate
 * \brief The CreateDBClusterSnapshotResponsePrivate class provides private implementation for CreateDBClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterSnapshotResponsePrivate object with public implementation \a q.
 */
CreateDBClusterSnapshotResponsePrivate::CreateDBClusterSnapshotResponsePrivate(
    CreateDBClusterSnapshotResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBClusterSnapshot response element from \a xml.
 */
void CreateDBClusterSnapshotResponsePrivate::parseCreateDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
