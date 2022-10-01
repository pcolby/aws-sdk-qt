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
