// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclusterresponse.h"
#include "modifydbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterResponse
 * \brief The ModifyDBClusterResponse class provides an interace for DocDb ModifyDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBCluster
 */

/*!
 * Constructs a ModifyDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterResponse::ModifyDBClusterResponse(
        const ModifyDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterRequest * ModifyDBClusterResponse::request() const
{
    Q_D(const ModifyDBClusterResponse);
    return static_cast<const ModifyDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyDBCluster \a response.
 */
void ModifyDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterResponsePrivate
 * \brief The ModifyDBClusterResponsePrivate class provides private implementation for ModifyDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterResponsePrivate::ModifyDBClusterResponsePrivate(
    ModifyDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBCluster response element from \a xml.
 */
void ModifyDBClusterResponsePrivate::parseModifyDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
