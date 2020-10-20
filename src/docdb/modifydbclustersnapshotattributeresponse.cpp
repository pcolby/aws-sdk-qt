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

#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbclustersnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterSnapshotAttributeResponse
 * \brief The ModifyDBClusterSnapshotAttributeResponse class provides an interace for DocDB ModifyDBClusterSnapshotAttribute responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBClusterSnapshotAttribute
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterSnapshotAttributeResponse::ModifyDBClusterSnapshotAttributeResponse(
        const ModifyDBClusterSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyDBClusterSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterSnapshotAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterSnapshotAttributeRequest * ModifyDBClusterSnapshotAttributeResponse::request() const
{
    Q_D(const ModifyDBClusterSnapshotAttributeResponse);
    return static_cast<const ModifyDBClusterSnapshotAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyDBClusterSnapshotAttribute \a response.
 */
void ModifyDBClusterSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterSnapshotAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterSnapshotAttributeResponsePrivate
 * \brief The ModifyDBClusterSnapshotAttributeResponsePrivate class provides private implementation for ModifyDBClusterSnapshotAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterSnapshotAttributeResponsePrivate::ModifyDBClusterSnapshotAttributeResponsePrivate(
    ModifyDBClusterSnapshotAttributeResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyDBClusterSnapshotAttribute response element from \a xml.
 */
void ModifyDBClusterSnapshotAttributeResponsePrivate::parseModifyDBClusterSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterSnapshotAttributeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
