// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbclustersnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterSnapshotAttributeResponse
 * \brief The ModifyDBClusterSnapshotAttributeResponse class provides an interace for DocDb ModifyDBClusterSnapshotAttribute responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBClusterSnapshotAttribute
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterSnapshotAttributeResponse::ModifyDBClusterSnapshotAttributeResponse(
        const ModifyDBClusterSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBClusterSnapshotAttributeResponsePrivate(this), parent)
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
 * Parses a successful DocDb ModifyDBClusterSnapshotAttribute \a response.
 */
void ModifyDBClusterSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterSnapshotAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterSnapshotAttributeResponsePrivate
 * \brief The ModifyDBClusterSnapshotAttributeResponsePrivate class provides private implementation for ModifyDBClusterSnapshotAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterSnapshotAttributeResponsePrivate::ModifyDBClusterSnapshotAttributeResponsePrivate(
    ModifyDBClusterSnapshotAttributeResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBClusterSnapshotAttribute response element from \a xml.
 */
void ModifyDBClusterSnapshotAttributeResponsePrivate::parseModifyDBClusterSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterSnapshotAttributeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
